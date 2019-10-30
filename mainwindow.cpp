#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    widget1 = new Widget1();
    widget2 = new Widget2();
    setCentralWidget(widget1);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionNew_triggered()
{
    setCentralWidget(widget1);
}

void MainWindow::on_actionOpen_triggered()
{
    setCentralWidget(widget2);
}
