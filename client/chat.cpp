#include "chat.h"
#include "ui_chat.h"
#include <stdlib.h>
#include <iostream>
#include <unistd.h>

chat::chat(std::string ID, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::chat)
{
    ui->setupUi(this);
    id = ID;
    thread = new Thread;
    socket=new QTcpSocket(this);
//    connect(thread, SIGNAL(setMsg(QString)), this, SLOT(chatAppend(QString)));
    connect(socket, SIGNAL(chatAppend()), this, SLOT(chatAppend()));

}

chat::~chat()
{
    delete ui;
}


void chat::on_pushButton_clicked()
{
    std::string chatMsg="["+id+"] "+ui->lineEdit->text().toStdString();
    ui->textBrowser->append(QString::fromStdString(chatMsg));
    write(thread->sock, chatMsg.c_str(), chatMsg.length());
    ui->lineEdit->clear();

}

void chat::chatAppend(/*QString msg*/)
{
    char Msg[1024];
    read(thread->sock, Msg, sizeof(Msg));
    ui->textBrowser->append(QString::fromStdString(Msg));

    ui->textBrowser->append(Msg);
}

void chat::closeEvent(QCloseEvent *)
{
    shutdown(thread->sock, SHUT_RDWR);
}


