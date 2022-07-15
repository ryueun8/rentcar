#include "mainwindow.h"

#include <QApplication>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <sys/types.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
