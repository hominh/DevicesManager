#include "databaseconnection.h"
#include <QMessageBox>
#include <QSqlDatabase>

DatabaseConnection::DatabaseConnection()
{

}
bool DatabaseConnection::connData()
{
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setDatabaseName("db_devicemanage");
    db.setHostName("localhost");
    db.setUserName("hominh");
    db.setPassword("emyeuanh1211A!");

    if(!db.open())
    {
        QMessageBox::information(0,QString::fromUtf8("Thông báo"),QString::fromUtf8("Không kết nối được cơ sở dữ liệu."));
        return false;
    }
    else
    {
        qDebug()<<("Connected");
        return true;
    }
}
