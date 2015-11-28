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

    Submit_form *student = new Submit_form();

    student->set_info("1", "박종열", "", "");

    show_submit(student);
}

void Submit_manager::show_submit(Submit_form *student)
{
    // 학생들의 정보와 제출여부를 화면에 출력한다.

    QListWidgetItem *subject = new QListWidgetItem();

    ui->student_list->addItem(subject);
    ui->student_list->setItemWidget(subject, student);
}

void Submit_manager::down_report()
{
    // 학생이 업로드한 레포트를 다운로드한다.
}
