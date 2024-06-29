#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPainter>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QVector>
#include "figures.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    figures *fig1;
    QVBoxLayout *vlay;
    QHBoxLayout *hlay1;

protected:
    virtual void mouseDoubleClickEvent(QMouseEvent*);
};
#endif // MAINWINDOW_H
