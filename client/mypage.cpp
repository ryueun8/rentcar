#include "mypage.h"
#include "ui_mypage.h"

mypage::mypage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mypage)
{
    ui->setupUi(this);
}

mypage::~mypage()
{
    delete ui;
}
