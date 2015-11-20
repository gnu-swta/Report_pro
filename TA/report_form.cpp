#include "report_form.h"
#include "ui_report_form.h"

Report_form::Report_form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Report_form)
{
    ui->setupUi(this);
}

Report_form::~Report_form()
{
    delete ui;
}

void Report_form::set_info(QString number, QString name, QString date)
{
    ui->name->setText(name);
    ui->number->setText(number);
    ui->date->setText(date);
}
