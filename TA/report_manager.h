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
#include <QListWidgetItem>

namespace Ui {
class Report_manager;
}

class Report_manager : public QWidget
{
    Q_OBJECT

public:
    explicit Report_manager(struct classArr data, QWidget *parent = 0);
    Report_form *item[20];
    ~Report_manager();

private:
    Ui::Report_manager *ui;
    void set_report();
    void show_report(Report_form *item);
    classArr test;


private slots:
    void slot_create();
    void slot_submit(QModelIndex idx);
    void slot_renwwal();
    void slot_delete();
    void slot_click_mod(int num);
    void slot_click_del(int num);
    void slot_item_clicked(QListWidgetItem*);
};

#endif // REPORT_MANAGER_H
