#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QTextStream>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->checkBox,SIGNAL(clicked(bool)),this,SLOT(checkBox_clicked()));
    connect(ui->checkBox_2,SIGNAL(clicked(bool)),this,SLOT(checkBox_clicked()));
    connect(ui->checkBox_3,SIGNAL(clicked(bool)),this,SLOT(checkBox_clicked()));
}



MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::checkBox_clicked()
{
    QTextStream stream(stdout);
    if(ui->checkBox->isChecked())
    {
        stream<<"{OPTION 1 IS CHECKED}";


    }
    else
    {
        stream<<"{OPTION 1 IS UNCHECKED}";

    }
    if(ui->checkBox_2->isChecked())
    {
        stream<<"{OPTION 2 IS CHECKED}";


    }
    else
    {
        stream<<"{OPTION 2 IS UNCHECKED}";

    }
    if(ui->checkBox_3->isChecked())
    {
        stream<<"{OPTION 3 IS CHECKED}";


    }
    else
    {
        stream<<"{OPTION 3 IS UNCHECKED}";

    }
}


