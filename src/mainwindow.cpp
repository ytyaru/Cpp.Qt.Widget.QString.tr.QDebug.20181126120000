#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QString msg = QString::fromLocal8Bit("おはよう！");
    qDebug() << msg;
    qDebug() << msg + msg;
    qDebug() << tr("こんにちは！");
    qDebug() << msg + tr("こんにちは！");
    QString msg2 = tr("さようなら！");
    qDebug() << msg2;
}

MainWindow::~MainWindow()
{
    delete ui;
}
