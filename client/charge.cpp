#include "charge.h"
#include "ui_charge.h"
#include <QMessageBox>

charge::charge(std::string ID,int price, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::charge)
{
    ui->setupUi(this);
    id = ID;
    this -> price = price;
}

charge::~charge()
{
    delete ui;
}

void charge::receipt()
{
    ui->all_text-> setText(QString::number(price));

    query = "SELECT rank FROM user WHERE userID = '"+id+"'";
    Query.exec(QString::fromStdString(query));
    Query.next();

    if(Query.value(0)== "VIP")
    {
        int sale = price * 0.2;
        ui->sale_text ->setText(QString::number(sale));
        total = price - sale;
        ui->fin_text -> setText(QString::number(total));
    }
    else if(Query.value(0) == "프리미엄")
    {
        int sale = price * 0.1;
        ui->sale_text ->setText(QString::number(sale));
        total = price - sale;
        ui->fin_text -> setText(QString::number(total));
    }
    else
    {
        ui->sale_text ->setText("0");
        total = price;
        ui->fin_text -> setText(QString::number(total));
    }
}

void charge::on_charge_2_clicked()
{
    if( ui->char_money->text().toInt() < 10000)
    {
        QMessageBox::information(this, "", "10,000원 부터 충전 가능합니다");
    }
    else
    {
        query = "SELECT cash FROM user WHERE userID = '"+id+"'";
        Query.exec(QString::fromStdString(query));
        Query.next();

        int cash =  Query.value(0).toInt();
        int charge_cash =  cash + ui->char_money->text().toInt();
        int mileage = charge_cash * 0.05;

        query = "UPDATE user SET cash = '"+std::to_string(charge_cash)+"'WHERE userID = '"+id+"'";
        Query.exec(QString::fromStdString(query));

        query = "SELECT mileage FROM user WHERE userID = '"+id+"'";
        Query.exec(QString::fromStdString(query));
        Query.next();

        mileage = Query.value(0).toInt() + mileage;

        query = "UPDATE user SET mileage ='"+std::to_string(mileage)+"'WHERE userID = '"+id+"'";
        Query.exec(QString::fromStdString(query));

        QMessageBox::information(this, "", "캐시 충전되었습니다");

    }
}


void charge::on_pay_clicked()
{
    query = "SELECT cash FROM user WHERE userID = '"+id+"'";
    Query.exec(QString::fromStdString(query));
    Query.next();

    qDebug()<<total;
    if(Query.value(0).toInt() >= total)
    {
        int spend = Query.value(0).toInt() - total;
        query = "UPDATE user SET cash ='"+ std::to_string(spend) +"'WHERE userID = '"+id+"'";
        Query.exec(QString::fromStdString(query));
        QMessageBox::information(this, "", "계산되었습니다");
    }
    else
    {
        QMessageBox::warning(this, "error", "잔액이 부족합니다");

    }
}
