#include "signup.h"
#include "ui_signup.h"
#include <QMessageBox>

signup::signup(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::signup)
{
    ui->setupUi(this);
}

signup::~signup()
{
    delete ui;
}



void signup::on_check_clicked()
{
    query = "SELECT userID FROM user WHERE userID ='"+ui->id_text->text().toStdString()+"'";
    Query.exec(QString::fromStdString(query));
    if(Query.size() == 0)
    {
        QMessageBox::information(this, "","사용가능한 아이디입니다.");
    }
    else
    {
        QMessageBox::warning(this, "error", "ID중복");
    }
}

void signup::on_sign_clicked()
{
    QMessageBox::information(this, "", "회원가입 완료");
    this->close();
}


void signup::on_nomal_clicked()
{
    if(ui->name_text == NULL || ui->id_text == NULL || ui->pw_text == NULL)
    {
        QMessageBox::information(this, "", "등급은 마지막에 선택해주세요");
    }
    else
    {
        Query.prepare("INSERT INTO user (name, userID, userPW, rank)" "VALUES (?, ?, ?, ?)");
        Query.addBindValue(ui->name_text->text());
        Query.addBindValue(ui->id_text->text());
        Query.addBindValue(ui->pw_text->text());
        Query.addBindValue(ui->nomal->text());
        Query.exec();
    }

}

void signup::on_premium_clicked()
{
    if(ui->name_text->text().toStdString() == "" || ui->id_text->text().toStdString() == "" || ui->pw_text->text().toStdString() == "")
    {
        QMessageBox::information(this, "", "등급은 마지막에 선택해주세요");
    }
    else
    {
        Query.prepare("INSERT INTO user (name, userID, userPW, rank)" "VALUES (?, ?, ?, ?)");
        Query.addBindValue(ui->name_text->text());
        Query.addBindValue(ui->id_text->text());
        Query.addBindValue(ui->pw_text->text());
        Query.addBindValue(ui->premium->text());
        Query.exec();
    }

}

void signup::on_vip_clicked()
{
    if(ui->name_text == NULL || ui->id_text == NULL || ui->pw_text == NULL)
    {
        QMessageBox::information(this, "", "등급은 마지막에 선택해주세요");
    }
    else
    {
        Query.prepare("INSERT INTO user (name, userID, userPW, rank)" "VALUES (?, ?, ?, ?)");
        Query.addBindValue(ui->name_text->text());
        Query.addBindValue(ui->id_text->text());
        Query.addBindValue(ui->pw_text->text());
        Query.addBindValue(ui->vip->text());
        Query.exec();
    }

}
