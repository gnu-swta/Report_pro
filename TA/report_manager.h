#ifndef REPORT_MANAGER_H
#define REPORT_MANAGER_H

#include "widget.h"
#include "report_create.h"
#include "submit_manager.h"
#include "report_form.h"
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
    explicit Report_manager(QWidget *parent = 0);
    ~Report_manager();

private:
    Ui::Report_manager *ui;
    void set_report();
    void show_report(Report_form *item);

private slots:
    void slot_chat();
    void slot_report();
    void slot_set();
    void slot_create();
    void slot_submit();
};

#endif // REPORT_MANAGER_H
