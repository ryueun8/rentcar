#include "mypage.h"
#include "ui_mypage.h"
#include <QMessageBox>

mypage::mypage(std::string ID, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mypage)
{
    ui->setupUi(this);
    id = ID;
}

mypage::~mypage()
{
    delete ui;
}

void mypage::show()
{
    query = "SELECT name, userPW, reserv, cash, mileage FROM user WHERE userID = '"+id+"'";
    Query.exec(QString::fromStdString(query));
    Query.next();

    ui->id_text->setText(QString::fromStdString(id));
    ui->name_text->setText(Query.value(0).toString());
    ui->pw_text->setText(Query.value(1).toString());
    ui->reserv_text->setText(Query.value(2).toString());
    ui->cash_text->setText(Query.value(3).toString());
    ui->mile_text->setText(Query.value(4).toString());
}

void mypage::on_change_clicked()
{
    query = "SELECT cash, mileage FROM user WHERE userID = '"+id+"'";
    Query.exec(QString::fromStdString(query));
    Query.next();

    if(Query.value(1).toInt() >= 5000)
    {
        int mile = Query.value(1).toInt() - 5000;
        int cash = Query.value(0).toInt() + 5000;

        query = "UPDATE user SET cash = '"+std::to_string(cash)+"', mileage = '"+std::to_string(mile)+"'WHERE userID = '"+id+"'";
        Query.exec(QString::fromStdString(query));


        QMessageBox::information(this, "", "5,000원 교환했습니다");
        show();
    }
    else
    {
        QMessageBox::warning(this, "error", "5,000원부터 캐시로 교환 가능합니다");
    }
}

void mypage::on_cancle_clicked()
{
    query = "SELECT reserv FROM user WHERE userID = '"+id+"'";
    Query.exec(QString::fromStdString(query));
    Query.next();

    if(Query.value(0).toInt() != 0)
    {
        std::vector<std::string> x;
        std::string stringBuffer;

        std::istringstream ss(Query.value(0).toString().toStdString());
        getline(ss, stringBuffer, '/');
        x.push_back(stringBuffer);

        query = "SELECT CarNum FROM Carlist WHERE Car = '"+x[0]+"'";
        Query.exec(QString::fromStdString(query));
        Query.next();
        int num = Query.value(0).toInt();
        qDebug()<<QString::fromStdString(x[0]);

        query = "UPDATE Carlist SET CarNum = '"+std::to_string(++num)+"'WHERE Car = '"+x[0]+"'";
        Query.exec(QString::fromStdString(query));

        query = "UPDATE user SET reserv = '"+std::to_string(NULL)+"'WHERE userID = '"+id+"'";
        Query.exec(QString::fromStdString(query));
        QMessageBox::information(this, "", "예약이 취소되었습니다");
        show();
    }
    else
    {
        QMessageBox::information(this, "", "예약이 없습니다");
    }


}

