#ifndef FIGURES_H
#define FIGURES_H

#include <QWidget>

namespace Ui {
class figures;
}

class figures : public QWidget
{
    Q_OBJECT

public:
    explicit figures(QWidget *parent = nullptr);

    figures(QString col);
    figures(QString col, int fig);

    ~figures();

    static const int none = 0;
    static const int circle = 1;
    static const int rect = 2;


protected:
    virtual void paintEvent(QPaintEvent *event);

private:
    Ui::figures *ui;
    int figure;
    QString color;
};

#endif // FIGURES_H
