#ifndef THREAD_H
#define THREAD_H

#include <QThread>
#include <QtDebug>
#include <QTcpSocket>
#include "ui_chatting.h"

class Thread : public QThread
{
    Q_OBJECT

public:
    explicit Thread(QTcpSocket * socket, QObject *parent = 0);

signals:
    void join(QString Msg);
public slots:
    void readyRead();

private:
    void run();
    QTcpSocket *sock;
};

#endif // THREAD_H
