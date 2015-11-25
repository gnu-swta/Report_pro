#include "report_create.h"
#include "ui_report_create.h"

Report_create::Report_create(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Report_create)
{
    ui->setupUi(this);
    connect(ui->add, SIGNAL(clicked()), this, SLOT(slot_create));
    connect(ui->cancel, SIGNAL(clicked()), this, SLOT(quit()));
}

Report_create::~Report_create()
{
    delete ui;
}

void Report_create::slot_create()
{

}

void Report_create::slot_cancel()
{

}
