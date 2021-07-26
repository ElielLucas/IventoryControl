/********************************************************************************
** Form generated from reading UI file 'AdicionarClientes.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADICIONARCLIENTES_H
#define UI_ADICIONARCLIENTES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdicionarClientes
{
public:
    QTabWidget *tabCliente;
    QWidget *tabIncluirCliente;
    QPushButton *pushButtonIncluir;
    QLabel *label_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEditNomeIncluir;
    QLineEdit *lineEditEnderecoIncluir;
    QLineEdit *lineEditTelefoneIncluir;
    QLineEdit *lineEditEmail;
    QWidget *tabListarCliente;
    QComboBox *comboBoxOrdem;
    QFrame *fr_DadosCliente;
    QPushButton *pushButtonEdit;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_12;
    QLineEdit *lineEditNomeEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_13;
    QLineEdit *lineEditEnderecoEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_14;
    QLineEdit *lineEditTelefoneEdit;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEditEmailEdit;
    QPushButton *pushButtonComprasCliente;
    QWidget *quadradim;
    QLabel *labelID;
    QWidget *esconderListaClientes;
    QLineEdit *lineEditSearchCliente;
    QTableWidget *twCliente;
    QWidget *esconderPedidosCliente;
    QTableWidget *twPedidosCliente;
    QPushButton *pushButtonVoltar;
    QTableWidget *twProdutosCliente;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QDialog *AdicionarClientes)
    {
        if (AdicionarClientes->objectName().isEmpty())
            AdicionarClientes->setObjectName(QString::fromUtf8("AdicionarClientes"));
        AdicionarClientes->resize(860, 598);
        AdicionarClientes->setMaximumSize(QSize(860, 598));
        AdicionarClientes->setStyleSheet(QString::fromUtf8("\n"
"QDialog{background:qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0 rgba(2, 0, 36, 255), stop:1 rgba(239, 77, 18, 255));\n"
"font-family: Courier;\n"
"}\n"
"\n"
"QPushButton{\n"
"  font-size:15px;\n"
"  border-width:1px;\n"
"  border-color:#1f2f47;\n"
"  border-radius:6px;\n"
"  height:25px\n"
"}\n"
"\n"
"QPushButton{background:qlineargradient(spread:reflect, x1:0.994318, y1:0.915, x2:0.994318, y2:0.488, stop:0.1875 rgba(128, 128, 128, 255), stop:1 rgba(211, 211, 211, 255))}\n"
"\n"
"QPushButton::pressed\n"
"{\n"
"	background:qlineargradient(spread:reflect, x1:0.994318, y1:0.915, x2:0.994318, y2:0.488, stop:0.1875 rgba(227, 156, 41, 255), stop:1 rgba(211, 211, 211, 255));\n"
"margin-top:1px;\n"
"margin-bottom:-1px;\n"
"\n"
"}\n"
"QPushButton::hover\n"
"{\n"
"	background:qlineargradient(spread:reflect, x1:0.994318, y1:0.915, x2:0.994318, y2:0.488, stop:0.1875 rgba(227, 156, 41, 255), stop:1 rgba(211, 211, 211, 255));\n"
"}\n"
"\n"
"QComboBox{\n"
"  border-color:#1f2f47;\n"
"  border-radius:4px\n"
""
                        "}\n"
"\n"
"QLineEdit{\n"
"  height:22px;\n"
"  border-width:1px;\n"
"  border-radius:4px;\n"
"  border-color:#fff;\n"
"  background:#b5b5b5\n"
"}\n"
"\n"
"QTextEdit{\n"
"  background:#b5b5b5;\n"
"  border:6px;\n"
"}\n"
"\n"
"#twCliente\n"
"{	\n"
"	 selection-background-color: rgb(250, 128, 114);\n"
"	 background:#b5b5b5;\n"
"	 border-bottom-right-radius:20px;\n"
"     border-bottom-left-radius:20px;\n"
"     border: 1px solid #F4A460;\n"
"}\n"
"\n"
"\n"
"#twPedidosCliente\n"
"{	\n"
"	 selection-background-color: rgb(250, 128, 114);\n"
"	 background:#b5b5b5;\n"
"	 border-bottom-right-radius:14px;\n"
"     border-bottom-left-radius:14px;\n"
"     border: 1px solid #F4A460;\n"
"}\n"
"\n"
"#twProdutosCliente\n"
"{	\n"
"	 selection-background-color: rgb(250, 128, 114);\n"
"	 background:#b5b5b5;\n"
"	 border-bottom-right-radius:14px;\n"
"     border-bottom-left-radius:14px;\n"
"     border: 1px solid #F4A460;\n"
"}\n"
"\n"
""));
        tabCliente = new QTabWidget(AdicionarClientes);
        tabCliente->setObjectName(QString::fromUtf8("tabCliente"));
        tabCliente->setGeometry(QRect(30, 20, 801, 551));
        QFont font;
        font.setFamilies({QString::fromUtf8("Courier")});
        tabCliente->setFont(font);
        tabCliente->setStyleSheet(QString::fromUtf8(""));
        tabIncluirCliente = new QWidget();
        tabIncluirCliente->setObjectName(QString::fromUtf8("tabIncluirCliente"));
        tabIncluirCliente->setFont(font);
        pushButtonIncluir = new QPushButton(tabIncluirCliente);
        pushButtonIncluir->setObjectName(QString::fromUtf8("pushButtonIncluir"));
        pushButtonIncluir->setGeometry(QRect(150, 370, 501, 28));
        pushButtonIncluir->setFont(font);
        pushButtonIncluir->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"width: 120px;\n"
"\n"
"}"));
        label_2 = new QLabel(tabIncluirCliente);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(180, 70, 431, 51));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background:#ff9318;\n"
"	border-top-right-radius:40px;\n"
"	border-bottom-left-radius:40px;\n"
"	font-family: Courier;\n"
"}"));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/imgs/images/infCliente.png")));
        label_2->setScaledContents(true);
        layoutWidget = new QWidget(tabIncluirCliente);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(150, 140, 501, 211));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lineEditNomeIncluir = new QLineEdit(layoutWidget);
        lineEditNomeIncluir->setObjectName(QString::fromUtf8("lineEditNomeIncluir"));
        lineEditNomeIncluir->setFont(font);

        verticalLayout->addWidget(lineEditNomeIncluir);

        lineEditEnderecoIncluir = new QLineEdit(layoutWidget);
        lineEditEnderecoIncluir->setObjectName(QString::fromUtf8("lineEditEnderecoIncluir"));
        lineEditEnderecoIncluir->setFont(font);

        verticalLayout->addWidget(lineEditEnderecoIncluir);

        lineEditTelefoneIncluir = new QLineEdit(layoutWidget);
        lineEditTelefoneIncluir->setObjectName(QString::fromUtf8("lineEditTelefoneIncluir"));
        lineEditTelefoneIncluir->setFont(font);

        verticalLayout->addWidget(lineEditTelefoneIncluir);

        lineEditEmail = new QLineEdit(layoutWidget);
        lineEditEmail->setObjectName(QString::fromUtf8("lineEditEmail"));
        lineEditEmail->setFont(font);

        verticalLayout->addWidget(lineEditEmail);

        tabCliente->addTab(tabIncluirCliente, QString());
        tabListarCliente = new QWidget();
        tabListarCliente->setObjectName(QString::fromUtf8("tabListarCliente"));
        comboBoxOrdem = new QComboBox(tabListarCliente);
        comboBoxOrdem->addItem(QString());
        comboBoxOrdem->addItem(QString());
        comboBoxOrdem->setObjectName(QString::fromUtf8("comboBoxOrdem"));
        comboBoxOrdem->setGeometry(QRect(520, 490, 164, 30));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Sitka Text")});
        font1.setStyleStrategy(QFont::PreferDefault);
        comboBoxOrdem->setFont(font1);
        comboBoxOrdem->setLayoutDirection(Qt::LeftToRight);
        comboBoxOrdem->setStyleSheet(QString::fromUtf8("QComboBox\n"
"{\n"
"	background:qlineargradient(spread:reflect, x1:0.994318, y1:0.915, x2:0.994318, y2:0.488, stop:0.1875 rgba(128, 128, 128, 255), stop:1 rgba(211, 211, 211, 255));\n"
"\n"
"width:146;\n"
"height:30\n"
"\n"
"}\n"
"\n"
""));
        comboBoxOrdem->setEditable(false);
        comboBoxOrdem->setInsertPolicy(QComboBox::NoInsert);
        comboBoxOrdem->setSizeAdjustPolicy(QComboBox::AdjustToContents);
        comboBoxOrdem->setDuplicatesEnabled(false);
        comboBoxOrdem->setFrame(true);
        fr_DadosCliente = new QFrame(tabListarCliente);
        fr_DadosCliente->setObjectName(QString::fromUtf8("fr_DadosCliente"));
        fr_DadosCliente->setGeometry(QRect(520, 20, 261, 341));
        fr_DadosCliente->setStyleSheet(QString::fromUtf8("border:0;"));
        fr_DadosCliente->setFrameShape(QFrame::StyledPanel);
        fr_DadosCliente->setFrameShadow(QFrame::Raised);
        pushButtonEdit = new QPushButton(fr_DadosCliente);
        pushButtonEdit->setObjectName(QString::fromUtf8("pushButtonEdit"));
        pushButtonEdit->setGeometry(QRect(12, 260, 251, 28));
        pushButtonEdit->setFont(font);
        layoutWidget1 = new QWidget(fr_DadosCliente);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 30, 241, 224));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_12 = new QLabel(layoutWidget1);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font);
        label_12->setStyleSheet(QString::fromUtf8("border:0;\n"
"border-bottom: 1px solid #F4A460;\n"
"margin: 14px 0;\n"
"\n"
"\n"
""));

        horizontalLayout_2->addWidget(label_12);

        lineEditNomeEdit = new QLineEdit(layoutWidget1);
        lineEditNomeEdit->setObjectName(QString::fromUtf8("lineEditNomeEdit"));
        lineEditNomeEdit->setFont(font);
        lineEditNomeEdit->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(lineEditNomeEdit);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_13 = new QLabel(layoutWidget1);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font);
        label_13->setStyleSheet(QString::fromUtf8("border:0;\n"
"border-bottom: 1px solid #F4A460;\n"
"margin: 14px 0;\n"
""));

        horizontalLayout_3->addWidget(label_13);

        lineEditEnderecoEdit = new QLineEdit(layoutWidget1);
        lineEditEnderecoEdit->setObjectName(QString::fromUtf8("lineEditEnderecoEdit"));
        lineEditEnderecoEdit->setFont(font);

        horizontalLayout_3->addWidget(lineEditEnderecoEdit);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_14 = new QLabel(layoutWidget1);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFont(font);
        label_14->setStyleSheet(QString::fromUtf8("border:0;\n"
"border-bottom: 1px solid #F4A460;\n"
"margin: 14px 0;\n"
""));

        horizontalLayout_4->addWidget(label_14);

        lineEditTelefoneEdit = new QLineEdit(layoutWidget1);
        lineEditTelefoneEdit->setObjectName(QString::fromUtf8("lineEditTelefoneEdit"));
        lineEditTelefoneEdit->setFont(font);

        horizontalLayout_4->addWidget(lineEditTelefoneEdit);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("border:0;\n"
"border-bottom: 1px solid #F4A460;\n"
"margin: 14px 0;\n"
""));

        horizontalLayout->addWidget(label);

        lineEditEmailEdit = new QLineEdit(layoutWidget1);
        lineEditEmailEdit->setObjectName(QString::fromUtf8("lineEditEmailEdit"));
        lineEditEmailEdit->setFont(font);

        horizontalLayout->addWidget(lineEditEmailEdit);


        verticalLayout_2->addLayout(horizontalLayout);

        pushButtonComprasCliente = new QPushButton(fr_DadosCliente);
        pushButtonComprasCliente->setObjectName(QString::fromUtf8("pushButtonComprasCliente"));
        pushButtonComprasCliente->setGeometry(QRect(10, 300, 251, 31));
        quadradim = new QWidget(tabListarCliente);
        quadradim->setObjectName(QString::fromUtf8("quadradim"));
        quadradim->setEnabled(true);
        quadradim->setGeometry(QRect(530, 50, 251, 221));
        quadradim->setStyleSheet(QString::fromUtf8("border: 1px solid #F4A460;\n"
"border-radius:8px;\n"
""));
        labelID = new QLabel(tabListarCliente);
        labelID->setObjectName(QString::fromUtf8("labelID"));
        labelID->setGeometry(QRect(700, 500, 47, 13));
        esconderListaClientes = new QWidget(tabListarCliente);
        esconderListaClientes->setObjectName(QString::fromUtf8("esconderListaClientes"));
        esconderListaClientes->setGeometry(QRect(9, 9, 501, 511));
        lineEditSearchCliente = new QLineEdit(esconderListaClientes);
        lineEditSearchCliente->setObjectName(QString::fromUtf8("lineEditSearchCliente"));
        lineEditSearchCliente->setGeometry(QRect(0, 0, 501, 25));
        lineEditSearchCliente->setFont(font);
        twCliente = new QTableWidget(esconderListaClientes);
        twCliente->setObjectName(QString::fromUtf8("twCliente"));
        twCliente->setGeometry(QRect(0, 40, 501, 471));
        twCliente->setFont(font);
        twCliente->setStyleSheet(QString::fromUtf8(" selection-background-color: rgb(250, 128, 114);"));
        twCliente->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        twCliente->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        twCliente->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContentsOnFirstShow);
        esconderPedidosCliente = new QWidget(tabListarCliente);
        esconderPedidosCliente->setObjectName(QString::fromUtf8("esconderPedidosCliente"));
        esconderPedidosCliente->setGeometry(QRect(9, 10, 501, 511));
        twPedidosCliente = new QTableWidget(esconderPedidosCliente);
        twPedidosCliente->setObjectName(QString::fromUtf8("twPedidosCliente"));
        twPedidosCliente->setGeometry(QRect(0, 40, 501, 251));
        twPedidosCliente->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        twPedidosCliente->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        pushButtonVoltar = new QPushButton(esconderPedidosCliente);
        pushButtonVoltar->setObjectName(QString::fromUtf8("pushButtonVoltar"));
        pushButtonVoltar->setGeometry(QRect(0, 0, 75, 31));
        pushButtonVoltar->setStyleSheet(QString::fromUtf8(""));
        twProdutosCliente = new QTableWidget(esconderPedidosCliente);
        twProdutosCliente->setObjectName(QString::fromUtf8("twProdutosCliente"));
        twProdutosCliente->setGeometry(QRect(0, 340, 501, 171));
        twProdutosCliente->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        twProdutosCliente->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        label_3 = new QLabel(esconderPedidosCliente);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(90, 0, 341, 31));
        label_3->setStyleSheet(QString::fromUtf8(""));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/imgs/images/imgPedidosCliente.png")));
        label_3->setScaledContents(true);
        label_4 = new QLabel(esconderPedidosCliente);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(80, 300, 341, 31));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/imgs/images/imgProdutosCompraCliente.png")));
        label_4->setScaledContents(true);
        tabCliente->addTab(tabListarCliente, QString());
        quadradim->raise();
        comboBoxOrdem->raise();
        fr_DadosCliente->raise();
        labelID->raise();
        esconderListaClientes->raise();
        esconderPedidosCliente->raise();

        retranslateUi(AdicionarClientes);

        tabCliente->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AdicionarClientes);
    } // setupUi

    void retranslateUi(QDialog *AdicionarClientes)
    {
        AdicionarClientes->setWindowTitle(QCoreApplication::translate("AdicionarClientes", "Cadastro de Clientes", nullptr));
#if QT_CONFIG(tooltip)
        tabCliente->setToolTip(QCoreApplication::translate("AdicionarClientes", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButtonIncluir->setText(QCoreApplication::translate("AdicionarClientes", "Incluir", nullptr));
#if QT_CONFIG(tooltip)
        label_2->setToolTip(QCoreApplication::translate("AdicionarClientes", "<html><head/><body><p align=\"justify\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_2->setText(QString());
        lineEditNomeIncluir->setPlaceholderText(QCoreApplication::translate("AdicionarClientes", "Nome do Cliente", nullptr));
        lineEditEnderecoIncluir->setPlaceholderText(QCoreApplication::translate("AdicionarClientes", "Endere\303\247o (Opcional)", nullptr));
        lineEditTelefoneIncluir->setPlaceholderText(QCoreApplication::translate("AdicionarClientes", "Telefone (Opcional)", nullptr));
        lineEditEmail->setPlaceholderText(QCoreApplication::translate("AdicionarClientes", "Email (Opcional)", nullptr));
        tabCliente->setTabText(tabCliente->indexOf(tabIncluirCliente), QCoreApplication::translate("AdicionarClientes", "Incluir", nullptr));
        comboBoxOrdem->setItemText(0, QCoreApplication::translate("AdicionarClientes", "Crescente por nome", nullptr));
        comboBoxOrdem->setItemText(1, QCoreApplication::translate("AdicionarClientes", "Decrescente por nome", nullptr));

        comboBoxOrdem->setPlaceholderText(QString());
        pushButtonEdit->setText(QCoreApplication::translate("AdicionarClientes", "Editar", nullptr));
        label_12->setText(QCoreApplication::translate("AdicionarClientes", "Nome    ", nullptr));
        lineEditNomeEdit->setPlaceholderText(QCoreApplication::translate("AdicionarClientes", "Nome do Cliente", nullptr));
        label_13->setText(QCoreApplication::translate("AdicionarClientes", "Endere\303\247o", nullptr));
        lineEditEnderecoEdit->setPlaceholderText(QCoreApplication::translate("AdicionarClientes", "Endere\303\247o", nullptr));
        label_14->setText(QCoreApplication::translate("AdicionarClientes", "Telefone", nullptr));
        lineEditTelefoneEdit->setPlaceholderText(QCoreApplication::translate("AdicionarClientes", "Telefone", nullptr));
        label->setText(QCoreApplication::translate("AdicionarClientes", "Email   ", nullptr));
        lineEditEmailEdit->setPlaceholderText(QCoreApplication::translate("AdicionarClientes", "Email", nullptr));
        pushButtonComprasCliente->setText(QCoreApplication::translate("AdicionarClientes", "Compras do Cliente", nullptr));
        labelID->setText(QCoreApplication::translate("AdicionarClientes", "id", nullptr));
        lineEditSearchCliente->setPlaceholderText(QCoreApplication::translate("AdicionarClientes", "Buscar Cliente", nullptr));
        pushButtonVoltar->setText(QCoreApplication::translate("AdicionarClientes", "Voltar", nullptr));
#if QT_CONFIG(tooltip)
        label_3->setToolTip(QCoreApplication::translate("AdicionarClientes", "<html><head/><body><p align=\"justify\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_3->setText(QString());
        label_4->setText(QString());
        tabCliente->setTabText(tabCliente->indexOf(tabListarCliente), QCoreApplication::translate("AdicionarClientes", "Lista de Clientes", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdicionarClientes: public Ui_AdicionarClientes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADICIONARCLIENTES_H
