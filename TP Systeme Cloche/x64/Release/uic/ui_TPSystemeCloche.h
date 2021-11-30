/********************************************************************************
** Form generated from reading UI file 'TPSystemeCloche.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TPSYSTEMECLOCHE_H
#define UI_TPSYSTEMECLOCHE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TPSystemeClocheClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TPSystemeClocheClass)
    {
        if (TPSystemeClocheClass->objectName().isEmpty())
            TPSystemeClocheClass->setObjectName(QString::fromUtf8("TPSystemeClocheClass"));
        TPSystemeClocheClass->resize(600, 400);
        menuBar = new QMenuBar(TPSystemeClocheClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        TPSystemeClocheClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TPSystemeClocheClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        TPSystemeClocheClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(TPSystemeClocheClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        TPSystemeClocheClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(TPSystemeClocheClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        TPSystemeClocheClass->setStatusBar(statusBar);

        retranslateUi(TPSystemeClocheClass);

        QMetaObject::connectSlotsByName(TPSystemeClocheClass);
    } // setupUi

    void retranslateUi(QMainWindow *TPSystemeClocheClass)
    {
        TPSystemeClocheClass->setWindowTitle(QCoreApplication::translate("TPSystemeClocheClass", "TPSystemeCloche", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TPSystemeClocheClass: public Ui_TPSystemeClocheClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TPSYSTEMECLOCHE_H
