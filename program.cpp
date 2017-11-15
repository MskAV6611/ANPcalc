#include "program.h"
#include "ui_program.h"
#include "pcap_pr.h"
#include <QFile>
#include <QFileDialog>
#include <QDebug>
#include <QProcess>


program::program(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::program)
{
    ui->setupUi(this);


}

program::~program()
{
    delete ui;
}



void program::on_actionPCap_triggered()
{
pcap_pr *aaa= new pcap_pr (this);
aaa->show();
}



void program::on_actionCalculator_triggered()
{
    QProcess calculator(this);
    calculator.startDetached("calc");
}

void program::on_actioncustomCalc_triggered()
{
    QProcess Calculator10(this);
    Calculator10.startDetached("Calculator10");
}
