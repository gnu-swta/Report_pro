#include "report_manager.h"
#include "ui_report_manager.h"

Report_manager::Report_manager(struct classArr data, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Report_manager)
{
    ui->setupUi(this);

    test = data;

    ui->user_name->setText(data.userName);
    ui->class_name->setText(data.className);

    set_report();

    connect(ui->report_create, SIGNAL(clicked()), this, SLOT(slot_create()));
    connect(ui->renewal, SIGNAL(clicked()), this, SLOT(slot_renwwal()));
    connect(ui->report_list, SIGNAL(doubleClicked(QModelIndex)), this, SLOT(slot_submit(QModelIndex)));
}

Report_manager::~Report_manager()
{
    delete ui;
}

void Report_manager::slot_renwwal()
{
    // 레포트 리스트를 갱신한다.

    set_report();
}

void Report_manager::slot_create()
{
    // 레포트를 생성하는 위젯을 생성한다.

    Report_create *r_create = new Report_create(test);
    r_create->show();
}

void Report_manager::slot_submit()
{
    // 레포트 제출관리하는 위젯을 생성한다.

    Submit_manager *s_manager = new Submit_manager(test);
    s_manager->show();
}

void Report_manager::set_report()
{
    // 서버로부터 강의의 정보를 가지고 과제 리스트를 받아온다.
    // 레포트 명, 레포트 기간

    Report_form *item = new Report_form();

    item->set_info("1", "명세서", "2015.11.20~2015.11.30");

    show_report(item);
}

void Report_manager::show_report(Report_form *item)
{
    // 레포트 리스트를 화면에 출력한다.

    QListWidgetItem *subject = new QListWidgetItem();


    ui->report_list->addItem(subject);
    ui->report_list->setItemWidget(subject, item);
}
