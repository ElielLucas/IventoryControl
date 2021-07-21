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
    QTableWidget *twCliente;
    QLineEdit *lineEditSearchCliente;
    QComboBox *comboBoxOrdem;
    QFrame *fr_DadosCliente;
    QPushButton *pushButtonEdit;
    QPushButton *pushButtonExcluir;
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
    QWidget *quadradim;
    QLabel *labelID;

    void setupUi(QDialog *AdicionarClientes)
    {
        if (AdicionarClientes->objectName().isEmpty())
            AdicionarClientes->setObjectName(QString::fromUtf8("AdicionarClientes"));
        AdicionarClientes->resize(860, 598);
        AdicionarClientes->setMaximumSize(QSize(860, 598));
        AdicionarClientes->setStyleSheet(QString::fromUtf8("QDialog{background:qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0 rgba(2, 0, 36, 255), stop:1 rgba(239, 77, 18, 255));\n"
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
"}\n"
""
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
"	border-top-right-radius:50px;\n"
"	border-bottom-left-radius:50px;\n"
"	font-family: Courier;\n"
"}"));
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
        twCliente = new QTableWidget(tabListarCliente);
        twCliente->setObjectName(QString::fromUtf8("twCliente"));
        twCliente->setGeometry(QRect(10, 50, 501, 471));
        twCliente->setFont(font);
        twCliente->setStyleSheet(QString::fromUtf8(" selection-background-color: rgb(250, 128, 114);"));
        twCliente->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        lineEditSearchCliente = new QLineEdit(tabListarCliente);
        lineEditSearchCliente->setObjectName(QString::fromUtf8("lineEditSearchCliente"));
        lineEditSearchCliente->setGeometry(QRect(10, 10, 501, 25));
        lineEditSearchCliente->setFont(font);
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
        fr_DadosCliente->setGeometry(QRect(520, 20, 261, 321));
        fr_DadosCliente->setStyleSheet(QString::fromUtf8("border:0;"));
        fr_DadosCliente->setFrameShape(QFrame::StyledPanel);
        fr_DadosCliente->setFrameShadow(QFrame::Raised);
        pushButtonEdit = new QPushButton(fr_DadosCliente);
        pushButtonEdit->setObjectName(QString::fromUtf8("pushButtonEdit"));
        pushButtonEdit->setGeometry(QRect(20, 260, 93, 28));
        pushButtonEdit->setFont(font);
        pushButtonExcluir = new QPushButton(fr_DadosCliente);
        pushButtonExcluir->setObjectName(QString::fromUtf8("pushButtonExcluir"));
        pushButtonExcluir->setGeometry(QRect(150, 260, 93, 28));
        pushButtonExcluir->setFont(font);
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

        quadradim = new QWidget(tabListarCliente);
        quadradim->setObjectName(QString::fromUtf8("quadradim"));
        quadradim->setEnabled(true);
        quadradim->setGeometry(QRect(530, 50, 251, 221));
        quadradim->setStyleSheet(QString::fromUtf8("border: 1px solid #F4A460;\n"
""));
        labelID = new QLabel(tabListarCliente);
        labelID->setObjectName(QString::fromUtf8("labelID"));
        labelID->setGeometry(QRect(700, 500, 47, 13));
        tabCliente->addTab(tabListarCliente, QString());
        quadradim->raise();
        twCliente->raise();
        lineEditSearchCliente->raise();
        comboBoxOrdem->raise();
        fr_DadosCliente->raise();
        labelID->raise();

        retranslateUi(AdicionarClientes);

        tabCliente->setCurrentIndex(1);


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
        label_2->setText(QCoreApplication::translate("AdicionarClientes", "               Informa\303\247\303\265es do Cliente", nullptr));
        lineEditNomeIncluir->setPlaceholderText(QCoreApplication::translate("AdicionarClientes", "Nome do Cliente", nullptr));
        lineEditEnderecoIncluir->setPlaceholderText(QCoreApplication::translate("AdicionarClientes", "Endere\303\247o (Opcional)", nullptr));
        lineEditTelefoneIncluir->setPlaceholderText(QCoreApplication::translate("AdicionarClientes", "Telefone (Opcional)", nullptr));
        lineEditEmail->setPlaceholderText(QCoreApplication::translate("AdicionarClientes", "Email (Opcional)", nullptr));
        tabCliente->setTabText(tabCliente->indexOf(tabIncluirCliente), QCoreApplication::translate("AdicionarClientes", "Incluir", nullptr));
        lineEditSearchCliente->setPlaceholderText(QCoreApplication::translate("AdicionarClientes", "Buscar Cliente", nullptr));
        comboBoxOrdem->setItemText(0, QCoreApplication::translate("AdicionarClientes", "Crescente por nome", nullptr));
        comboBoxOrdem->setItemText(1, QCoreApplication::translate("AdicionarClientes", "Decrescente por nome", nullptr));

        comboBoxOrdem->setPlaceholderText(QString());
        pushButtonEdit->setText(QCoreApplication::translate("AdicionarClientes", "Editar", nullptr));
        pushButtonExcluir->setText(QCoreApplication::translate("AdicionarClientes", "Excluir", nullptr));
        label_12->setText(QCoreApplication::translate("AdicionarClientes", "Nome    ", nullptr));
        lineEditNomeEdit->setPlaceholderText(QCoreApplication::translate("AdicionarClientes", "Nome do Cliente", nullptr));
        label_13->setText(QCoreApplication::translate("AdicionarClientes", "Endere\303\247o", nullptr));
        lineEditEnderecoEdit->setPlaceholderText(QCoreApplication::translate("AdicionarClientes", "Endere\303\247o", nullptr));
        label_14->setText(QCoreApplication::translate("AdicionarClientes", "Telefone", nullptr));
        lineEditTelefoneEdit->setPlaceholderText(QCoreApplication::translate("AdicionarClientes", "Telefone", nullptr));
        label->setText(QCoreApplication::translate("AdicionarClientes", "Email   ", nullptr));
        lineEditEmailEdit->setPlaceholderText(QCoreApplication::translate("AdicionarClientes", "Email", nullptr));
        labelID->setText(QCoreApplication::translate("AdicionarClientes", "id", nullptr));
        tabCliente->setTabText(tabCliente->indexOf(tabListarCliente), QCoreApplication::translate("AdicionarClientes", "Lista de Clientes", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdicionarClientes: public Ui_AdicionarClientes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADICIONARCLIENTES_H
