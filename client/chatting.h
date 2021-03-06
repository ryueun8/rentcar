#ifndef CHATTING_H
#define CHATTING_H

#include <QDialog>
#include <QWidget>
#include <QRegExp>
#include <QTcpSocket>
#include "thread.h"

namespace Ui {
class chatting;
}

class chatting : public QDialog
{
    Q_OBJECT

private slots:
//    void readyRead(); //서버로부터 메시지가 온경우
    void connected(); //연결이 완료되었으면 서버에게 연결되었다고 알림

    void on_sendButton_clicked(); //채팅 메세지 전송 버튼을 누름

    void on_messageLineEdit_returnPressed();

    void show(QString Msg);

public:
    explicit chatting(std::string ID, QWidget *parent = nullptr);
    ~chatting();
    void link();

private:
    Ui::chatting *ui;
    QTcpSocket* socket; //나의 소켓
    std::string id;
    Thread *thread;
};

#endif // CHATTING_H
