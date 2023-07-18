/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainSence
{
public:
    QAction *actionquit;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menu;

    void setupUi(QMainWindow *MainSence)
    {
        if (MainSence->objectName().isEmpty())
            MainSence->setObjectName("MainSence");
        MainSence->resize(800, 600);
        actionquit = new QAction(MainSence);
        actionquit->setObjectName("actionquit");
        centralwidget = new QWidget(MainSence);
        centralwidget->setObjectName("centralwidget");
        MainSence->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainSence);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        MainSence->setMenuBar(menubar);

        menubar->addAction(menu->menuAction());
        menu->addAction(actionquit);

        retranslateUi(MainSence);

        QMetaObject::connectSlotsByName(MainSence);
    } // setupUi

    void retranslateUi(QMainWindow *MainSence)
    {
        MainSence->setWindowTitle(QCoreApplication::translate("MainSence", "MainWindow", nullptr));
        actionquit->setText(QCoreApplication::translate("MainSence", "\351\200\200\345\207\272", nullptr));
        menu->setTitle(QCoreApplication::translate("MainSence", "\345\274\200\345\247\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainSence: public Ui_MainSence {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
