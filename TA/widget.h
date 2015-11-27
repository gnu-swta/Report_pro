#ifndef WIDGET_H
#define WIDGET_H

#include "report_manager.h"
#include "classinfo.h"
#include <QWidget>
#include <QDebug>
#include <QModelIndex>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private:
    Ui::Widget *ui;
    void set_class();
    void show_class();
    classArr test[10];
private slots:
    void slot_class(QModelIndex name);
};

#endif // WIDGET_H
