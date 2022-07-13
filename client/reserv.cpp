#include "reserv.h"
#include "ui_reserv.h"
#include "payment.h"
#include <QDebug>
#include <cstring>
#include <string>

reserv::reserv(std::string ID, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::reserv)
{
    ui->setupUi(this);
    id = ID;
}

reserv::~reserv()
{
    delete ui;
}

void reserv::on_chat_clicked()
{

}

void reserv::on_oil1_clicked()
{
    ui->carwidget->clear();
    query = "SELECT Car, CarType, Money FROM Carlist WHERE CarOil = '"+ui->oil1->text().toStdString()+"'";
    Query.exec(QString::fromStdString(query));
    qDebug()<<QString::fromStdString(query);
    record = Query.record();

    int car = record.indexOf("Car");
    int type = record.indexOf("CarType");
    int money = record.indexOf("Money");

    ui->carwidget->setRowCount(Query.size());
    ui->carwidget->setColumnCount(record.count());
    ui->carwidget->setHorizontalHeaderItem(0, new QTableWidgetItem("자동차"));
    ui->carwidget->setHorizontalHeaderItem(1, new QTableWidgetItem("크기"));
    ui->carwidget->setHorizontalHeaderItem(2, new QTableWidgetItem("가격"));
    ui->carwidget->horizontalHeader()->setStretchLastSection(true);
    int i = 0;

    while(Query.next())
    {
        ui->carwidget->setItem(i, 0, new QTableWidgetItem(Query.value(car).toString()));
        ui->carwidget->setItem(i, 1, new QTableWidgetItem(Query.value(type).toString()));
        ui->carwidget->setItem(i++, 2, new QTableWidgetItem(Query.value(money).toString()));
    }
}

void reserv::on_oil2_clicked()
{
    ui->carwidget->clear();
    query = "SELECT Car, CarType, Money FROM Carlist WHERE CarOil = '"+ui->oil2->text().toStdString()+"'";
    Query.exec(QString::fromStdString(query));
    qDebug()<<QString::fromStdString(query);
    record = Query.record();

    int car = record.indexOf("Car");
    int type = record.indexOf("CarType");
    int money = record.indexOf("Money");

    ui->carwidget->setRowCount(Query.size());
    ui->carwidget->setColumnCount(record.count());
    ui->carwidget->setHorizontalHeaderItem(0, new QTableWidgetItem("자동차"));
    ui->carwidget->setHorizontalHeaderItem(1, new QTableWidgetItem("크기"));
    ui->carwidget->setHorizontalHeaderItem(2, new QTableWidgetItem("가격"));
    ui->carwidget->horizontalHeader()->setStretchLastSection(true);
    int i = 0;

    while(Query.next())
    {
        ui->carwidget->setItem(i, 0, new QTableWidgetItem(Query.value(car).toString()));
        ui->carwidget->setItem(i, 1, new QTableWidgetItem(Query.value(type).toString()));
        ui->carwidget->setItem(i++, 2, new QTableWidgetItem(Query.value(money).toString()));
    }
}

void reserv::on_oil3_clicked()
{
    ui->carwidget->clear();
    query = "SELECT Car, CarType, Money FROM Carlist WHERE CarOil = '"+ui->oil3->text().toStdString()+"'";
    Query.exec(QString::fromStdString(query));
    qDebug()<<QString::fromStdString(query);
    record = Query.record();

    int car = record.indexOf("Car");
    int type = record.indexOf("CarType");
    int money = record.indexOf("Money");

    ui->carwidget->setRowCount(Query.size());
    ui->carwidget->setColumnCount(record.count());
    ui->carwidget->setHorizontalHeaderItem(0, new QTableWidgetItem("자동차"));
    ui->carwidget->setHorizontalHeaderItem(1, new QTableWidgetItem("크기"));
    ui->carwidget->setHorizontalHeaderItem(2, new QTableWidgetItem("가격"));
    ui->carwidget->horizontalHeader()->setStretchLastSection(true);
    int i = 0;

    while(Query.next())
    {
        ui->carwidget->setItem(i, 0, new QTableWidgetItem(Query.value(car).toString()));
        ui->carwidget->setItem(i, 1, new QTableWidgetItem(Query.value(type).toString()));
        ui->carwidget->setItem(i++, 2, new QTableWidgetItem(Query.value(money).toString()));
    }
}

void reserv::on_oil4_clicked()
{
    ui->carwidget->clear();
    query = "SELECT Car, CarType, Money FROM Carlist WHERE CarOil = '"+ui->oil4->text().toStdString()+"'";
    Query.exec(QString::fromStdString(query));
    qDebug()<<QString::fromStdString(query);
    record = Query.record();

    int car = record.indexOf("Car");
    int type = record.indexOf("CarType");
    int money = record.indexOf("Money");

    ui->carwidget->setRowCount(Query.size());
    ui->carwidget->setColumnCount(record.count());
    ui->carwidget->setHorizontalHeaderItem(0, new QTableWidgetItem("자동차"));
    ui->carwidget->setHorizontalHeaderItem(1, new QTableWidgetItem("크기"));
    ui->carwidget->setHorizontalHeaderItem(2, new QTableWidgetItem("가격"));
    ui->carwidget->horizontalHeader()->setStretchLastSection(true);
    int i = 0;

    while(Query.next())
    {
        ui->carwidget->setItem(i, 0, new QTableWidgetItem(Query.value(car).toString()));
        ui->carwidget->setItem(i, 1, new QTableWidgetItem(Query.value(type).toString()));
        ui->carwidget->setItem(i++, 2, new QTableWidgetItem(Query.value(money).toString()));
    }
}

void reserv::on_booking_clicked()
{
    if(ui->carwidget->currentItem() == NULL)
    {
        QMessageBox::information(this, "", "선택하세요.");
    }
    else
    {
        QTableWidgetItem *currentText=ui->carwidget->currentItem();
        std::string K = currentText->text().toStdString();

        int row=ui->carwidget->currentRow();

        query = "SELECT CarNum, Money FROM Carlist WHERE Car = '"+ui->carwidget->item(row, 0)->text().toStdString()+"'";
        Query.exec(QString::fromStdString(query));
        Query.next();
        int num = Query.value(0).toInt();
        int price = Query.value(1).toInt();

        if(num <= 0)
        {
            QMessageBox::warning(this, "error", "재고 없음");
        }
        else
        {
            query ="UPDATE Carlist SET CarNum = '"+std::to_string(--num)+"' WHERE Car = '"+ui->carwidget->item(row, 0)->text().toStdString()+"'";
            Query.exec(QString::fromStdString(query));
            qDebug()<<QString::fromStdString(query);
            save = ui->carwidget->item(row, 0)->text().toStdString() +"/"+ui->reserv_date->text().toStdString()+"/"+ui->return_date->text().toStdString();

            query="UPDATE user SET reserv = '"+save+"' WHERE userID = '"+id+"'";
            Query.exec(QString::fromStdString(query));

            QMessageBox::information(this, "", "예약되었습니다.");

            this->hide();
            payment pay(id, price);
            pay.setModal(true);
            pay.exec();
            this->show();
        }

    }

}
