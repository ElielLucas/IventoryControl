/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExportar_para_Excel;
    QAction *actionDeletar_Dados;
    QWidget *centralwidget;
    QPushButton *btnProdutos;
    QPushButton *btnClientes;
    QPushButton *btnPedidos;
    QMenuBar *menuBar;
    QMenu *menuDados;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(262, 340);
        MainWindow->setMinimumSize(QSize(262, 313));
        MainWindow->setMaximumSize(QSize(262, 340));
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow{background:qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0 rgba(2, 0, 36, 255), stop:1 rgba(239, 77, 18, 255))\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        actionExportar_para_Excel = new QAction(MainWindow);
        actionExportar_para_Excel->setObjectName(QString::fromUtf8("actionExportar_para_Excel"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imgs/images/iconExport.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExportar_para_Excel->setIcon(icon);
        actionDeletar_Dados = new QAction(MainWindow);
        actionDeletar_Dados->setObjectName(QString::fromUtf8("actionDeletar_Dados"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/imgs/images/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDeletar_Dados->setIcon(icon1);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  font-size:15px;\n"
"  border-width:1px;\n"
"  border-color:#1f2f47;\n"
"  border-top-left-radius:17px;\n"
"  border-top-right-radius:17px;\n"
"  border-bottom-left-radius:17px;\n"
"  border-bottom-right-radius:17px;\n"
"}\n"
"\n"
""));
        btnProdutos = new QPushButton(centralwidget);
        btnProdutos->setObjectName(QString::fromUtf8("btnProdutos"));
        btnProdutos->setGeometry(QRect(70, 50, 121, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Courier")});
        btnProdutos->setFont(font);
        btnProdutos->setStyleSheet(QString::fromUtf8("QPushButton{background:qlineargradient(spread:reflect, x1:0.994318, y1:0.915, x2:0.994318, y2:0.488, stop:0.1875 rgba(128, 128, 128, 255), stop:1 rgba(211, 211, 211, 255))}\n"
"\n"
"QPushButton::pressed\n"
"{\n"
"	background:qlineargradient(spread:reflect, x1:0.994318, y1:0.915, x2:0.994318, y2:0.488, stop:0.1875 rgba(227, 156, 41, 255), stop:1 rgba(211, 211, 211, 255));\n"
"margin-top:1px;\n"
"margin-bottom:-1px;\n"
"}\n"
"QPushButton::hover\n"
"{\n"
"	background:qlineargradient(spread:reflect, x1:0.994318, y1:0.915, x2:0.994318, y2:0.488, stop:0.1875 rgba(227, 156, 41, 255), stop:1 rgba(211, 211, 211, 255));\n"
"}\n"
"\n"
""));
        btnClientes = new QPushButton(centralwidget);
        btnClientes->setObjectName(QString::fromUtf8("btnClientes"));
        btnClientes->setGeometry(QRect(70, 120, 121, 51));
        btnClientes->setFont(font);
        btnClientes->setStyleSheet(QString::fromUtf8("QPushButton{background:qlineargradient(spread:reflect, x1:0.994318, y1:0.915, x2:0.994318, y2:0.488, stop:0.1875 rgba(128, 128, 128, 255), stop:1 rgba(211, 211, 211, 255));}\n"
"\n"
"QPushButton::pressed\n"
"{\n"
"	background:qlineargradient(spread:reflect, x1:0.994318, y1:0.915, x2:0.994318, y2:0.488, stop:0.1875 rgba(227, 156, 41, 255), stop:1 rgba(211, 211, 211, 255));\n"
"margin-top:1px;\n"
"margin-bottom:-1px;\n"
"}\n"
"QPushButton::hover\n"
"{\n"
"	background:qlineargradient(spread:reflect, x1:0.994318, y1:0.915, x2:0.994318, y2:0.488, stop:0.1875 rgba(227, 156, 41, 255), stop:1 rgba(211, 211, 211, 255));\n"
"}"));
        btnPedidos = new QPushButton(centralwidget);
        btnPedidos->setObjectName(QString::fromUtf8("btnPedidos"));
        btnPedidos->setGeometry(QRect(70, 190, 121, 51));
        btnPedidos->setFont(font);
        btnPedidos->setStyleSheet(QString::fromUtf8("QPushButton{background:qlineargradient(spread:reflect, x1:0.994318, y1:0.915, x2:0.994318, y2:0.488, stop:0.1875 rgba(128, 128, 128, 255), stop:1 rgba(211, 211, 211, 255));}\n"
"\n"
"QPushButton::pressed\n"
"{\n"
"	background:qlineargradient(spread:reflect, x1:0.994318, y1:0.915, x2:0.994318, y2:0.488, stop:0.1875 rgba(227, 156, 41, 255), stop:1 rgba(211, 211, 211, 255));\n"
"margin-top:1px;\n"
"margin-bottom:-1px;\n"
"}\n"
"QPushButton::hover\n"
"{\n"
"	background:qlineargradient(spread:reflect, x1:0.994318, y1:0.915, x2:0.994318, y2:0.488, stop:0.1875 rgba(227, 156, 41, 255), stop:1 rgba(211, 211, 211, 255));\n"
"}\n"
"\n"
""));
        MainWindow->setCentralWidget(centralwidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 262, 21));
        menuDados = new QMenu(menuBar);
        menuDados->setObjectName(QString::fromUtf8("menuDados"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuDados->menuAction());
        menuDados->addAction(actionExportar_para_Excel);
        menuDados->addAction(actionDeletar_Dados);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "eComerce", nullptr));
        actionExportar_para_Excel->setText(QCoreApplication::translate("MainWindow", "Exportar para Excel", nullptr));
#if QT_CONFIG(tooltip)
        actionExportar_para_Excel->setToolTip(QCoreApplication::translate("MainWindow", "Exportar", nullptr));
#endif // QT_CONFIG(tooltip)
        actionDeletar_Dados->setText(QCoreApplication::translate("MainWindow", "Deletar Dados", nullptr));
        btnProdutos->setText(QCoreApplication::translate("MainWindow", "Produtos", nullptr));
        btnClientes->setText(QCoreApplication::translate("MainWindow", "Clientes", nullptr));
        btnPedidos->setText(QCoreApplication::translate("MainWindow", "Pedidos", nullptr));
        menuDados->setTitle(QCoreApplication::translate("MainWindow", "Dados", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
