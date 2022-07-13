#include "sight.h"
#include "ui_sight.h"

sight::sight(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sight)
{
    ui->setupUi(this);
    list();
}

sight::~sight()
{
    delete ui;
}

void sight::list()
{
    ui->listtable->clear();
    Query.exec("SELECT * FROM Jeju");
    record = Query.record();

    int visit = record.indexOf("area");
    int addr = record.indexOf("address");

    ui->listtable->setRowCount(Query.size());
    ui->listtable->setColumnCount(record.count());
    ui->listtable->setHorizontalHeaderItem(0, new QTableWidgetItem("여행지"));
    ui->listtable->setHorizontalHeaderItem(1, new QTableWidgetItem("주소"));
    ui->listtable->horizontalHeader()->setStretchLastSection(true);//테이블위젯 마지막 칼럼 크기 맞추기
    int i = 0;

    while(Query.next())
    {
        ui->listtable->setItem(i, 0, new QTableWidgetItem(Query.value(visit).toString()));
        ui->listtable->setItem(i++, 1, new QTableWidgetItem(Query.value(addr).toString()));
    }
}
