#include "report_manager.h"
#include "ui_report_manager.h"

Report_manager::Report_manager(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Report_manager)
{
    ui->setupUi(this);
    connect(ui->chat, SIGNAL(clicked()), this, SLOT(slot_chat()));
    connect(ui->report, SIGNAL(clicked()), this, SLOT(slot_report()));
    connect(ui->set, SIGNAL(clicked()), this, SLOT(slot_set()));
    connect(ui->report_create, SIGNAL(clicked()), this, SLOT(slot_create()));

    ui->name->setText("김기일");
}

Report_manager::~Report_manager()
{
    delete ui;
}

void Report_manager::slot_chat()
{

}

void Report_manager::slot_report()
{
    Widget *r_main = new Widget();
    r_main->show();
}

void Report_manager::slot_set()
{

}

void Report_manager::slot_create()
{
    Report_create *r_create = new Report_create();
    r_create->show();
}

void Report_manager::slot_submit()
{

}

void Report_manager::set_report()
{
    Report_form *item = new Report_form();

    item->set_info("1", "소프트웨어 개발", "2015. 11. 20");

    show_report(item);
}

void Report_manager::show_report(Report_form *item)
{
    QListWidgetItem *subject = new QListWidgetItem();

    ui->report_list->addItem(subject);
}
