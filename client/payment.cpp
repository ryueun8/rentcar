#include "payment.h"
#include "ui_payment.h"
#include "charge.h"
#include <QMessageBox>

payment::payment(std::string id, int price, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::payment)
{
    ui->setupUi(this);
    ID = id;
    this -> price = price;
}

payment::~payment()
{
    delete ui;
}



void payment::on_kakao_clicked()
{
    this->hide();
    charge ch(ID, price);
    ch.receipt();
    ch.setModal(true);
    ch.exec();
    this->show();
}

void payment::on_toss_clicked()
{
    this->hide();
    charge ch(ID, price);
    ch.receipt();
    ch.setModal(true);
    ch.exec();
    this->show();
}

void payment::on_bankbook_clicked()
{
    QString s = QString::number(price) + "원 입금해주세요";
    QMessageBox::information(this, "", s);
}
