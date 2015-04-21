/********************************************************************************
** Form generated from reading UI file 'scrutch.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCRUTCH_H
#define UI_SCRUTCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Scrutch
{
public:
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Scrutch)
    {
        if (Scrutch->objectName().isEmpty())
            Scrutch->setObjectName(QStringLiteral("Scrutch"));
        Scrutch->resize(923, 550);
        centralWidget = new QWidget(Scrutch);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Scrutch->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Scrutch);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 923, 21));
        Scrutch->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Scrutch);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Scrutch->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Scrutch);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Scrutch->setStatusBar(statusBar);

        retranslateUi(Scrutch);

        QMetaObject::connectSlotsByName(Scrutch);
    } // setupUi

    void retranslateUi(QMainWindow *Scrutch)
    {
        Scrutch->setWindowTitle(QApplication::translate("Scrutch", "Scrutch", 0));
    } // retranslateUi

};

namespace Ui {
    class Scrutch: public Ui_Scrutch {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCRUTCH_H
