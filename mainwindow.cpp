#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "client.h"
#include "dialog.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->LineEdit_cin->setValidator(new QIntValidator(0,99999999,this));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    Client c;
    c.setcin(ui->LineEdit_cin->text());
    c.setnom(ui->LineEdit_nom->text());
    c.setprenom(ui->LineEdit_prenom->text());
    Dialog d;
    d.setclient(c);
    d.exec();
}
