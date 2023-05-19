#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "QProcess.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->lineEdit, SIGNAL(returnPressed()), this, SLOT(slot1()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::slot1()
{
    QString text = ui->lineEdit->text();
    QProcess *process = new QProcess(this);
    process->start(text);
}
