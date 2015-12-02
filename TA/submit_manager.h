#ifndef SUBMIT_MANAGER_H
#define SUBMIT_MANAGER_H

#include "widget.h"
#include "report_manager.h"
#include "submit_form.h"
#include "classinfo.h"
#include <QWidget>

namespace Ui {
class Submit_manager;
}

class Submit_manager : public QWidget
{
    Q_OBJECT

public:
    explicit Submit_manager(struct classArr data, QWidget *parent = 0);
    ~Submit_manager();

private:
    Ui::Submit_manager *ui;
    classArr test;
    void set_submit();
    void show_submit(Submit_form *student);
    void down_report();

private slots:

};

#endif // SUBMIT_MANAGER_H
