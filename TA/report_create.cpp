#include "report_create.h"
#include "ui_report_create.h"

Report_create::Report_create(struct classArr data, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Report_create)
{
    ui->setupUi(this);

    test = data;

    ui->user_name->setText(test.userName);
    ui->class_name->setText(test.className);

    connect(ui->add, SIGNAL(clicked()), this, SLOT(slot_create()));
    connect(ui->cancel, SIGNAL(clicked()), this, SLOT(slot_cancel()));
}

Report_create::~Report_create()
{
    delete ui;
}

void Report_create::slot_create()
{
    // 레포트를 등록한다.

    set_report();

    this->close();
}

void Report_create::slot_cancel()
{
    // 레포트 생성 위젯을 종료한다.

    this->close();
}

void Report_create::set_report()
{
    // 서버로 입력받은 레포트의 정보를 저장한다.

    cReport rep;

    rep.name = ui->report_name->text();
    rep.sdate = ui->start_date->date();
    rep.edate = ui->end_date->date();
    rep.exp = ui->explain->toPlainText();
}
