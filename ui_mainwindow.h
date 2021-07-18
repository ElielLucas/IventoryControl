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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *btnProdutos;
    QPushButton *btnClientes;
    QPushButton *btnPedidos;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(262, 313);
        MainWindow->setMinimumSize(QSize(262, 313));
        MainWindow->setMaximumSize(QSize(262, 313));
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow{background:qlineargradient(spread:pad, x1:0.994, y1:0, x2:1, y2:1, stop:0.198864 rgba(255, 127, 34, 251), stop:1 rgba(0, 0, 0, 255))}\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        btnProdutos = new QPushButton(centralwidget);
        btnProdutos->setObjectName(QString::fromUtf8("btnProdutos"));
        btnProdutos->setGeometry(QRect(70, 50, 121, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("Courier"));
        font.setPointSize(15);
        btnProdutos->setFont(font);
        btnProdutos->setStyleSheet(QString::fromUtf8("QPushButton{background:qlineargradient(spread:reflect, x1:0.994318, y1:0.915, x2:0.994318, y2:0.488, stop:0.1875 rgba(128, 128, 128, 255), stop:1 rgba(211, 211, 211, 255))}\n"
"\n"
""));
        btnClientes = new QPushButton(centralwidget);
        btnClientes->setObjectName(QString::fromUtf8("btnClientes"));
        btnClientes->setGeometry(QRect(70, 120, 121, 51));
        btnClientes->setFont(font);
        btnClientes->setStyleSheet(QString::fromUtf8("QPushButton{background:qlineargradient(spread:reflect, x1:0.994318, y1:0.915, x2:0.994318, y2:0.488, stop:0.1875 rgba(128, 128, 128, 255), stop:1 rgba(211, 211, 211, 255))}\n"
"\n"
""));
        btnPedidos = new QPushButton(centralwidget);
        btnPedidos->setObjectName(QString::fromUtf8("btnPedidos"));
        btnPedidos->setGeometry(QRect(70, 190, 121, 51));
        btnPedidos->setFont(font);
        btnPedidos->setStyleSheet(QString::fromUtf8("QPushButton{background:qlineargradient(spread:reflect, x1:0.994318, y1:0.915, x2:0.994318, y2:0.488, stop:0.1875 rgba(128, 128, 128, 255), stop:1 rgba(211, 211, 211, 255))}\n"
"\n"
""));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "eComerce", nullptr));
        btnProdutos->setText(QCoreApplication::translate("MainWindow", "Produtos", nullptr));
        btnClientes->setText(QCoreApplication::translate("MainWindow", "Clientes", nullptr));
        btnPedidos->setText(QCoreApplication::translate("MainWindow", "Pedidos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
