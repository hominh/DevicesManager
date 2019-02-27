#include "mainwindow.h"
#include "ui_mainwindow.h"

statusOutPutStr stOpBuff[MAX_DEVICE_IN_SERVER];

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

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
    isConnect = dbConnection->connData();

    ui->setupUi(this);
    init();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::init()
{
    ui->comboBoxFloor->insertItem(0,QString::fromUtf8("Chọn tầng"));
    ui->comboBoxDeviceType->insertItem(0,QString::fromUtf8("Chọn loại thiết bị"));
    ui->comboBoxDevice->insertItem(0,QString::fromUtf8("Chọn thiết bị"));
    ui->comboBoxIp->insertItem(0,QString::fromUtf8("Chọn Ip"));
    for(int i = 0; i<=23;i++)
    {
        ui->comboBoxHourStart->insertItem(i,QString::number(i));
        ui->comboBoxHourFinish->insertItem(i,QString::number(i));
    }
    for(int i = 0; i <= 59; i++)
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
        qDebug() << this << "server started";

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

unsigned char MainWindow::de_paket_7bit_buff(unsigned char buffer_in[],unsigned char length)
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

void MainWindow::workCmdBuffer(void)
{
    if(cmdBuffer[0] == 0)
    {
        switch(cmdBuffer[2])
        {
            case CMD_DATA_ST_OUTPUT:
                qDebug()<< "CMD_DATA_ST_OUTPUT";
                memcpy(&stOpBuff[cmdBuffer[1]],cmdBuffer+3,sizeof(stOpBuff[0]));
                //for(int i=0; i<10; i++)qDebug("%x",cmdBuffer[i]);
                qDebug()<<cmdBuffer[1]<<stOpBuff[cmdBuffer[1]].min<<stOpBuff[cmdBuffer[1]].stBuffer[15];
                idName = cmdBuffer[1];
            break;
        }
    }
}

