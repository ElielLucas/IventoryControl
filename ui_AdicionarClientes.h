/********************************************************************************
** Form generated from reading UI file 'AdicionarClientes.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADICIONARCLIENTES_H
#define UI_ADICIONARCLIENTES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdicionarClientes
{
public:
    QTabWidget *tabCliente;
    QWidget *tabIncluirCliente;
    QFrame *frame;
    QLabel *label;
    QLineEdit *txtNomeIncluir;
    QLabel *label_2;
    QLineEdit *txtEnderecoIncluir;
    QLabel *label_3;
    QLineEdit *txtTelefoneIncluir;
    QLineEdit *txtCPFIncluir;
    QLabel *label_4;
    QPushButton *btnIncluir;
    QWidget *tabPesquisarCliente;
    QFrame *frame_2;
    QLabel *label_7;
    QLineEdit *txtIdClienteEdit;
    QPushButton *btnPesquisar;
    QFrame *frPesquisarCliente;
    QPushButton *btnEdit;
    QLabel *label_10;
    QLineEdit *txtNomeEdit;
    QLabel *label_5;
    QLineEdit *txtEnderecoEdit;
    QLabel *label_6;
    QLineEdit *txtTelefoneEdit;
    QLabel *label_9;
    QLineEdit *txtCPFEdit;
    QWidget *tabExcluirCliente;
    QFrame *frame_6;
    QLineEdit *txtIdClienteExcluir;
    QPushButton *btnExcluir;
    QLabel *label_17;
    QLabel *lblDadoExcluido;
    QLabel *label_11;
    QWidget *tabListarCliente;
    QTableWidget *twCliente;
    QPushButton *btnMostrarLista;

    void setupUi(QDialog *AdicionarClientes)
    {
        if (AdicionarClientes->objectName().isEmpty())
            AdicionarClientes->setObjectName(QString::fromUtf8("AdicionarClientes"));
        AdicionarClientes->resize(615, 578);
        tabCliente = new QTabWidget(AdicionarClientes);
        tabCliente->setObjectName(QString::fromUtf8("tabCliente"));
        tabCliente->setGeometry(QRect(20, 20, 571, 531));
        tabIncluirCliente = new QWidget();
        tabIncluirCliente->setObjectName(QString::fromUtf8("tabIncluirCliente"));
        frame = new QFrame(tabIncluirCliente);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(20, 20, 371, 341));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 30, 55, 16));
        txtNomeIncluir = new QLineEdit(frame);
        txtNomeIncluir->setObjectName(QString::fromUtf8("txtNomeIncluir"));
        txtNomeIncluir->setGeometry(QRect(120, 20, 231, 22));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 90, 71, 16));
        txtEnderecoIncluir = new QLineEdit(frame);
        txtEnderecoIncluir->setObjectName(QString::fromUtf8("txtEnderecoIncluir"));
        txtEnderecoIncluir->setGeometry(QRect(120, 80, 231, 22));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 150, 81, 16));
        txtTelefoneIncluir = new QLineEdit(frame);
        txtTelefoneIncluir->setObjectName(QString::fromUtf8("txtTelefoneIncluir"));
        txtTelefoneIncluir->setGeometry(QRect(120, 150, 113, 22));
        txtCPFIncluir = new QLineEdit(frame);
        txtCPFIncluir->setObjectName(QString::fromUtf8("txtCPFIncluir"));
        txtCPFIncluir->setGeometry(QRect(120, 210, 113, 22));
        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(0, 210, 111, 16));
        btnIncluir = new QPushButton(frame);
        btnIncluir->setObjectName(QString::fromUtf8("btnIncluir"));
        btnIncluir->setGeometry(QRect(250, 290, 93, 28));
        tabCliente->addTab(tabIncluirCliente, QString());
        tabPesquisarCliente = new QWidget();
        tabPesquisarCliente->setObjectName(QString::fromUtf8("tabPesquisarCliente"));
        frame_2 = new QFrame(tabPesquisarCliente);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(30, 50, 361, 311));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_7 = new QLabel(frame_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 30, 81, 16));
        txtIdClienteEdit = new QLineEdit(frame_2);
        txtIdClienteEdit->setObjectName(QString::fromUtf8("txtIdClienteEdit"));
        txtIdClienteEdit->setGeometry(QRect(100, 30, 113, 22));
        btnPesquisar = new QPushButton(frame_2);
        btnPesquisar->setObjectName(QString::fromUtf8("btnPesquisar"));
        btnPesquisar->setGeometry(QRect(240, 30, 93, 28));
        frPesquisarCliente = new QFrame(frame_2);
        frPesquisarCliente->setObjectName(QString::fromUtf8("frPesquisarCliente"));
        frPesquisarCliente->setGeometry(QRect(10, 70, 321, 231));
        frPesquisarCliente->setFrameShape(QFrame::StyledPanel);
        frPesquisarCliente->setFrameShadow(QFrame::Raised);
        btnEdit = new QPushButton(frPesquisarCliente);
        btnEdit->setObjectName(QString::fromUtf8("btnEdit"));
        btnEdit->setGeometry(QRect(210, 190, 93, 28));
        label_10 = new QLabel(frPesquisarCliente);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(0, 20, 55, 16));
        txtNomeEdit = new QLineEdit(frPesquisarCliente);
        txtNomeEdit->setObjectName(QString::fromUtf8("txtNomeEdit"));
        txtNomeEdit->setGeometry(QRect(70, 10, 231, 22));
        label_5 = new QLabel(frPesquisarCliente);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(0, 60, 71, 16));
        txtEnderecoEdit = new QLineEdit(frPesquisarCliente);
        txtEnderecoEdit->setObjectName(QString::fromUtf8("txtEnderecoEdit"));
        txtEnderecoEdit->setGeometry(QRect(70, 60, 231, 22));
        label_6 = new QLabel(frPesquisarCliente);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(0, 100, 81, 16));
        txtTelefoneEdit = new QLineEdit(frPesquisarCliente);
        txtTelefoneEdit->setObjectName(QString::fromUtf8("txtTelefoneEdit"));
        txtTelefoneEdit->setGeometry(QRect(70, 100, 113, 22));
        label_9 = new QLabel(frPesquisarCliente);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(0, 140, 61, 16));
        txtCPFEdit = new QLineEdit(frPesquisarCliente);
        txtCPFEdit->setObjectName(QString::fromUtf8("txtCPFEdit"));
        txtCPFEdit->setGeometry(QRect(70, 140, 113, 22));
        tabCliente->addTab(tabPesquisarCliente, QString());
        tabExcluirCliente = new QWidget();
        tabExcluirCliente->setObjectName(QString::fromUtf8("tabExcluirCliente"));
        frame_6 = new QFrame(tabExcluirCliente);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setGeometry(QRect(20, 20, 381, 331));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        txtIdClienteExcluir = new QLineEdit(frame_6);
        txtIdClienteExcluir->setObjectName(QString::fromUtf8("txtIdClienteExcluir"));
        txtIdClienteExcluir->setGeometry(QRect(120, 20, 113, 22));
        btnExcluir = new QPushButton(frame_6);
        btnExcluir->setObjectName(QString::fromUtf8("btnExcluir"));
        btnExcluir->setGeometry(QRect(250, 20, 93, 28));
        label_17 = new QLabel(frame_6);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(10, 100, 91, 16));
        lblDadoExcluido = new QLabel(frame_6);
        lblDadoExcluido->setObjectName(QString::fromUtf8("lblDadoExcluido"));
        lblDadoExcluido->setGeometry(QRect(30, 130, 331, 151));
        label_11 = new QLabel(frame_6);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(10, 20, 81, 16));
        tabCliente->addTab(tabExcluirCliente, QString());
        tabListarCliente = new QWidget();
        tabListarCliente->setObjectName(QString::fromUtf8("tabListarCliente"));
        twCliente = new QTableWidget(tabListarCliente);
        twCliente->setObjectName(QString::fromUtf8("twCliente"));
        twCliente->setGeometry(QRect(30, 70, 501, 381));
        btnMostrarLista = new QPushButton(tabListarCliente);
        btnMostrarLista->setObjectName(QString::fromUtf8("btnMostrarLista"));
        btnMostrarLista->setGeometry(QRect(410, 20, 93, 28));
        tabCliente->addTab(tabListarCliente, QString());

        retranslateUi(AdicionarClientes);

        tabCliente->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AdicionarClientes);
    } // setupUi

    void retranslateUi(QDialog *AdicionarClientes)
    {
        AdicionarClientes->setWindowTitle(QCoreApplication::translate("AdicionarClientes", "Dialog", nullptr));
#if QT_CONFIG(tooltip)
        tabCliente->setToolTip(QCoreApplication::translate("AdicionarClientes", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("AdicionarClientes", "Nome:", nullptr));
        label_2->setText(QCoreApplication::translate("AdicionarClientes", "Endere\303\247o:", nullptr));
        label_3->setText(QCoreApplication::translate("AdicionarClientes", "Telefone:", nullptr));
        label_4->setText(QCoreApplication::translate("AdicionarClientes", "CPF:", nullptr));
        btnIncluir->setText(QCoreApplication::translate("AdicionarClientes", "Incluir", nullptr));
        tabCliente->setTabText(tabCliente->indexOf(tabIncluirCliente), QCoreApplication::translate("AdicionarClientes", "Incluir", nullptr));
        label_7->setText(QCoreApplication::translate("AdicionarClientes", "Id do Cliente:", nullptr));
        btnPesquisar->setText(QCoreApplication::translate("AdicionarClientes", "Pesquisar", nullptr));
        btnEdit->setText(QCoreApplication::translate("AdicionarClientes", "Editar", nullptr));
        label_10->setText(QCoreApplication::translate("AdicionarClientes", "Nome:", nullptr));
        label_5->setText(QCoreApplication::translate("AdicionarClientes", "Endere\303\247o:", nullptr));
        label_6->setText(QCoreApplication::translate("AdicionarClientes", "Telefone:", nullptr));
        label_9->setText(QCoreApplication::translate("AdicionarClientes", "CPF:", nullptr));
        tabCliente->setTabText(tabCliente->indexOf(tabPesquisarCliente), QCoreApplication::translate("AdicionarClientes", "Pesquisar e/ou Editar", nullptr));
        btnExcluir->setText(QCoreApplication::translate("AdicionarClientes", "Excluir", nullptr));
        label_17->setText(QCoreApplication::translate("AdicionarClientes", "Dado Excluido:", nullptr));
        lblDadoExcluido->setText(QString());
        label_11->setText(QCoreApplication::translate("AdicionarClientes", "Id do Cliente:", nullptr));
        tabCliente->setTabText(tabCliente->indexOf(tabExcluirCliente), QCoreApplication::translate("AdicionarClientes", "Excluir", nullptr));
        btnMostrarLista->setText(QCoreApplication::translate("AdicionarClientes", "Mostrar Lista", nullptr));
        tabCliente->setTabText(tabCliente->indexOf(tabListarCliente), QCoreApplication::translate("AdicionarClientes", "Lista de clientes", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdicionarClientes: public Ui_AdicionarClientes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADICIONARCLIENTES_H
