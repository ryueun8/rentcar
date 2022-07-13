#ifndef MYPAGE_H
#define MYPAGE_H

#include <QDialog>

namespace Ui {
class mypage;
}

class mypage : public QDialog
{
    Q_OBJECT

public:
    explicit mypage(QWidget *parent = nullptr);
    ~mypage();

private:
    Ui::mypage *ui;
};

#endif // MYPAGE_H
