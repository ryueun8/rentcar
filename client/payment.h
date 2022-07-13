#ifndef PAYMENT_H
#define PAYMENT_H

#include <QDialog>

namespace Ui {
class payment;
}

class payment : public QDialog
{
    Q_OBJECT

public:
    explicit payment(std::string id, int price, QWidget *parent = nullptr);
    ~payment();

private slots:


    void on_kakao_clicked();

    void on_toss_clicked();

    void on_bankbook_clicked();

private:
    Ui::payment *ui;
    std::string ID;
    int price;
};

#endif // PAYMENT_H
