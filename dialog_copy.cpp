#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}
void Dialog::setclient(Client c)
{
    ui->LineEdit_cinD->setText(c.get_cin());
    ui->LineEdit_nomD->setText(cget_nom());
    ui->LineEdit_prenomD->setText(cget_prenom());

}
