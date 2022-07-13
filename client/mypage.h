#ifndef MYPAGE_H
#define MYPAGE_H

#include <QDialog>
#include "datadase.h"
#include <vector>
#include <sstream>//split

namespace Ui {
class mypage;
}

class mypage : public QDialog
{
    Q_OBJECT

public:
    explicit mypage(std::string ID, QWidget *parent = nullptr);
    ~mypage();
    void show();

private slots:
    void on_change_clicked();

    void on_cancle_clicked();

private:
    Ui::mypage *ui;
    std::string id;
    Database DB;
    std::string query;
    QSqlQuery Query;
    QSqlRecord record;
};

#endif // MYPAGE_H
