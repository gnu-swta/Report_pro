#ifndef WIDGET_H
#define WIDGET_H

#include "report_manager.h"
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
    QString set_class_info(int i);
    void show_class(QString class_info);
private slots:
    void slot_chat();
    void slot_set();
    void slot_class(QModelIndex name);
};

#endif // WIDGET_H
