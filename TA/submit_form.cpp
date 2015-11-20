#include "submit_form.h"
#include "ui_submit_form.h"

Submit_form::Submit_form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Submit_form)
{
    ui->setupUi(this);
}

Submit_form::~Submit_form()
{
    delete ui;
}
