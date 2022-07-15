#ifndef MAINPAGE_H
#define MAINPAGE_H

#include <QDialog>
#include "sight.h"
#include "thread.h"
using namespace std;

namespace Ui {
class mainpage;
}

class mainpage : public QDialog
{
    Q_OBJECT

public:
    explicit mainpage(std::string id, QWidget *parent = nullptr);
    ~mainpage();

private slots:
    void on_info_clicked();

    void on_rental_clicked();

    void on_visit_clicked();

    void on_pushButton_clicked();

private:
    Ui::mainpage *ui;
    std::string ID;
};

#endif // MAINPAGE_H
