#ifndef REPORT_MANAGER_H
#define REPORT_MANAGER_H

#include "widget.h"
#include "report_create.h"
#include "submit_manager.h"
#include "report_form.h"
#include "classinfo.h"
#include <QWidget>
#include <QDebug>
#include <QModelIndex>

namespace Ui {
class Report_manager;
}

class Report_manager : public QWidget
{
    Q_OBJECT

public:
    explicit Report_manager(struct classArr data, QWidget *parent = 0);
    ~Report_manager();

private:
    Ui::Report_manager *ui;
    void set_report();
    void show_report();
    classArr test;
    Report_form *item[10];

private slots:
    void slot_create();
    void slot_submit(QModelIndex name);
    void slot_renwwal();
    void slot_modify();
    void slot_remove();
};

#endif // REPORT_MANAGER_H
