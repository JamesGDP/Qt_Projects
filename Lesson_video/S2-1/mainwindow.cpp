#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QPushButton>
#include <QCheckBox>
#include <QLabel>
#include <QTime>
#include <QHBoxLayout>
#include <QObject>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
   // ui->setupUi(this);

    QWidget* widget=new QWidget(this);
    setCentralWidget(widget);

    QPushButton* clickbtn=new QPushButton("click",widget);
    clickbtn->setObjectName("btn");
    QCheckBox* cb=new QCheckBox("Connect",widget);
    cb->setObjectName("CkBox");
    cb->setCheckState(Qt::Checked);
    QLabel* label=new QLabel(QTime::currentTime().toString(),widget);
    label->setObjectName("label");

    QHBoxLayout* hlayout=new QHBoxLayout(widget);

    hlayout->addWidget(clickbtn);
    hlayout->addWidget(cb);
    hlayout->addWidget(label);

   // ui->centralwidget=widget;

    startTimer(1000);

    //connect
    connect(clickbtn,&QPushButton::clicked,this,&MainWindow::Onclick);
    connect(cb,&QCheckBox::stateChanged,this,&MainWindow::Oncheck);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::Onclick()
{
    count++;
    statusBar()->showMessage(QString("Clicked")+QString::number(count));

    this->dumpObjectTree();
}

void MainWindow::Oncheck()
{
    QPushButton* pbtn=this->findChild<QPushButton*>("btn");

    QCheckBox* pck=this->findChild<QCheckBox*>("CkBox");

    if(pck->isChecked()) connect(pbtn,&QPushButton::clicked,this,&MainWindow::Onclick);
    else disconnect(pbtn,&QPushButton::clicked,this,&MainWindow::Onclick);
}
void MainWindow::timerEvent(QTimerEvent *event)
{


    QLabel* plabel=this->findChild<QLabel*>("label");

    if(plabel)
    {

        plabel->setText(QTime::currentTime().toString());
    }
    else
    {

    }

}
