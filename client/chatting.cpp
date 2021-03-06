#include "chatting.h"
#include "ui_chatting.h"
#include <QRegExp>
#include <QTcpSocket>

chatting::chatting(std::string ID, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::chatting)
{
    ui->setupUi(this);

    setWindowTitle("Chatting Client");
    socket=new QTcpSocket(this);
    thread = new Thread(socket, this);
    connect(thread, SIGNAL(join(QString)), this, SLOT(show(QString)));
    id = ID;

    link();
}

chatting::~chatting()
{
    delete ui;
}
void chatting::show(QString Msg)
{
    ui->listWidget->addItem(QString("%2").arg(Msg));
}


void chatting::connected()
{
    socket->write(QString(id.c_str()+ui->messageLineEdit->text()+"\n").toUtf8());
}



void chatting::link()
{
    thread->start();
    connect(socket,SIGNAL(connected()),this,SLOT(connected()));
    socket->connectToHost("10.10.20.50", 9061);//아이피,포트
}

void chatting::on_sendButton_clicked()
{
    QString message=ui->messageLineEdit->text().trimmed();

    if(!message.isEmpty())
    {
        socket->write(QString(message+"\n").toUtf8());
    }
    ui->messageLineEdit->clear();
    ui->messageLineEdit->setFocus();
}

void chatting::on_messageLineEdit_returnPressed()
{
    on_sendButton_clicked();
}
