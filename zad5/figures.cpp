#include "figures.h"
#include "ui_figures.h"
#include <QPainter>
#include <QCursor>

figures::figures(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::figures)
{
    ui->setupUi(this);
    color = "#f00";
    figure = figures::circle;
}

figures::figures(QString col, int fig, QPoint p){
    this->color = col;
    this->figure = fig;
    x = p.rx();
    y = p.ry();
}

figures::~figures()
{
    delete ui;
}

void figures::paintEvent(QPaintEvent*){
    QColor color = this->color;
    QPainter painter(this);
    painter.setPen(QPen(color, 4));
    if(figure == figures::circle){
        painter.drawEllipse(QRectF(this->x,this->y,40,40));
    }
    else if(figure == figures::rect){
        painter.drawRect(QRectF(0,0,40,40));
    }
}
