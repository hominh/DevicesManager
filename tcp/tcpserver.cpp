#include "tcpserver.h"

TcpServer::TcpServer(QObject *parent) : QTcpServer(parent)
{
    qDebug() << this << "Created";
}

TcpServer::~TcpServer()
{
    qDebug() << this << "destroyed";
}

bool TcpServer::listen(const QHostAddress &address, qint16 port)
{
    qDebug() << "TcpServer::listen";
    if(!QTcpServer::listen(address,port)) return false;

    m_thread = new QThread(this);
    m_connections = new TcpConnections();

    //qDebug() << "m_thread: "<<m_thread->

    connect(m_thread, &QThread::started, m_connections,&TcpConnections::start, Qt::QueuedConnection);
    connect(this, &TcpServer::accepting,m_connections, &TcpConnections::accept,Qt::QueuedConnection);
    connect(this, &TcpServer::finished,m_connections, &TcpConnections::quit,Qt::QueuedConnection);
    connect(m_connections, &TcpConnections::finished,this, &TcpServer::complete,Qt::QueuedConnection);

    m_connections->moveToThread(m_thread);
    m_thread->start();

    return true;
}

void TcpServer::close()
{
    qDebug() << this << "closing server";
    emit finished();
    QTcpServer::close();
}

qint64 TcpServer::port()
{
    if(isListening())
    {
        return this->serverPort();
    }
    else
    {
        return 1000;
    }
}

void TcpServer::incomingConnection(qintptr descriptor)
{
    qDebug() << this << Q_FUNC_INFO << "incomingConnection where" << descriptor;
    TcpConnection *connection = new TcpConnection();

    //call accept function
    accept(descriptor,connection);
}

void TcpServer::accept(qintptr descriptor, TcpConnection *connection)
{
    qDebug() << this << Q_FUNC_INFO << "accepting connection " << descriptor;
    connection->moveToThread(m_thread);
    emit accepting(descriptor,connection);
}

void TcpServer::complete()
{
    if(!m_thread)
    {
        qWarning() << this << "exiting complete there was no thread";
    }
    qDebug() << this << "complete called, destroying thread";
    delete m_connections;

    qDebug() << "quiting thread";
    m_thread->quit();
    m_thread->wait();

    delete m_thread;
    qDebug() << this << "complete";
}
