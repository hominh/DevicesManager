#ifndef TCPCONNECTION_H
#define TCPCONNECTION_H

#include <QObject>
#include <QDebug>
#include <QTcpSocket>
#include <QTimer>
#include "databaseconnection.h"

#define MAX_OUT_PUT             16
#define MAX_BUFFER_RX_SIZE      4096
#define MAX_CMD_BUFFER_SIZE     256
#define MAX_OUT_BUFF_7_BIT		256
#define CMD_DATA_ST_OUTPUT      1
#define CMD_WRITE_DATA_FLASH    2
#define CMD_READ_DATA_FLASH     3
#define MAX_DEVICE_IN_SERVER    64
#define MAX_PORT_OUT_IN_DEV     16
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
typedef struct currentTime
{
    unsigned char hour;
    unsigned char min;
    unsigned char sec;
    unsigned char dayofWeek;
    unsigned char dayofMonth;
    unsigned char month;
    unsigned char year;
}currentTime;
extern currentTime Thoigiandongbo;
//------------------------------------------------------------------------
typedef struct TimeWorkOneDevInDay// thời gian làm 1 cổng ra  của 1 tầng trong ngày
{
    unsigned char Hour1Start;// thời gian làm chính
    unsigned char Min1Start;
    unsigned char Hour1Stop;
    unsigned char Min1Stop;

    unsigned char Hour2Start;// thoi gian làm thêm 20
    unsigned char Min2Start;// 0
    unsigned char Hour2Stop;//3
    unsigned char Min2Stop;//0

}TimeWorkOneDevInDay;
//------------------------------------------------------------------------
typedef struct TimeWork16DevInDay //thời gian làm 16 cổng ra của 1 tầng trong ngày
{
    TimeWorkOneDevInDay TimeWorkDevInday[MAX_PORT_OUT_IN_DEV];
}TimeWork16DevInDay;
//-----------------------------------------------------------------------
typedef struct TimeWork16DevInWeek // thời gian làm 16 cổng ra của 1 tầng trong tuần
{
    TimeWork16DevInDay TimeWork16DevWeek[7];
}TimeWork16DevInWeek;
//------------------------------------------------------------------------

class TcpConnection : public QObject
{
    Q_OBJECT
public:
    QString str;

    explicit TcpConnection(QObject *parent = nullptr);
    ~TcpConnection();
    virtual void setSocket(QTcpSocket *socket);

protected:
    QTcpSocket *m_socket;
    QTcpSocket *getSocket();

public slots:
    virtual void connected();
    virtual void disconnected();
    virtual void readyRead();
    virtual void bytesWritten(qint64 bytes);
    virtual void stateChanged(QAbstractSocket::SocketState socketState);
    virtual void error(QAbstractSocket::SocketError socketError);

    unsigned char de_paket_7bit_buff(unsigned char in2outbuff[],unsigned char count);
    void workCmdBuffer(void);
    void CheckTimeOut();
    unsigned char make_packet_7bit_buff(unsigned char buffer_in[],unsigned char length);
    void sendData(void);

    void update2DB(QString status, QString cmd, QString dayinweek, QString updated_at, QString name);
    void refreshDB();

private:
    DatabaseConnection *dbConnection;
    QTimer *TimeOut;
    QTcpSocket *socket;
    int socketDescription;
    unsigned char counterQueryName;
    unsigned char idName;
    unsigned char cmd;
    unsigned char TimerCount;
    unsigned char cmdBuffer[MAX_CMD_BUFFER_SIZE];
    unsigned char indexcmdBuffer;
    unsigned char RxByte;
    unsigned char pack_len;
    TimeWork16DevInWeek  TimeWorkDev[MAX_DEVICE_IN_SERVER]; // thời gian làm của 64 tầng
    // tôi da co 64 thiet bi chinh gom co 16 port
    TimeWork16DevInWeek  TimeSetUpDev[MAX_DEVICE_IN_SERVER];

signals:
};

#endif // TCPCONNECTION_H
