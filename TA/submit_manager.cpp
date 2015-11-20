#include "submit_manager.h"
#include "ui_submit_manager.h"

Submit_manager::Submit_manager(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Submit_manager)
{
    ui->setupUi(this);
    connect(ui->chat, SIGNAL(clicked()), this, SLOT(slot_chat()));
    connect(ui->report, SIGNAL(clicked()), this, SLOT(slot_report()));
    connect(ui->set, SIGNAL(clicked()), this, SLOT(slot_set()));
}

Submit_manager::~Submit_manager()
{
    delete ui;
}

void Submit_manager::slot_chat()
{

}

void Submit_manager::slot_report()
{
    Widget *r_main = new Widget();
    r_main->show();
}

void Submit_manager::slot_set()
{

}
