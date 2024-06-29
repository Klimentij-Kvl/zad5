/********************************************************************************
** Form generated from reading UI file 'figures.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIGURES_H
#define UI_FIGURES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_figures
{
public:

    void setupUi(QWidget *figures)
    {
        if (figures->objectName().isEmpty())
            figures->setObjectName(QString::fromUtf8("figures"));
        figures->resize(400, 300);

        retranslateUi(figures);

        QMetaObject::connectSlotsByName(figures);
    } // setupUi

    void retranslateUi(QWidget *figures)
    {
        figures->setWindowTitle(QCoreApplication::translate("figures", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class figures: public Ui_figures {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIGURES_H
