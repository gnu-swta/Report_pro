#ifndef SUBMIT_FORM_H
#define SUBMIT_FORM_H

#include <QWidget>

namespace Ui {
class Submit_form;
}

class Submit_form : public QWidget
{
    Q_OBJECT

public:
    explicit Submit_form(QWidget *parent = 0);
    ~Submit_form();

private:
    Ui::Submit_form *ui;
};

#endif // SUBMIT_FORM_H
