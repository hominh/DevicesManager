#ifndef DATABASECONNECTION_H
#define DATABASECONNECTION_H
#include <QtSql>
#include <QMessageBox>

#define DATABASE_CONNECTION "databaseApp"
class DatabaseConnection
{
public:
    QSqlDatabase db;
    bool connData();
    void discData();
    DatabaseConnection();
};

#endif // DATABASECONNECTION_H
