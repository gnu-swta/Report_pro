#ifndef REPORT_CREATE_H
#define REPORT_CREATE_H

#include "widget.h"
#include "report_manager.h"
#include "classinfo.h"
#include <QWidget>
#include <QDate>

namespace Ui {
class Report_create;
}

struct cReport
{
    QString name;
    QDate sdate;
    QDate edate;
    QString exp;
};

class Report_create : public QWidget
{
    Q_OBJECT

public:
    explicit Report_create(struct classArr data, QWidget *parent = 0);
    ~Report_create();

private:
    Ui::Report_create *ui;
    classArr test;
    void set_report();

private slots:
    void slot_create();
    void slot_cancel();
};

#endif // REPORT_CREATE_H
