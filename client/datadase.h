#ifndef DATABASE_H
#define DATABASE_H
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QtSql>
#include <QSqlTableModel>

class Database
{
private:
    QSqlDatabase db;
public:
    Database() {
        open_db();
    }
    void open_db()
    {
        db = QSqlDatabase::addDatabase("QMYSQL");
        db.setHostName("10.10.20.234");      // IP 또는 DNS Host name
        db.setDatabaseName("Car"); // DB명
        db.setUserName("hello");     // 계정 명
        db.setPassword("1234");     // 계정 Password

        if(!db.open())
        {
            qDebug()<<"connect error";
            exit(1);
        }
    }
    ~Database() {
        db.close();
    }
};

#endif // DATABASE_H
