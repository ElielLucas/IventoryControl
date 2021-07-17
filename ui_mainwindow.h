/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *btnProdutos;
    QPushButton *btnClientes;
    QPushButton *btnPedidos;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(194, 282);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        btnProdutos = new QPushButton(centralwidget);
        btnProdutos->setObjectName(QString::fromUtf8("btnProdutos"));
        btnProdutos->setGeometry(QRect(40, 20, 121, 51));
        QFont font;
        font.setPointSize(15);
        btnProdutos->setFont(font);
        btnClientes = new QPushButton(centralwidget);
        btnClientes->setObjectName(QString::fromUtf8("btnClientes"));
        btnClientes->setGeometry(QRect(40, 90, 121, 51));
        btnClientes->setFont(font);
        btnPedidos = new QPushButton(centralwidget);
        btnPedidos->setObjectName(QString::fromUtf8("btnPedidos"));
        btnPedidos->setGeometry(QRect(40, 160, 121, 51));
        btnPedidos->setFont(font);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(200, 40, 321, 141));
        label->setPixmap(QPixmap(QString::fromUtf8("images.png")));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 194, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "eComerce", nullptr));
        btnProdutos->setText(QCoreApplication::translate("MainWindow", "Produtos", nullptr));
        btnClientes->setText(QCoreApplication::translate("MainWindow", "Clientes", nullptr));
        btnPedidos->setText(QCoreApplication::translate("MainWindow", "Pedidos", nullptr));
        label->setText(QString());
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
