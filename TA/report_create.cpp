#include "report_create.h"
#include "ui_report_create.h"

Report_create::Report_create(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Report_create)
{
    ui->setupUi(this);
    connect(ui->chat, SIGNAL(clicked()), this, SLOT(slot_chat()));
    connect(ui->report, SIGNAL(clicked()), this, SLOT(slot_report()));
    connect(ui->set, SIGNAL(clicked()), this, SLOT(slot_set()));
}

Report_create::~Report_create()
{
    delete ui;
}

void Report_create::slot_chat()
{

}

void Report_create::slot_report()
{
    Widget *r_main = new Widget();
    r_main->show();
}

void Report_create::slot_set()
{

}
