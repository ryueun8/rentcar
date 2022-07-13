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
    mypage my(ID);
    my.setModal(true);
    my.show();
    my.exec();
    this->show();
}

void mainpage::on_rental_clicked()
{
    reserv re(ID);
    re.setModal(true);
    re.exec();
    this->show();
}

void mainpage::on_visit_clicked()
{
    sight s;
    s.setModal(true);//setmodal true 다른 ui안작동
    s.exec();
    this->show();
}
