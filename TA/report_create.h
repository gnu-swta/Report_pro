#ifndef REPORT_CREATE_H
#define REPORT_CREATE_H

#include "widget.h"
#include "report_manager.h"
#include <QWidget>

namespace Ui {
class Report_create;
}

class Report_create : public QWidget
{
    Q_OBJECT

public:
    explicit Report_create(QWidget *parent = 0);
    ~Report_create();

private:
    Ui::Report_create *ui;

private slots:
    void slot_chat();
    void slot_report();
    void slot_set();
};

#endif // REPORT_CREATE_H
