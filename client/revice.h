#ifndef REVICE_H
#define REVICE_H

#include <QDialog>
#include "datadase.h"

namespace Ui {
class revice;
}

class revice : public QDialog
{
    Q_OBJECT

public:
    explicit revice(std::string id, QWidget *parent = nullptr);
    ~revice();
    void closeEvent(QCloseEvent *);

private slots:


    void on_nomal_clicked();

    void on_premium_clicked();

    void on_vip_clicked();

    void on_change_clicked();

private:
    Ui::revice *ui;
    std::string ID;
    Database DB;
    std::string query;
    QSqlQuery Query;
    QSqlRecord record;

};

#endif // REVICE_H
