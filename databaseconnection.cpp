#include "databaseconnection.h"

DatabaseConnection::DatabaseConnection()
{

}
bool DatabaseConnection::connData()
{
    QString strDir=qApp->applicationDirPath();
    if(strDir.contains("release") || strDir.contains("debug"))
    {
        int pos=strDir.lastIndexOf('/');
        int count=strDir.length()-pos;
        strDir=strDir.remove(pos,count);
    }
    QSettings iniFile(strDir+"/CadProTFC.ini",QSettings::IniFormat);
    bool ok;

    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setDatabaseName(iniFile.value("ServerDatabase/DatabaseName","db_devicemanage").toString());
    db.setPort(iniFile.value("ServerDatabase/Port",3306).toInt(&ok));
    db.setHostName(iniFile.value("ServerDatabase/HostName","localhost").toString());
    db.setUserName(iniFile.value("ServerDatabase/UserName","root").toString());
    db.setPassword(iniFile.value("ServerDatabase/Password","").toString());

    if(!db.open())
    {
        QMessageBox::information(0,QString::fromUtf8("Thông báo"),QString::fromUtf8("Không kết nối được cơ sở dữ liệu."));
        return false;
    }
    else
    {
        qDebug() << "Connected";
        return true;
    }
}
