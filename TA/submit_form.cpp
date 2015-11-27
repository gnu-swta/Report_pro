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

void Submit_form::set_info(QString number, QString studentName, QString fileName, QString subDate)
{
    ui->number->setText(number);
    ui->student_info->setText(studentName);
    ui->file_name->setText(fileName);
    ui->date->setText(subDate);
}
