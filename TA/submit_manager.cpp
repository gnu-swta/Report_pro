#include "submit_manager.h"
#include "ui_submit_manager.h"

Submit_manager::Submit_manager(struct classArr data, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Submit_manager)
{
    ui->setupUi(this);

    test = data;

    set_submit();

    ui->user_name->setText(test.userName);
    ui->class_name->setText(test.className);
}

Submit_manager::~Submit_manager()
{
    delete ui;
}

void Submit_manager::set_submit()
{
    // 서버로부터 학생들의 정보와 제출여부를 받아온다.
}
