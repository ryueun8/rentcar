#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "signup.h"
#include "mainpage.h"
#include <QMessageBox>
#include <QCloseEvent>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->move(750, 300);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    QWidget::closeEvent(event);
}


void MainWindow::on_log_clicked()
{
    query = "SELECT userPW FROM user WHERE userID = '"+ui->id_text2->text().toStdString() + "'";
    Query.exec(QString::fromStdString(query));
    if(Query.size() == 0)
    {
        QMessageBox::warning(this, "error", "ID가 틀렸습니다.");
    }
    else
    {
        Query.next();
        record = Query.record();
        int pw = record.indexOf("userPW");
        if(Query.value(pw) != ui->pw_text2->text())
        {
            QMessageBox::warning(this, "error", "pw가 틀렸습니다.");
        }
        else
        {
            id = ui->id_text2->text().toStdString();
            QMessageBox::information(this, "", "로그인 성공");

            mainpage page(id);
            page.setModal(true);
            page.exec();
            this->show();
        }
    }
}

void MainWindow::on_sign_clicked()
{
    signup sign;
    sign.setModal(true);
    sign.exec();
}
