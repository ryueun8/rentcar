#include "revice.h"
#include "ui_revice.h"
#include <QMessageBox>
#include "mainpage.h"

revice::revice(std::string id, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::revice)
{
    ui->setupUi(this);
    ID = id;
}

revice::~revice()
{
    delete ui;
}


void revice::closeEvent(QCloseEvent *event)
{
    mainpage main(ID);
    main.setModal(true);
    main.exec();
    this->show();
    QWidget::closeEvent(event);
}

void revice::on_nomal_clicked()
{
    if(ui->name_text == NULL || ui->pw_text == NULL)
    {
        QMessageBox::information(this, "", "등급은 마지막에 선택해주세요");
    }
    else
    {
        query = "UPDATE user SET name ='"+ ui->name_text->text().toStdString() +"', userPW ='"+ui->pw_text->text().toStdString()+"', rank = '"+std::string("일반")+"'WHERE userID = '"+ID+"'";
        Query.exec(QString::fromStdString(query));
    }
}

void revice::on_premium_clicked()
{
    if(ui->name_text == NULL || ui->pw_text == NULL)
    {
        QMessageBox::information(this, "", "등급은 마지막에 선택해주세요");
    }
    else
    {
        query = "UPDATE user SET name ='"+ ui->name_text->text().toStdString() +"', userPW ='"+ui->pw_text->text().toStdString()+"', rank = '"+std::string("프리미엄")+"'WHERE userID = '"+ID+"'";
        Query.exec(QString::fromStdString(query));
    }
}

void revice::on_vip_clicked()
{
    if(ui->name_text == NULL || ui->pw_text == NULL)
    {
        QMessageBox::information(this, "", "등급은 마지막에 선택해주세요");
    }
    else
    {
        query = "UPDATE user SET name ='"+ ui->name_text->text().toStdString() +"', userPW ='"+ui->pw_text->text().toStdString()+"', rank = '"+std::string("VIP")+"'WHERE userID = '"+ID+"'";
        Query.exec(QString::fromStdString(query));
    }
}

void revice::on_change_clicked()
{
    QMessageBox::information(this, "", "회원정보 변경완료");
    this->close();
    mainpage main(ID);
    main.setModal(true);
    main.exec();
    this->show();

}
