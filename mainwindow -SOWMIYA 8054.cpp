#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QTextStream>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_checkBox_2_clicked()
{
 QTextStream stream (stdout);
 if(ui->checkBox_2->isChecked())
 {
     ui->label->setText("<font color='red'>CHANGE ME!</font>");

}
}

void MainWindow::on_checkBox_clicked()
{
    ui->checkBox->isChecked();
    ui->label->setText("<font color='green'>CHANGE ME!</font>");
}

void MainWindow::on_radioButton_clicked()
{
    ui->radioButton->isChecked();
    ui->label->setText("<font color='orange'>CHANGE ME!</font>");
}


void MainWindow::on_radioButton_2_clicked()
{
    ui->radioButton_2->isChecked();
    ui->label->setText("<font color='pink'>CHANGE ME!</font>");
}

void MainWindow::on_radioButton_3_clicked()
{
    ui->radioButton_3->isChecked();
    ui->label->setText("<font color='maroon'>CHANGE ME!</font>");
}
