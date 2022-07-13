#ifndef SIGHT_H
#define SIGHT_H

#include <QDialog>
#include "datadase.h"

namespace Ui {
class sight;
}

class sight : public QDialog
{
    Q_OBJECT

public:
    explicit sight(QWidget *parent = nullptr);
    ~sight();
    void list();

private:
    Ui::sight *ui;
    Database DB;
    std::string query;
    QSqlQuery Query;
    QSqlRecord record;
};

#endif // SIGHT_H
