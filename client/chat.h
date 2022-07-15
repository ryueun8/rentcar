#ifndef CHAT_H
#define CHAT_H

#include <QDialog>
#include <unistd.h>
#include "datadase.h"
#include "thread.h"
#include <QRegExp>
#include <QTcpSocket>
using namespace std;

namespace Ui {
class chat;
}

class chat : public QDialog
{
    Q_OBJECT

public:
    chat(std::string ID, QWidget *parent = nullptr);
    ~chat();

private slots:
    void on_pushButton_clicked();
    void chatAppend(/*QString msg*/);
    void closeEvent(QCloseEvent *);

private:
    Ui::chat *ui;
    QSqlQuery query;
    QSqlRecord rec;
    string SQL;
    string userId;
    Thread* thread;
    std::string id;
    QTcpSocket* socket;
};

#endif // CHAT_H
