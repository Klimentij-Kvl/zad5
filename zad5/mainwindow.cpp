#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPainter>
#include <QColor>
#include <QVBoxLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QVBoxLayout *vlay = new QVBoxLayout();

    fig1 = new figures("00F", figures::rect);
    vlay->addWidget(fig1);

    ui->centralwidget->setLayout(vlay);
}

MainWindow::~MainWindow()
{
    delete ui;
}
