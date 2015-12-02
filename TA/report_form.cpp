#include "report_form.h"
#include "ui_report_form.h"

Report_form::Report_form(int number , QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Report_form)
{
    ui->setupUi(this);

    num = number;

    connect(ui->modify,SIGNAL(clicked()),this,SLOT(slotClick_modify()));
    connect(ui->remove,SIGNAL(clicked()),this,SLOT(slotClick_del()));
}

void Report_form::slotClick_del()
{
    emit click_del(num);
}

void Report_form::slotClick_modify()
{
    emit click_modify(num);
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
