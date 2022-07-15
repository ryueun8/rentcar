#include "thread.h"
#include <QDebug>

Thread::Thread(QTcpSocket * socket, QObject *parent) :
    QThread(parent)

{
    sock = socket;
}
void Thread::run()
{
    qDebug()<<"thread";

    connect(sock, SIGNAL(readyRead()), this, SLOT(readyRead()), Qt::DirectConnection);
    exec();


}

void Thread::readyRead()
{
    sock->waitForBytesWritten(1000);
    sock->waitForReadyRead(3000);
    QString data = QString(sock->readAll());
    qDebug()<<data;
    emit join(data);
}
