#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{    
    ui->setupUi(this);

    connect(ui->listWidget, SIGNAL(doubleClicked(QModelIndex)), this, SLOT(slot_class(QModelIndex)));

    set_class();

    ui->name->setText(test[0].userName);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::slot_class(QModelIndex name)
{
    // 레포트 목록을 보는 위젯을 생성한다.

    Report_manager *r_manager = new Report_manager(test[0]);
    r_manager->show();
}

void Widget::set_class()
{
    // 서버로부터 교수님이 강의하는 강의들의 정보를 받아온다.
    // 교수님이름, 강의명, 강의시간, 강의룸....

    test[0].className = "소프트웨어개발론";
    test[0].userName = "김기일";
    test[0].classNum = "1";
    test[0].classTime = "월(4), 목(1, 2)";
    test[0].classRoomNum = "354-121";

    show_class();
}

void Widget::show_class()
{
    // 강의 목록을 출력한다.

    QListWidgetItem *subject = new QListWidgetItem();

    QString class_info = test[0].className+"["+test[0].classRoomNum+"]["+test[0].classTime+"]";

    subject->setText(class_info);
    ui->listWidget->addItem(subject);
}
