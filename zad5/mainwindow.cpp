#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPainter>
#include <QColor>
#include <QMouseEvent>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    vlay = new QVBoxLayout();
    hlay1 = new QHBoxLayout();
    vlay->addLayout(hlay1);
    ui->centralwidget->setLayout(vlay);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::mouseDoubleClickEvent(QMouseEvent *event){
    //delete fig1;
    fig1 = new figures("00F", figures::circle, event->pos());
    hlay1->addWidget(fig1);

}
