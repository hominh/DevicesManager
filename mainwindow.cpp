#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{



    dbConnection = new DatabaseConnection;
    isConnect = dbConnection->connData();

    tcpconnection = new TcpConnection;

    ui->setupUi(this);
    //QTimer *timer = new QTimer(this);
    //connect(timer, SIGNAL(timeout()), this, SLOT(init()));
    //timer->start(2000);

    init();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::init()
{
    qDebug() << "init";

    ui->comboBoxFloor->insertItem(0,QString::fromUtf8("Chọn tầng"));
    ui->comboBoxDeviceType->insertItem(0,QString::fromUtf8("Chọn loại thiết bị"));
    ui->comboBoxDevice->insertItem(0,QString::fromUtf8("Chọn thiết bị"));
    ui->comboBoxIp->insertItem(0,QString::fromUtf8("Chọn Ip"));
    for(int i = 0; i<=MAX_MINUTE;i++)
    {
        ui->comboBoxHourStart->insertItem(i,QString::number(i));
        ui->comboBoxHourFinish->insertItem(i,QString::number(i));
    }
    for(int i = 0; i <= MAX_HOUR; i++)
    {
        ui->comboBoxMinuteStart->insertItem(i,QString::number(i));
        ui->comboBoxMinuteFinish->insertItem(i,QString::number(i));
    }
    QSqlQuery query;
    if(isConnect == true)
    {
        if(query.exec("SELECT * FROM tbl_floor"))
        {
            while(query.next())
            {
                ui->comboBoxFloor->insertItem(query.value(0).toInt(),query.value(1).toString());
            }
        }
        else
        {
            QMessageBox::information(0,QString::fromUtf8("Thông báo"),QString::fromUtf8("Không kết nối được cơ sở dữ liệu."));
        }
    }

    //Listen
    if(m_server.listen(QHostAddress::Any,1234))
    {
        connect(tcpconnection,SIGNAL(dataReceived(QString)),this,SLOT(readReply(QString)));
        qDebug() << this << "server started";
        //qDebug() << "tcpconnection->dataReceived(): " << tcpconnection->str;
        //ui->textEdit->setText(tcpconnection->dataReceived);
    }
    else
    {
        qDebug() << this << "error:: " << m_server.errorString();
    }

    model = new QSqlQueryModel;
    QString queryDevice = "SELECT * FROM tbl_device";
    if(isConnect == true)
    {
        model->setQuery(queryDevice);
        SetupTablView(model);
    }

}



void MainWindow::on_pushButtonSetUp_clicked()
{
    qDebug() << "on_pushButtonSetUp_clicked";
}

void MainWindow::on_pushButtonCancel_clicked()
{
    qDebug() << "on_pushButtonCancel_clicked";
}


void MainWindow::SetupTablView(QSqlQueryModel *model)
{
    model->setHeaderData(model->record().indexOf("type"), Qt::Horizontal,QString::fromUtf8("Loại Thiết bị"));
    model->setHeaderData(model->record().indexOf("name"), Qt::Horizontal,QString::fromUtf8("Thiết bị"));
    model->setHeaderData(model->record().indexOf("status"), Qt::Horizontal,QString::fromUtf8("Trạng thái"));
    model->setHeaderData(model->record().indexOf("updated_at"), Qt::Horizontal,QString::fromUtf8("Thời gian"));

    ui->tableView->setModel(model);
}

