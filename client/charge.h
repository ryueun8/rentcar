#ifndef CHARGE_H
#define CHARGE_H

#include <QDialog>
#include "datadase.h"

namespace Ui {
class charge;
}

class charge : public QDialog
{
    Q_OBJECT

public:
    explicit charge(std::string ID, int price, QWidget *parent = nullptr);
    ~charge();
    void receipt();

private slots:
    void on_charge_2_clicked();

    void on_pay_clicked();

private:
    Ui::charge *ui;
    Database DB;
    std::string query;
    QSqlQuery Query;
    QSqlRecord record;

    std::string id;
    int price;
    int total = 0;
};

#endif // CHARGE_H
