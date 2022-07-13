#ifndef SIGNUP_H
#define SIGNUP_H

#include <QDialog>
#include "datadase.h"

namespace Ui {
class signup;
}

class signup : public QDialog
{
    Q_OBJECT

public:
    explicit signup(QWidget *parent = nullptr);
    ~signup();

private slots:

    void on_check_clicked();

    void on_sign_clicked();

    void on_nomal_clicked();

    void on_premium_clicked();

    void on_vip_clicked();

private:
    Ui::signup *ui;
    QSqlQuery Query;
    std::string query;
};

#endif // SIGNUP_H
