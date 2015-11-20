#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(ui->chat, SIGNAL(clicked()), this, SLOT(slot_chat()));
    connect(ui->set, SIGNAL(clicked()), this, SLOT(slot_set()));
    connect(ui->listWidget, SIGNAL(doubleClicked(QModelIndex)), this, SLOT(slot_class(QModelIndex)));

    ui->name->setText("김기일");

    set_class();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::slot_class(QModelIndex name)
{
    Report_manager *r_manager = new Report_manager();
    r_manager->show();
}

void Widget::slot_chat()
{

}

void Widget::slot_set()
{

}

void Widget::set_class()
{
    QString class_info;

    for(int i = 1; i < 9; i++)
    {
        class_info = set_class_info(i);
        show_class(class_info);
    }
}

QString Widget::set_class_info(int i)
{
    QString class_if[9];

    class_if[1] = "꿈·미래개척[ ]- ";
    class_if[2] = "소프트웨어 개발론[ ]-월(4), 목(1, 2)";
    class_if[3] = "시스템 성능[ ]-월(1), 수(2, 3)";
    class_if[4] = "운용체제 커널[ ]-화(6, 7), 목(5)";
    class_if[5] = "유럽문화의 이해[ ]-목(3, 4)";
    class_if[6] = "중국어 발음[ ]-토(9,10)";
    class_if[7] = "직업과 진로개발2[ ]-화(8, 9)";
    class_if[8] = "컴퓨터 망[ ]-월(5), 수(5,6)";

    return class_if[i];
}

void Widget::show_class(QString class_info)
{
    QListWidgetItem *subject = new QListWidgetItem();

    subject->setText(class_info);
    ui->listWidget->addItem(subject);
}
