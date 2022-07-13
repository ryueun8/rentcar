#include "mainpage.h"
#include "ui_mainpage.h"
#include "mypage.h"
#include "reserv.h"


mainpage::mainpage(std::string id, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mainpage)
{
    ui->setupUi(this);
    ID = id;
}

mainpage::~mainpage()
{
    delete ui;
}

void mainpage::on_info_clicked()
{
    this->hide();
    mypage my;
    my.setModal(true);
    my.exec();
    this->show();
}

void mainpage::on_rental_clicked()
{
    this->hide();
    reserv re(ID);
    re.setModal(true);
    re.exec();
    this->show();
}

void mainpage::on_visit_clicked()
{
    this->hide();
    sight s;
    s.setModal(true);//setmodal true 다른 ui안작동
    s.exec();
    this->show();
}
