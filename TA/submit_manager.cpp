#include "submit_manager.h"
#include "ui_submit_manager.h"

Submit_manager::Submit_manager(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Submit_manager)
{
    ui->setupUi(this);

}

Submit_manager::~Submit_manager()
{
    delete ui;
}

