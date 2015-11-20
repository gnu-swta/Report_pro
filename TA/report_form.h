#ifndef REPORT_FORM_H
#define REPORT_FORM_H

#include <QWidget>

namespace Ui {
class Report_form;
}

class Report_form : public QWidget
{
    Q_OBJECT

public:
    explicit Report_form(QWidget *parent = 0);
    ~Report_form();
    void set_info(QString number, QString name, QString date);

private:
    Ui::Report_form *ui;
};

#endif // REPORT_FORM_H
