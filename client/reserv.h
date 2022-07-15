#ifndef RESERV_H
#define RESERV_H

#include <QDialog>
#include <QMessageBox>
#include"datadase.h"
#include <vector>

namespace Ui {
class reserv;
}

class reserv : public QDialog
{
    Q_OBJECT

public:
    explicit reserv(std::string ID, QWidget *parent = nullptr);
    ~reserv();

private slots:

    void on_oil1_clicked();

    void on_oil2_clicked();

    void on_oil3_clicked();

    void on_oil4_clicked();

    void on_booking_clicked();

private:
    Ui::reserv *ui;
    Database DB;
    std::string query;
    QSqlQuery Query;
    QSqlRecord record;

    std::string id;
    std::string save;

};

#endif // RESERV_H
