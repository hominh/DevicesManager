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

    if(isConnect)
    {
        ui->statusBar->showMessage("Connected database successfull");
    }
    else
    {
        ui->statusBar->showMessage("Connected database unsuccessfull");
    }

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
        ui->comboBoxHourStart_2->insertItem(i,QString::number(i));
        ui->comboBoxHourFinish_2->insertItem(i,QString::number(i));
    }
    for(int i = 0; i <= MAX_HOUR; i++)
    {
        ui->comboBoxMinuteStart->insertItem(i,QString::number(i));
        ui->comboBoxMinuteFinish->insertItem(i,QString::number(i));
        ui->comboBoxMinuteStart_2->insertItem(i,QString::number(i));
        ui->comboBoxMinuteFinish_2->insertItem(i,QString::number(i));
    }

    ui->comboBoxDayInWeek->insertItem(0,QString::fromUtf8("Thứ 2"));
    ui->comboBoxDayInWeek->insertItem(1,QString::fromUtf8("Thứ 3"));
    ui->comboBoxDayInWeek->insertItem(2,QString::fromUtf8("Thứ 4"));
    ui->comboBoxDayInWeek->insertItem(3,QString::fromUtf8("Thứ 5"));
    ui->comboBoxDayInWeek->insertItem(4,QString::fromUtf8("Thứ 6"));
    ui->comboBoxDayInWeek->insertItem(5,QString::fromUtf8("Thứ 7"));
    ui->comboBoxDayInWeek->insertItem(6,QString::fromUtf8("Chủ nhật"));

    QSqlQuery query;
    if(isConnect)
    {
        if(query.exec("SELECT * FROM tbl_floor"))
        {
            while(query.next())
            {
                ui->comboBoxFloor->insertItem(query.value(0).toInt(),query.value(1).toString());
                ui->comboBoxFloor_2->insertItem(query.value(0).toInt(),query.value(1).toString());
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
        qDebug() << this << "server started";
    }
    else
    {
        qDebug() << this << "error:: " << m_server.errorString();
    }

    model = new QSqlQueryModel;
    QString queryDevice = "SELECT * FROM tbl_device";
    if(isConnect)
    {
        model->setQuery(queryDevice);
        SetupTablView(model);
    }

    query.clear();
    if(isConnect)
    {
        if(query.exec("SELECT id,name FROM tbl_device"))
        {
            while(query.next())
            {
                ui->comboBoxDevice->insertItem(query.value(0).toInt(),query.value(1).toString());
                ui->comboBoxDevice_2->insertItem(query.value(0).toInt(),query.value(1).toString());
            }
        }
        else
        {
            QMessageBox::information(0,QString::fromUtf8("Thông báo"),QString::fromUtf8("Không kết nối được cơ sở dữ liệu."));
        }
    }

    query.clear();
    if(isConnect)
    {
        if(query.exec("SELECT id,name FROM tbl_devicetype"))
        {
            while(query.next())
            {
                ui->comboBoxDeviceType->insertItem(query.value(0).toInt(),query.value(1).toString());
                ui->comboBoxDeviceType_2->insertItem(query.value(0).toInt(),query.value(1).toString());
            }
        }
        else
        {
            QMessageBox::information(0,QString::fromUtf8("Thông báo"),QString::fromUtf8("Không kết nối được cơ sở dữ liệu."));
        }
    }
}



void MainWindow::on_pushButtonSetUp_clicked()
{
    qDebug() << "on_pushButtonSetUp_clicked";
}

void MainWindow::on_pushButtonCancel_clicked()
{
    ui->comboBoxFloor->setCurrentIndex(0);
    ui->comboBoxDevice->setCurrentIndex(0);
    ui->comboBoxDeviceType->setCurrentIndex(0);
}


void MainWindow::SetupTablView(QSqlQueryModel *model)
{
    model->setHeaderData(model->record().indexOf("id"), Qt::Horizontal,QString::fromUtf8("STT"));
    model->setHeaderData(model->record().indexOf("type"), Qt::Horizontal,QString::fromUtf8("Loại Thiết bị"));
    model->setHeaderData(model->record().indexOf("name"), Qt::Horizontal,QString::fromUtf8("Thiết bị"));
    model->setHeaderData(model->record().indexOf("status"), Qt::Horizontal,QString::fromUtf8("Trạng thái"));
    model->setHeaderData(model->record().indexOf("updated_at"), Qt::Horizontal,QString::fromUtf8("Thời gian"));

    ui->tableView->setModel(model);
    ui->tableView->resizeRowsToContents();
}


void MainWindow::on_pushButtonFilter_clicked()
{

}

void MainWindow::on_pushButtonCancel_2_clicked()
{
    ui->comboBoxFloor_2->setCurrentIndex(0);
    ui->comboBoxDevice_2->setCurrentIndex(0);
    ui->comboBoxDeviceType_2->setCurrentIndex(0);
}
