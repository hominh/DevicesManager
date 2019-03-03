#include "tcpconnection.h"

statusOutPutStr stOpBuff[MAX_DEVICE_IN_SERVER];
unsigned char BufferPacket[1024];
unsigned short LengthPacket=0;
const unsigned char MapBit[8]={0x00,0x01,0x03,0x07,0x0f,0x1f,0x3f,0x7f};

TcpConnection::TcpConnection(QObject *parent) : QObject(parent)
{
    qDebug() << this << Q_FUNC_INFO << "Created TcpConnection";

    typedef struct statusOutPutStr
    {
        unsigned char hour;
        unsigned char min;
        unsigned char sec;
        unsigned char day;
        unsigned char month_day_week;// 5 bit thap là thang, 3 bit cao là thứ
        unsigned char year;
        //unsigned char  stBuffer[MAX_OUT_PUT];
    }statusOutPutStr;

    dbConnection = new DatabaseConnection;
}

TcpConnection::~TcpConnection()
{
    qDebug() << this << "Destroyed";
}

void TcpConnection::setSocket(QTcpSocket *socket)
{
    m_socket = socket;
    connect(m_socket,&QTcpSocket::connected,this,&TcpConnection::connected);
    connect(m_socket,&QTcpSocket::disconnected,this,&TcpConnection::disconnected);
    connect(m_socket,&QTcpSocket::readyRead,this,&TcpConnection::readyRead);
    connect(m_socket,&QTcpSocket::bytesWritten,this,&TcpConnection::bytesWritten);
    connect(m_socket,&QTcpSocket::stateChanged,this,&TcpConnection::stateChanged);
    connect(m_socket,static_cast<void (QTcpSocket::*)(QAbstractSocket::SocketError)>(&QTcpSocket::error),this,&TcpConnection::error);
}

QTcpSocket *TcpConnection::getSocket()
{
    if(!sender()) return 0;
    return static_cast<QTcpSocket*>(sender());
}

void TcpConnection::connected()
{
    if(!sender()) return;
    qDebug() << this << "connected" << sender();
}

void TcpConnection::disconnected()
{
    if(!sender()) return;
    qDebug() << this << "disconnected" << sender();
}

void TcpConnection::readyRead()
{
    if(!sender()) return;
    QByteArray Data = getSocket()->readAll();
    qDebug() << this << "readyRead" << Data;
    QString strTmp = "0 1 CMD_DATA_ST_OUTPUT 2 1"; //... - Id CMD DAY STATUS
    QStringList listTmp = strTmp.split(" ");
    QDateTime currentDateTime = QDateTime::currentDateTime();
    QString strCurrentDateTime = currentDateTime.toString("yyyyMMddhhmmss");
    update2DB(listTmp[4],listTmp[2],listTmp[3],strCurrentDateTime,listTmp[1] );

    //update lai tableview

    for(int i=0; i < Data.length(); i++)
    {
        RxByte = Data[i];
        if(RxByte==0xFE){
            indexcmdBuffer = 0;
        }
        cmdBuffer[indexcmdBuffer] = RxByte;
        if(indexcmdBuffer < MAX_CMD_BUFFER_SIZE - 16)indexcmdBuffer++;
        if(RxByte == 0xFF)
        {
            if((cmdBuffer[0]==0xFE)&&(indexcmdBuffer >= 5))
            {
                //qDebug()<< indexcmdBuffer;
                pack_len = de_paket_7bit_buff(cmdBuffer, indexcmdBuffer);
                if(pack_len!=0)
                {
                    //qDebug()<< "OKE CRC";
                    workCmdBuffer();
                    TimerCount = 10;
                }
            }
        }
    }// time out o day nua, neu ma 10s ko gui goi nào len thi disconnet
}

void TcpConnection::sendData(void)
{
    qDebug() << "send data";
    BufferPacket[0] = 0;
    BufferPacket[1] = 0;
    BufferPacket[2] = CMD_WRITE_DATA_FLASH;
    BufferPacket[3] = 1;

    //Put data to BufferPacket

    memcpy(BufferPacket+4,&TimeSetUpDev[0].TimeWork16DevWeek[0],sizeof(TimeSetUpDev[0].TimeWork16DevWeek[0]));
    LengthPacket = make_packet_7bit_buff(BufferPacket,sizeof(TimeSetUpDev[0].TimeWork16DevWeek[0])+4);
    socket->write((char*)BufferPacket,LengthPacket);
}


