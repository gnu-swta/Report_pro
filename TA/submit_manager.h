#ifndef SUBMIT_MANAGER_H
#define SUBMIT_MANAGER_H

#include "widget.h"
#include "report_manager.h"
#include "submit_form.h"
#include <QWidget>

namespace Ui {
class Submit_manager;
}

class Submit_manager : public QWidget
{
    Q_OBJECT

public:
    explicit Submit_manager(QWidget *parent = 0);
    ~Submit_manager();

private:
    Ui::Submit_manager *ui;

private slots:
    void slot_chat();
    void slot_report();
    void slot_set();
};

#endif // SUBMIT_MANAGER_H
