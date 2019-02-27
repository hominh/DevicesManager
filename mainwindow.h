#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "qdebug.h"
#include "databaseconnection.h"
#include <QMessageBox>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include "tcpserver.h"

#define MAX_DEVICE_IN_SERVER    64
#define MAX_OUT_PUT             16
#define MAX_BUFFER_RX_SIZE      4096
#define MAX_CMD_BUFFER_SIZE     256
#define MAX_OUT_BUFF_7_BIT		256

typedef struct statusOutPutStr
{
    unsigned char hour;
    unsigned char min;
    unsigned char sec;
    unsigned char day;
    unsigned char month_day_week;// 5 bit thap là thang, 3 bit cao là thứ
    unsigned char year;
    unsigned char  stBuffer[MAX_OUT_PUT];
}statusOutPutStr;
extern statusOutPutStr stOpBuff[MAX_DEVICE_IN_SERVER];

#define CMD_DATA_ST_OUTPUT     1
#define CMD_WRITE_DATA_FLASH   2
#define CMD_READ_DATA_FLASH    3


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void init();
    bool isConnect;

private slots:
    void on_pushButtonSetUp_clicked();

    void on_pushButtonCancel_clicked();

public slots:

    unsigned char de_paket_7bit_buff(unsigned char in2outbuff[],unsigned char count);
    void workCmdBuffer(void);

private:
    Ui::MainWindow *ui;
    DatabaseConnection *dbConnection;
    QSqlQueryModel *model;

    TcpServer m_server;

    unsigned char idName;
    unsigned char cmdBuffer[MAX_CMD_BUFFER_SIZE];
    unsigned char indexcmdBuffer;
    unsigned char RxByte;
    unsigned char pack_len;

    void SetupTablView(QSqlQueryModel *model);

};

#endif // MAINWINDOW_H
