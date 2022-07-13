#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "datadase.h"

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_log_clicked();

    void on_sign_clicked();

private:
    Ui::MainWindow *ui;
    Database DB;
    QSqlQuery Query;
    QSqlRecord record;
    std::string query;
    std::string id;

};
#endif // MAINWINDOW_H
