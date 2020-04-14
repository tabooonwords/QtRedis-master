#include "mainwindow.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);




    Test test;
    QString str =test.startTest();

   ui->label->setText(str);



}

MainWindow::~MainWindow()
{
    delete ui;
}