void TcpConnection::update2DB(QString status, QString cmd, QString dayinweek, QString updated_at, QString name)
{
    qDebug() << "update2DB";

    if(dbConnection)
    {
        QSqlQuery query;
        QString str = QString("UPDATE tbl_device SET status = '%1',cmd = '%2',dayinweek = '%3',updated_at = '%4' WHERE name = '%5'").arg(status).arg(cmd).arg(dayinweek).arg(updated_at).arg(name);
        query.exec(str);
        if(query.isActive())
        {
            qDebug() << "Update data successfull";
        }
        else
        {
            qDebug() << "Update data unsuccessfull";
        }
    }
    else
    {
        qDebug() << "Could not connect to DB";
    }
}

void TcpConnection::refreshDB()
{
    qDebug() << "refreshDB";
}

void TcpConnection::CheckTimeOut()
{
    static unsigned short counter;
    counter++;
    if(counter >= 4)
    {
        sendData();
        counter = 0;
    }
    if(TimerCount > 0)TimerCount--;
    else{
        disconnected();
    }
}

unsigned char TcpConnection::de_paket_7bit_buff(unsigned char buffer_in[],unsigned char length)
{
    unsigned short index_in = 0, index_out = 0;
    unsigned char x = 1;
    unsigned char buffer_out[MAX_OUT_BUFF_7_BIT]={0};
    unsigned short crc=0;

    for(index_in = 1; index_in < length-1; index_in++)
    {
        buffer_out[index_out] = (buffer_in[index_in] << x) | (buffer_in[index_in+1] >> (7-x));
        x++;
        index_out++;
        if(x >= 8) {
            x = 1;
            index_in++;
        }
    }
    index_out--;
    for(index_in = 0; index_in < index_out - 2; index_in++) crc ^= buffer_out[index_in];
    if(crc != ((buffer_out[index_out-2]<<8)|buffer_out[index_out-1])) return 0;
    index_out -= 2;
    memcpy(buffer_in, buffer_out,index_out);
    return index_out;
}

void TcpConnection::workCmdBuffer(void)
{
    /*for(int i = 0; i < sizeof(cmdBuffer); i++)
    {
        if(i < 10)
        {
            qDebug() << "i: " << i << "- Value: " << cmdBuffer[i];
        }

    }*/

    if(cmdBuffer[0] == 0)
    {
        switch(cmdBuffer[2])
        {
        case CMD_DATA_ST_OUTPUT:
            qDebug() << "CMD_DATA_ST_OUTPUT";
            memcpy(&stOpBuff[cmdBuffer[1]],cmdBuffer + 3,sizeof(stOpBuff[0]));
            //for(int i=0; i<10; i++)qDebug("%x",cmdBuffer[i]);
            qDebug() << "Data" << cmdBuffer[0] << cmdBuffer[1] << stOpBuff[cmdBuffer[1]].min << stOpBuff[cmdBuffer[1]].stBuffer[15];
            idName = cmdBuffer[1];
            break;
        }
    }
}



unsigned char TcpConnection::make_packet_7bit_buff(unsigned char buffer_in[],unsigned char length)
{
    unsigned short index_in = 0, index_out = 0;
    unsigned char x = 1;
    unsigned char buffer_out[MAX_OUT_BUFF_7_BIT]={0};
    unsigned short crc=0;
    for(index_in = 0; index_in < length; index_in++){
        crc ^=  buffer_in[index_in];
    }
    length += 2;
    buffer_in[length-2] = crc>>8;
    buffer_in[length-1] = crc&0xff;
    for(index_in = 0; index_in < length; index_in ++){
        buffer_out[index_out] = (buffer_out[index_out]<<(8-x)) | (buffer_in[index_in] >> x);
        index_out++;
        buffer_out[index_out] = buffer_in[index_in] & MapBit[x];
        x++;
        if(x >= 8) {
            x = 1;
            index_out++;
        }
    }
    if(x>1)	buffer_out[index_out]<<=(8-x);
    index_out++;
    memcpy(buffer_in+1, buffer_out, index_out);
    index_out++;
    buffer_in[0] = 0xFE;
    buffer_in[index_out]=0xFF;
    index_out++;
    return index_out;
}

void TcpConnection::bytesWritten(qint64 bytes)
{
    if(!sender()) return;
    qDebug() << this << "bytesWritten" << getSocket() << "number of bytes" << bytes;
}

void TcpConnection::stateChanged(QAbstractSocket::SocketState socketState)
{
    if(!sender()) return;
    qDebug() << this << "stateChanged" << getSocket() << "State = " << socketState;
}

void TcpConnection::error(QAbstractSocket::SocketError socketError)
{
    if(!sender()) return;
    qDebug() << this << "error" << getSocket() << "error = " << socketError;
}
