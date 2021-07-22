/********************************************************************************
** Form generated from reading UI file 'AdicionarPedido.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADICIONARPEDIDO_H
#define UI_ADICIONARPEDIDO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
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

class Ui_AdicionarPedido
{
public:
    QTabWidget *tabPedido;
    QWidget *novoPedido;
    QFrame *frNovoPedido;
    QTableWidget *twProdutos;
    QTableWidget *twPedido;
    QLabel *label_7;
    QLabel *lblValorTotal;
    QPushButton *btnFinalizarPedido;
    QLineEdit *lineEditSearchProduto;
    QDateTimeEdit *dateTimeEdit;
    QComboBox *comboBoxSearch;
    QComboBox *comboBox;
    QFrame *frCliente;
    QFrame *frCadastroCliente;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEditNome;
    QLineEdit *lineEditEndereco;
    QLineEdit *lineEditTelefone;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QFrame *frBuscaCliente;
    QLineEdit *txtSearchCliente;
    QFrame *frInformacoesCliente;
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_11;
    QLabel *lblEnderecoNovo;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_12;
    QLabel *lblNomeNovo;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_13;
    QLabel *lblTelefoneNovo;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label;
    QLabel *lbEmailNovo;
    QWidget *quadradim_2;
    QWidget *tab;
    QLineEdit *txtIdClientePesqC;
    QPushButton *btnPesquisarPesqC;
    QLabel *label_40;
    QFrame *frPedidoClientePesqC;
    QLabel *label_32;
    QLabel *label_33;
    QLabel *label_34;
    QLabel *label_35;
    QLabel *lblIdClientePesqC;
    QLabel *lblNomePesqC;
    QLabel *lblEnderecoPesqC;
    QLabel *lblTelefonePesqC;
    QTableWidget *twPedidoPesqC;
    QFrame *frMostrarPesqC;
    QLabel *label_31;
    QPushButton *btnMostrarPesqC;
    QFrame *frMostrarListaPesqC;
    QTableWidget *twMostrarPesqC;
    QLabel *label_39;
    QLabel *lblValorTotalPesqC;
    QLabel *label_38;
    QLabel *lblDataPesqC;
    QLabel *label_37;
    QLabel *lblIdPedidoPesqC;
    QWidget *listarPedido;
    QFrame *frMostrarLista;
    QTableWidget *twProdutosLista;
    QLabel *label_3;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_28;
    QLabel *labelIDPedido;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_23;
    QLabel *labelIDCliente;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_24;
    QLabel *labelNomeCliente;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_25;
    QLabel *labelEnderecoCliente;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_26;
    QLabel *labelTelefoneCliente;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_4;
    QLabel *labelEmailCliente;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_29;
    QLabel *labelDataCompra;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_30;
    QLabel *labelValorTotalCompra;
    QComboBox *comboBoxTipoPesquisa;
    QTableWidget *twListarPedidos;
    QWidget *widgetPesquisaOneLine;
    QLineEdit *lineEditSearchPedido;
    QWidget *widgetPesquisaTwoLines;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEditValorX;
    QLineEdit *lineEditValorY;
    QComboBox *comboBoxTipoOrdenacao;
    QWidget *quadradim;

    void setupUi(QDialog *AdicionarPedido)
    {
        if (AdicionarPedido->objectName().isEmpty())
            AdicionarPedido->setObjectName(QString::fromUtf8("AdicionarPedido"));
        AdicionarPedido->resize(940, 690);
        AdicionarPedido->setStyleSheet(QString::fromUtf8("QDialog{background:qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0 rgba(2, 0, 36, 255), stop:1 rgba(239, 77, 18, 255));\n"
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
"\n"
"QLineEdit{\n"
"  height:22px;\n"
"  border-width:1px;\n"
"  border-radius:4px;\n"
"  border-color:#fff;\n"
"  background:#b5b5b5\n"
"}\n"
"\n"
"\n"
"QTextEdit{\n"
"  background:#b5b5b5;\n"
"  border:6px;\n"
"}\n"
"\n"
"#twProdutos\n"
"{	\n"
"	 selection-background-color: rgb(250, 128, 114);\n"
"	 background:#b5b5b5;\n"
"	 border-bottom-right-radius:20px;\n"
"     border-bottom-left-radius:20px;\n"
"     border: 1px solid #F4A460;\n"
"}\n"
"\n"
"\n"
"#twPedido\n"
"{	\n"
"	 selection-background-color: rgb(250, 128, 114);\n"
"	 background:#b5b5b5;\n"
"	 border-bottom-right-radius:20px;\n"
"     border-bottom-left-radius:20px;\n"
"     border: 1px solid #F4A460;\n"
"}\n"
"\n"
"#twListarPedidos\n"
"{\n"
" 	 selection-background-color: rgb(250, 128, 114);\n"
"	 background:#b5b5b5;\n"
"	 border-bottom-right-radius:20px;\n"
"     border-bottom-left-radius:20px;\n"
"     border: 1px solid #F4A460;\n"
"}\n"
"\n"
"#twProdutosLista\n"
"{\n"
"     selection-background-color: rgb(250, 128, 114);\n"
"	 background:#"
                        "b5b5b5;\n"
"	 border-bottom-right-radius:20px;\n"
"     border-bottom-left-radius:20px;\n"
"     border: 1px solid #F4A460;\n"
"}\n"
"\n"
""));
        tabPedido = new QTabWidget(AdicionarPedido);
        tabPedido->setObjectName(QString::fromUtf8("tabPedido"));
        tabPedido->setGeometry(QRect(40, 30, 861, 631));
        QFont font;
        font.setFamilies({QString::fromUtf8("Courier")});
        tabPedido->setFont(font);
        tabPedido->setStyleSheet(QString::fromUtf8("Widget{background:rgb(255, 140, 64)}\n"
""));
        novoPedido = new QWidget();
        novoPedido->setObjectName(QString::fromUtf8("novoPedido"));
        novoPedido->setStyleSheet(QString::fromUtf8("font-family:courier\n"
""));
        frNovoPedido = new QFrame(novoPedido);
        frNovoPedido->setObjectName(QString::fromUtf8("frNovoPedido"));
        frNovoPedido->setGeometry(QRect(10, 20, 841, 391));
        frNovoPedido->setStyleSheet(QString::fromUtf8("#lineEditSearchProduto{\n"
"  border-width:1px;\n"
"  border:0;\n"
"  border-top-right-radius:6px;\n"
"  border-bottom-right-radius:6px;\n"
"  border-color:#fff;\n"
"  background:#b5b5b5\n"
"}"));
        frNovoPedido->setFrameShape(QFrame::StyledPanel);
        frNovoPedido->setFrameShadow(QFrame::Raised);
        twProdutos = new QTableWidget(frNovoPedido);
        twProdutos->setObjectName(QString::fromUtf8("twProdutos"));
        twProdutos->setGeometry(QRect(20, 50, 401, 301));
        twProdutos->setStyleSheet(QString::fromUtf8(""));
        twProdutos->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        twProdutos->setEditTriggers(QAbstractItemView::NoEditTriggers);
        twPedido = new QTableWidget(frNovoPedido);
        twPedido->setObjectName(QString::fromUtf8("twPedido"));
        twPedido->setGeometry(QRect(440, 50, 401, 301));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(twPedido->sizePolicy().hasHeightForWidth());
        twPedido->setSizePolicy(sizePolicy);
        twPedido->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        twPedido->setEditTriggers(QAbstractItemView::NoEditTriggers);
        twPedido->setTextElideMode(Qt::ElideMiddle);
        label_7 = new QLabel(frNovoPedido);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(630, 20, 201, 21));
        label_7->setFont(font);
        label_7->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background:#ff9318;\n"
"	border-top-right-radius:15px;\n"
"	border-bottom-left-radius:15px;\n"
"	font-family: Courier;\n"
"}"));
        lblValorTotal = new QLabel(frNovoPedido);
        lblValorTotal->setObjectName(QString::fromUtf8("lblValorTotal"));
        lblValorTotal->setGeometry(QRect(760, 20, 61, 20));
        btnFinalizarPedido = new QPushButton(frNovoPedido);
        btnFinalizarPedido->setObjectName(QString::fromUtf8("btnFinalizarPedido"));
        btnFinalizarPedido->setGeometry(QRect(610, 360, 231, 28));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnFinalizarPedido->sizePolicy().hasHeightForWidth());
        btnFinalizarPedido->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("courier")});
        btnFinalizarPedido->setFont(font1);
        btnFinalizarPedido->setStyleSheet(QString::fromUtf8("font-size:14px;"));
        lineEditSearchProduto = new QLineEdit(frNovoPedido);
        lineEditSearchProduto->setObjectName(QString::fromUtf8("lineEditSearchProduto"));
        lineEditSearchProduto->setGeometry(QRect(100, 20, 321, 22));
        lineEditSearchProduto->setFont(font1);
        lineEditSearchProduto->setStyleSheet(QString::fromUtf8("#lineEditSearchProduto{\n"
"  border-width:1px;\n"
"  border:0;\n"
"  border-top-right-radius:6px;\n"
"  border-bottom-right-radius:6px;\n"
"  border-top-left-radius:0px;\n"
"  border-bottom-left-radius:0px;\n"
"  border-color:#fff;\n"
"  background:#b5b5b5\n"
"}"));
        dateTimeEdit = new QDateTimeEdit(frNovoPedido);
        dateTimeEdit->setObjectName(QString::fromUtf8("dateTimeEdit"));
        dateTimeEdit->setGeometry(QRect(440, 360, 161, 28));
        dateTimeEdit->setFont(font1);
        dateTimeEdit->setLayoutDirection(Qt::LeftToRight);
        dateTimeEdit->setStyleSheet(QString::fromUtf8("QDateTimeEdit{\n"
"  border-width:1px;\n"
"  border-radius:6px;\n"
"  border-color:#fff;\n"
"  background:qlineargradient(spread:reflect, x1:0.994318, y1:0.915, x2:0.994318, y2:0.488, stop:0.1875 rgba(128, 128, 128, 255), stop:1 rgba(211, 211, 211, 255))\n"
"}\n"
"\n"
"QDateTimeEdit::place{\n"
"\n"
"  background:#fff;\n"
"}\n"
"\n"
""));
        comboBoxSearch = new QComboBox(frNovoPedido);
        comboBoxSearch->addItem(QString());
        comboBoxSearch->addItem(QString());
        comboBoxSearch->setObjectName(QString::fromUtf8("comboBoxSearch"));
        comboBoxSearch->setGeometry(QRect(20, 20, 81, 22));
        comboBoxSearch->setStyleSheet(QString::fromUtf8("QComboBox\n"
"{\n"
"	background:qlineargradient(spread:reflect, x1:0.994318, y1:0.915, x2:0.994318, y2:0.488, stop:0.1875 rgba(128, 128, 128, 255), stop:1 rgba(211, 211, 211, 255));\n"
"}\n"
""));
        comboBox = new QComboBox(frNovoPedido);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(20, 360, 401, 28));
        comboBox->setFont(font1);
        comboBox->setLayoutDirection(Qt::LeftToRight);
        comboBox->setStyleSheet(QString::fromUtf8("QComboBox{background:qlineargradient(spread:reflect, x1:0.994318, y1:0.915, x2:0.994318, y2:0.488, stop:0.1875 rgba(128, 128, 128, 255), stop:1 rgba(211, 211, 211, 255))}"));
        lineEditSearchProduto->raise();
        twProdutos->raise();
        twPedido->raise();
        label_7->raise();
        lblValorTotal->raise();
        btnFinalizarPedido->raise();
        dateTimeEdit->raise();
        comboBoxSearch->raise();
        comboBox->raise();
        frCliente = new QFrame(novoPedido);
        frCliente->setObjectName(QString::fromUtf8("frCliente"));
        frCliente->setGeometry(QRect(10, 420, 841, 171));
        frCliente->setLayoutDirection(Qt::LeftToRight);
        frCliente->setFrameShape(QFrame::StyledPanel);
        frCliente->setFrameShadow(QFrame::Raised);
        frCadastroCliente = new QFrame(frCliente);
        frCadastroCliente->setObjectName(QString::fromUtf8("frCadastroCliente"));
        frCadastroCliente->setEnabled(true);
        frCadastroCliente->setGeometry(QRect(10, 0, 411, 171));
        frCadastroCliente->setFrameShape(QFrame::StyledPanel);
        frCadastroCliente->setFrameShadow(QFrame::Raised);
        layoutWidget = new QWidget(frCadastroCliente);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 50, 401, 110));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lineEditNome = new QLineEdit(layoutWidget);
        lineEditNome->setObjectName(QString::fromUtf8("lineEditNome"));
        lineEditNome->setFont(font1);

        verticalLayout->addWidget(lineEditNome);

        lineEditEndereco = new QLineEdit(layoutWidget);
        lineEditEndereco->setObjectName(QString::fromUtf8("lineEditEndereco"));
        lineEditEndereco->setFont(font1);

        verticalLayout->addWidget(lineEditEndereco);

        lineEditTelefone = new QLineEdit(layoutWidget);
        lineEditTelefone->setObjectName(QString::fromUtf8("lineEditTelefone"));
        lineEditTelefone->setFont(font1);

        verticalLayout->addWidget(lineEditTelefone);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout->addWidget(lineEdit);


        verticalLayout_2->addLayout(verticalLayout);

        label_2 = new QLabel(frCadastroCliente);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 4, 401, 41));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background:#ff9318;\n"
"	border-top-right-radius:35px;\n"
"	border-bottom-left-radius:35px;\n"
"	font-family: Courier;\n"
"}"));
        frBuscaCliente = new QFrame(frCliente);
        frBuscaCliente->setObjectName(QString::fromUtf8("frBuscaCliente"));
        frBuscaCliente->setGeometry(QRect(10, 0, 411, 171));
        frBuscaCliente->setFrameShape(QFrame::StyledPanel);
        frBuscaCliente->setFrameShadow(QFrame::Raised);
        txtSearchCliente = new QLineEdit(frBuscaCliente);
        txtSearchCliente->setObjectName(QString::fromUtf8("txtSearchCliente"));
        txtSearchCliente->setGeometry(QRect(10, 0, 401, 25));
        txtSearchCliente->setFont(font1);
        frInformacoesCliente = new QFrame(frBuscaCliente);
        frInformacoesCliente->setObjectName(QString::fromUtf8("frInformacoesCliente"));
        frInformacoesCliente->setGeometry(QRect(0, 40, 411, 131));
        frInformacoesCliente->setFont(font1);
        frInformacoesCliente->setFrameShape(QFrame::StyledPanel);
        frInformacoesCliente->setFrameShadow(QFrame::Raised);
        widget = new QWidget(frInformacoesCliente);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 401, 111));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_11 = new QLabel(widget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font1);
        label_11->setStyleSheet(QString::fromUtf8("border:0;\n"
"border-bottom: 1px solid #F4A460;\n"
""));

        horizontalLayout_10->addWidget(label_11);

        lblEnderecoNovo = new QLabel(widget);
        lblEnderecoNovo->setObjectName(QString::fromUtf8("lblEnderecoNovo"));
        lblEnderecoNovo->setStyleSheet(QString::fromUtf8("QLabel{ \n"
"  border-width:1px;\n"
"  border:0;\n"
"  border-radius:6px;\n"
"  border-color:#fff;\n"
"  background:#b5b5b5\n"
"}"));

        horizontalLayout_10->addWidget(lblEnderecoNovo);


        verticalLayout_4->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_12 = new QLabel(widget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font1);
        label_12->setStyleSheet(QString::fromUtf8("border:0;\n"
"border-bottom: 1px solid #F4A460;\n"
""));

        horizontalLayout_11->addWidget(label_12);

        lblNomeNovo = new QLabel(widget);
        lblNomeNovo->setObjectName(QString::fromUtf8("lblNomeNovo"));
        lblNomeNovo->setStyleSheet(QString::fromUtf8("QLabel{ \n"
"  border-width:1px;\n"
"  border:0;\n"
"  border-radius:6px;\n"
"  border-color:#fff;\n"
"  background:#b5b5b5\n"
"}"));

        horizontalLayout_11->addWidget(lblNomeNovo);


        verticalLayout_4->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_13 = new QLabel(widget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font1);
        label_13->setStyleSheet(QString::fromUtf8("border:0;\n"
"border-bottom: 1px solid #F4A460;\n"
""));

        horizontalLayout_12->addWidget(label_13);

        lblTelefoneNovo = new QLabel(widget);
        lblTelefoneNovo->setObjectName(QString::fromUtf8("lblTelefoneNovo"));
        lblTelefoneNovo->setStyleSheet(QString::fromUtf8("QLabel{ \n"
"  border-width:1px;\n"
"  border:0;\n"
"  border-radius:6px;\n"
"  border-color:#fff;\n"
"  background:#b5b5b5\n"
"}"));

        horizontalLayout_12->addWidget(lblTelefoneNovo);


        verticalLayout_4->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("border:0;\n"
"border-bottom: 1px solid #F4A460;\n"
""));

        horizontalLayout_13->addWidget(label);

        lbEmailNovo = new QLabel(widget);
        lbEmailNovo->setObjectName(QString::fromUtf8("lbEmailNovo"));
        lbEmailNovo->setStyleSheet(QString::fromUtf8("QLabel{ \n"
"  border-width:1px;\n"
"  border:0;\n"
"  border-radius:6px;\n"
"  border-color:#fff;\n"
"  background:#b5b5b5\n"
"}"));

        horizontalLayout_13->addWidget(lbEmailNovo);


        verticalLayout_4->addLayout(horizontalLayout_13);

        quadradim_2 = new QWidget(frCliente);
        quadradim_2->setObjectName(QString::fromUtf8("quadradim_2"));
        quadradim_2->setEnabled(true);
        quadradim_2->setGeometry(QRect(20, 40, 401, 129));
        quadradim_2->setStyleSheet(QString::fromUtf8("border: 1px solid #F4A460;\n"
"border-radius: 8px;\n"
""));
        quadradim_2->raise();
        frCadastroCliente->raise();
        frBuscaCliente->raise();
        label->raise();
        lbEmailNovo->raise();
        tabPedido->addTab(novoPedido, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tab->setStyleSheet(QString::fromUtf8("font-family: courier"));
        txtIdClientePesqC = new QLineEdit(tab);
        txtIdClientePesqC->setObjectName(QString::fromUtf8("txtIdClientePesqC"));
        txtIdClientePesqC->setGeometry(QRect(100, 20, 151, 22));
        btnPesquisarPesqC = new QPushButton(tab);
        btnPesquisarPesqC->setObjectName(QString::fromUtf8("btnPesquisarPesqC"));
        btnPesquisarPesqC->setGeometry(QRect(270, 20, 93, 28));
        label_40 = new QLabel(tab);
        label_40->setObjectName(QString::fromUtf8("label_40"));
        label_40->setGeometry(QRect(20, 30, 71, 16));
        frPedidoClientePesqC = new QFrame(tab);
        frPedidoClientePesqC->setObjectName(QString::fromUtf8("frPedidoClientePesqC"));
        frPedidoClientePesqC->setGeometry(QRect(10, 70, 411, 501));
        frPedidoClientePesqC->setFrameShape(QFrame::StyledPanel);
        frPedidoClientePesqC->setFrameShadow(QFrame::Raised);
        label_32 = new QLabel(frPedidoClientePesqC);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setGeometry(QRect(10, 0, 71, 16));
        label_33 = new QLabel(frPedidoClientePesqC);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setGeometry(QRect(10, 20, 71, 16));
        label_34 = new QLabel(frPedidoClientePesqC);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setGeometry(QRect(10, 40, 71, 16));
        label_35 = new QLabel(frPedidoClientePesqC);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setGeometry(QRect(10, 60, 71, 16));
        lblIdClientePesqC = new QLabel(frPedidoClientePesqC);
        lblIdClientePesqC->setObjectName(QString::fromUtf8("lblIdClientePesqC"));
        lblIdClientePesqC->setGeometry(QRect(100, 0, 281, 16));
        lblNomePesqC = new QLabel(frPedidoClientePesqC);
        lblNomePesqC->setObjectName(QString::fromUtf8("lblNomePesqC"));
        lblNomePesqC->setGeometry(QRect(80, 60, 301, 16));
        lblEnderecoPesqC = new QLabel(frPedidoClientePesqC);
        lblEnderecoPesqC->setObjectName(QString::fromUtf8("lblEnderecoPesqC"));
        lblEnderecoPesqC->setGeometry(QRect(90, 40, 301, 16));
        lblTelefonePesqC = new QLabel(frPedidoClientePesqC);
        lblTelefonePesqC->setObjectName(QString::fromUtf8("lblTelefonePesqC"));
        lblTelefonePesqC->setGeometry(QRect(90, 20, 301, 16));
        twPedidoPesqC = new QTableWidget(frPedidoClientePesqC);
        twPedidoPesqC->setObjectName(QString::fromUtf8("twPedidoPesqC"));
        twPedidoPesqC->setGeometry(QRect(10, 100, 401, 361));
        frMostrarPesqC = new QFrame(tab);
        frMostrarPesqC->setObjectName(QString::fromUtf8("frMostrarPesqC"));
        frMostrarPesqC->setGeometry(QRect(430, 150, 431, 421));
        frMostrarPesqC->setStyleSheet(QString::fromUtf8(""));
        frMostrarPesqC->setFrameShape(QFrame::StyledPanel);
        frMostrarPesqC->setFrameShadow(QFrame::Raised);
        label_31 = new QLabel(frMostrarPesqC);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setGeometry(QRect(10, 10, 161, 16));
        btnMostrarPesqC = new QPushButton(frMostrarPesqC);
        btnMostrarPesqC->setObjectName(QString::fromUtf8("btnMostrarPesqC"));
        btnMostrarPesqC->setGeometry(QRect(220, 10, 93, 28));
        frMostrarListaPesqC = new QFrame(frMostrarPesqC);
        frMostrarListaPesqC->setObjectName(QString::fromUtf8("frMostrarListaPesqC"));
        frMostrarListaPesqC->setGeometry(QRect(10, 50, 421, 351));
        frMostrarListaPesqC->setFrameShape(QFrame::StyledPanel);
        frMostrarListaPesqC->setFrameShadow(QFrame::Raised);
        twMostrarPesqC = new QTableWidget(frMostrarListaPesqC);
        twMostrarPesqC->setObjectName(QString::fromUtf8("twMostrarPesqC"));
        twMostrarPesqC->setGeometry(QRect(10, 90, 401, 241));
        label_39 = new QLabel(frMostrarListaPesqC);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        label_39->setGeometry(QRect(10, 70, 71, 16));
        lblValorTotalPesqC = new QLabel(frMostrarListaPesqC);
        lblValorTotalPesqC->setObjectName(QString::fromUtf8("lblValorTotalPesqC"));
        lblValorTotalPesqC->setGeometry(QRect(90, 70, 301, 16));
        label_38 = new QLabel(frMostrarListaPesqC);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        label_38->setGeometry(QRect(10, 40, 71, 16));
        lblDataPesqC = new QLabel(frMostrarListaPesqC);
        lblDataPesqC->setObjectName(QString::fromUtf8("lblDataPesqC"));
        lblDataPesqC->setGeometry(QRect(80, 40, 301, 16));
        label_37 = new QLabel(frMostrarListaPesqC);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setGeometry(QRect(10, 10, 71, 16));
        lblIdPedidoPesqC = new QLabel(frMostrarListaPesqC);
        lblIdPedidoPesqC->setObjectName(QString::fromUtf8("lblIdPedidoPesqC"));
        lblIdPedidoPesqC->setGeometry(QRect(100, 10, 281, 16));
        tabPedido->addTab(tab, QString());
        listarPedido = new QWidget();
        listarPedido->setObjectName(QString::fromUtf8("listarPedido"));
        listarPedido->setStyleSheet(QString::fromUtf8("font-family: courier;\n"
"\n"
""));
        frMostrarLista = new QFrame(listarPedido);
        frMostrarLista->setObjectName(QString::fromUtf8("frMostrarLista"));
        frMostrarLista->setGeometry(QRect(420, 60, 431, 501));
        frMostrarLista->setStyleSheet(QString::fromUtf8(""));
        frMostrarLista->setFrameShape(QFrame::StyledPanel);
        frMostrarLista->setFrameShadow(QFrame::Raised);
        twProdutosLista = new QTableWidget(frMostrarLista);
        twProdutosLista->setObjectName(QString::fromUtf8("twProdutosLista"));
        twProdutosLista->setGeometry(QRect(0, 330, 431, 161));
        twProdutosLista->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        label_3 = new QLabel(frMostrarLista);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 0, 331, 41));
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background:#ff9318;\n"
"	border-top-right-radius:35px;\n"
"	border-bottom-left-radius:35px;\n"
"	font-family: Courier;\n"
"}"));
        widget1 = new QWidget(frMostrarLista);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(0, 60, 431, 251));
        verticalLayout_3 = new QVBoxLayout(widget1);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_28 = new QLabel(widget1);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setStyleSheet(QString::fromUtf8("border:0;\n"
"border-bottom: 1px solid #F4A460;\n"
"\n"
""));

        horizontalLayout_2->addWidget(label_28);

        labelIDPedido = new QLabel(widget1);
        labelIDPedido->setObjectName(QString::fromUtf8("labelIDPedido"));
        labelIDPedido->setStyleSheet(QString::fromUtf8("QLabel{ \n"
"  border-width:1px;\n"
"  border:0;\n"
"  border-radius:6px;\n"
"  border-color:#fff;\n"
"  background:#b5b5b5\n"
"}"));

        horizontalLayout_2->addWidget(labelIDPedido);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_23 = new QLabel(widget1);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setStyleSheet(QString::fromUtf8("border:0;\n"
"border-bottom: 1px solid #F4A460;\n"
""));

        horizontalLayout_3->addWidget(label_23);

        labelIDCliente = new QLabel(widget1);
        labelIDCliente->setObjectName(QString::fromUtf8("labelIDCliente"));
        labelIDCliente->setStyleSheet(QString::fromUtf8("QLabel{ \n"
"  border-width:1px;\n"
"  border:0;\n"
"  border-radius:6px;\n"
"  border-color:#fff;\n"
"  background:#b5b5b5\n"
"}"));

        horizontalLayout_3->addWidget(labelIDCliente);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_24 = new QLabel(widget1);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setStyleSheet(QString::fromUtf8("border:0;\n"
"border-bottom: 1px solid #F4A460;\n"
""));

        horizontalLayout_4->addWidget(label_24);

        labelNomeCliente = new QLabel(widget1);
        labelNomeCliente->setObjectName(QString::fromUtf8("labelNomeCliente"));
        labelNomeCliente->setStyleSheet(QString::fromUtf8("QLabel{ \n"
"  border-width:1px;\n"
"  border:0;\n"
"  border-radius:6px;\n"
"  border-color:#fff;\n"
"  background:#b5b5b5\n"
"}"));

        horizontalLayout_4->addWidget(labelNomeCliente);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_25 = new QLabel(widget1);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setStyleSheet(QString::fromUtf8("border:0;\n"
"border-bottom: 1px solid #F4A460;\n"
""));

        horizontalLayout_5->addWidget(label_25);

        labelEnderecoCliente = new QLabel(widget1);
        labelEnderecoCliente->setObjectName(QString::fromUtf8("labelEnderecoCliente"));
        labelEnderecoCliente->setStyleSheet(QString::fromUtf8("QLabel{ \n"
"  border-width:1px;\n"
"  border:0;\n"
"  border-radius:6px;\n"
"  border-color:#fff;\n"
"  background:#b5b5b5\n"
"}"));

        horizontalLayout_5->addWidget(labelEnderecoCliente);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_26 = new QLabel(widget1);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setStyleSheet(QString::fromUtf8("border:0;\n"
"border-bottom: 1px solid #F4A460;\n"
""));

        horizontalLayout_6->addWidget(label_26);

        labelTelefoneCliente = new QLabel(widget1);
        labelTelefoneCliente->setObjectName(QString::fromUtf8("labelTelefoneCliente"));
        labelTelefoneCliente->setStyleSheet(QString::fromUtf8("QLabel{ \n"
"  border-width:1px;\n"
"  border:0;\n"
"  border-radius:6px;\n"
"  border-color:#fff;\n"
"  background:#b5b5b5\n"
"}"));

        horizontalLayout_6->addWidget(labelTelefoneCliente);


        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_4 = new QLabel(widget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("border:0;\n"
"border-bottom: 1px solid #F4A460;\n"
""));

        horizontalLayout_9->addWidget(label_4);

        labelEmailCliente = new QLabel(widget1);
        labelEmailCliente->setObjectName(QString::fromUtf8("labelEmailCliente"));
        labelEmailCliente->setStyleSheet(QString::fromUtf8("QLabel{ \n"
"  border-width:1px;\n"
"  border:0;\n"
"  border-radius:6px;\n"
"  border-color:#fff;\n"
"  background:#b5b5b5\n"
"}"));

        horizontalLayout_9->addWidget(labelEmailCliente);


        verticalLayout_3->addLayout(horizontalLayout_9);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_29 = new QLabel(widget1);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setStyleSheet(QString::fromUtf8("border:0;\n"
"border-bottom: 1px solid #F4A460;\n"
""));

        horizontalLayout_7->addWidget(label_29);

        labelDataCompra = new QLabel(widget1);
        labelDataCompra->setObjectName(QString::fromUtf8("labelDataCompra"));
        labelDataCompra->setStyleSheet(QString::fromUtf8("QLabel{ \n"
"  border-width:1px;\n"
"  border:0;\n"
"  border-radius:6px;\n"
"  border-color:#fff;\n"
"  background:#b5b5b5\n"
"}"));

        horizontalLayout_7->addWidget(labelDataCompra);


        verticalLayout_3->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_30 = new QLabel(widget1);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setStyleSheet(QString::fromUtf8("border:0;\n"
"border-bottom: 1px solid #F4A460;\n"
""));

        horizontalLayout_8->addWidget(label_30);

        labelValorTotalCompra = new QLabel(widget1);
        labelValorTotalCompra->setObjectName(QString::fromUtf8("labelValorTotalCompra"));
        labelValorTotalCompra->setStyleSheet(QString::fromUtf8("QLabel{ \n"
"  border-width:1px;\n"
"  border:0;\n"
"  border-radius:6px;\n"
"  border-color:#fff;\n"
"  background:#b5b5b5\n"
"}"));

        horizontalLayout_8->addWidget(labelValorTotalCompra);


        verticalLayout_3->addLayout(horizontalLayout_8);

        comboBoxTipoPesquisa = new QComboBox(listarPedido);
        comboBoxTipoPesquisa->addItem(QString());
        comboBoxTipoPesquisa->addItem(QString());
        comboBoxTipoPesquisa->addItem(QString());
        comboBoxTipoPesquisa->addItem(QString());
        comboBoxTipoPesquisa->addItem(QString());
        comboBoxTipoPesquisa->setObjectName(QString::fromUtf8("comboBoxTipoPesquisa"));
        comboBoxTipoPesquisa->setGeometry(QRect(20, 30, 231, 22));
        comboBoxTipoPesquisa->setFont(font1);
        comboBoxTipoPesquisa->setLayoutDirection(Qt::LeftToRight);
        comboBoxTipoPesquisa->setStyleSheet(QString::fromUtf8("QComboBox{background:qlineargradient(spread:reflect, x1:0.994318, y1:0.915, x2:0.994318, y2:0.488, stop:0.1875 rgba(128, 128, 128, 255), stop:1 rgba(211, 211, 211, 255));\n"
"font-family:courier;\n"
"}"));
        twListarPedidos = new QTableWidget(listarPedido);
        twListarPedidos->setObjectName(QString::fromUtf8("twListarPedidos"));
        twListarPedidos->setGeometry(QRect(20, 60, 381, 531));
        twListarPedidos->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        widgetPesquisaOneLine = new QWidget(listarPedido);
        widgetPesquisaOneLine->setObjectName(QString::fromUtf8("widgetPesquisaOneLine"));
        widgetPesquisaOneLine->setEnabled(true);
        widgetPesquisaOneLine->setGeometry(QRect(240, 20, 171, 41));
        lineEditSearchPedido = new QLineEdit(widgetPesquisaOneLine);
        lineEditSearchPedido->setObjectName(QString::fromUtf8("lineEditSearchPedido"));
        lineEditSearchPedido->setEnabled(true);
        lineEditSearchPedido->setGeometry(QRect(10, 10, 151, 22));
        lineEditSearchPedido->setStyleSheet(QString::fromUtf8("#lineEditSearchPedido{\n"
"  border-width:1px;\n"
"  border:0;\n"
"  border-top-right-radius:6px;\n"
"  border-bottom-right-radius:6px;\n"
"  border-top-left-radius:0px;\n"
"  border-bottom-left-radius:0px;\n"
"  border-color:#fff;\n"
"  background:#b5b5b5\n"
"}"));
        widgetPesquisaTwoLines = new QWidget(listarPedido);
        widgetPesquisaTwoLines->setObjectName(QString::fromUtf8("widgetPesquisaTwoLines"));
        widgetPesquisaTwoLines->setGeometry(QRect(240, 20, 171, 41));
        layoutWidget_2 = new QWidget(widgetPesquisaTwoLines);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 10, 151, 24));
        horizontalLayout = new QHBoxLayout(layoutWidget_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lineEditValorX = new QLineEdit(layoutWidget_2);
        lineEditValorX->setObjectName(QString::fromUtf8("lineEditValorX"));
        lineEditValorX->setStyleSheet(QString::fromUtf8("#lineEditValorX{\n"
"  border-width:1px;\n"
"  border:0;\n"
"  border-top-right-radius:6px;\n"
"  border-bottom-right-radius:6px;\n"
"  border-top-left-radius:0px;\n"
"  border-bottom-left-radius:0px;\n"
"  border-color:#fff;\n"
"  background:#b5b5b5\n"
"}"));

        horizontalLayout->addWidget(lineEditValorX);

        lineEditValorY = new QLineEdit(layoutWidget_2);
        lineEditValorY->setObjectName(QString::fromUtf8("lineEditValorY"));

        horizontalLayout->addWidget(lineEditValorY);

        lineEditValorY->raise();
        lineEditValorX->raise();
        comboBoxTipoOrdenacao = new QComboBox(listarPedido);
        comboBoxTipoOrdenacao->addItem(QString());
        comboBoxTipoOrdenacao->addItem(QString());
        comboBoxTipoOrdenacao->addItem(QString());
        comboBoxTipoOrdenacao->addItem(QString());
        comboBoxTipoOrdenacao->setObjectName(QString::fromUtf8("comboBoxTipoOrdenacao"));
        comboBoxTipoOrdenacao->setGeometry(QRect(420, 561, 431, 31));
        comboBoxTipoOrdenacao->setStyleSheet(QString::fromUtf8("QComboBox{background:qlineargradient(spread:reflect, x1:0.994318, y1:0.915, x2:0.994318, y2:0.488, stop:0.1875 rgba(128, 128, 128, 255), stop:1 rgba(211, 211, 211, 255));\n"
"font-family:courier;\n"
"}"));
        quadradim = new QWidget(listarPedido);
        quadradim->setObjectName(QString::fromUtf8("quadradim"));
        quadradim->setEnabled(true);
        quadradim->setGeometry(QRect(420, 110, 431, 271));
        quadradim->setStyleSheet(QString::fromUtf8("border: 1px solid #F4A460;\n"
""));
        tabPedido->addTab(listarPedido, QString());
        quadradim->raise();
        widgetPesquisaTwoLines->raise();
        frMostrarLista->raise();
        twListarPedidos->raise();
        lineEditValorY->raise();
        lineEditValorX->raise();
        widgetPesquisaOneLine->raise();
        comboBoxTipoPesquisa->raise();
        comboBoxTipoOrdenacao->raise();
        label_4->raise();
        labelEmailCliente->raise();

        retranslateUi(AdicionarPedido);

        tabPedido->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(AdicionarPedido);
    } // setupUi

    void retranslateUi(QDialog *AdicionarPedido)
    {
        AdicionarPedido->setWindowTitle(QCoreApplication::translate("AdicionarPedido", "Dialog", nullptr));
        label_7->setText(QCoreApplication::translate("AdicionarPedido", " Valor total R$:", nullptr));
        lblValorTotal->setText(QString());
        btnFinalizarPedido->setText(QCoreApplication::translate("AdicionarPedido", "Finalizar Pedido", nullptr));
        lineEditSearchProduto->setPlaceholderText(QCoreApplication::translate("AdicionarPedido", "Buscar Produto", nullptr));
        comboBoxSearch->setItemText(0, QCoreApplication::translate("AdicionarPedido", "C\303\263digo", nullptr));
        comboBoxSearch->setItemText(1, QCoreApplication::translate("AdicionarPedido", "Nome", nullptr));

        comboBox->setItemText(0, QCoreApplication::translate("AdicionarPedido", "Novo Cliente", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("AdicionarPedido", "Cliente Cadastrado", nullptr));

        lineEditNome->setPlaceholderText(QCoreApplication::translate("AdicionarPedido", "Nome", nullptr));
        lineEditEndereco->setPlaceholderText(QCoreApplication::translate("AdicionarPedido", "Endere\303\247o", nullptr));
        lineEditTelefone->setPlaceholderText(QCoreApplication::translate("AdicionarPedido", "Telefone", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("AdicionarPedido", "Email", nullptr));
#if QT_CONFIG(tooltip)
        label_2->setToolTip(QCoreApplication::translate("AdicionarPedido", "<html><head/><body><p align=\"justify\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_2->setText(QCoreApplication::translate("AdicionarPedido", "               Informa\303\247\303\265es do Cliente", nullptr));
        txtSearchCliente->setPlaceholderText(QCoreApplication::translate("AdicionarPedido", "Digite o nome do cliente", nullptr));
        label_11->setText(QCoreApplication::translate("AdicionarPedido", "Nome", nullptr));
        lblEnderecoNovo->setText(QString());
        label_12->setText(QCoreApplication::translate("AdicionarPedido", "Endere\303\247o", nullptr));
        lblNomeNovo->setText(QString());
        label_13->setText(QCoreApplication::translate("AdicionarPedido", "Telefone", nullptr));
        lblTelefoneNovo->setText(QString());
        label->setText(QCoreApplication::translate("AdicionarPedido", "Email", nullptr));
        lbEmailNovo->setText(QString());
        tabPedido->setTabText(tabPedido->indexOf(novoPedido), QCoreApplication::translate("AdicionarPedido", "Nova Venda", nullptr));
        btnPesquisarPesqC->setText(QCoreApplication::translate("AdicionarPedido", "Pesquisar", nullptr));
        label_40->setText(QCoreApplication::translate("AdicionarPedido", "Id Cliente:", nullptr));
        label_32->setText(QCoreApplication::translate("AdicionarPedido", "Id Cliente:", nullptr));
        label_33->setText(QCoreApplication::translate("AdicionarPedido", "Nome:", nullptr));
        label_34->setText(QCoreApplication::translate("AdicionarPedido", "Endereco:", nullptr));
        label_35->setText(QCoreApplication::translate("AdicionarPedido", "Telefone:", nullptr));
        lblIdClientePesqC->setText(QString());
        lblNomePesqC->setText(QString());
        lblEnderecoPesqC->setText(QString());
        lblTelefonePesqC->setText(QString());
        label_31->setText(QCoreApplication::translate("AdicionarPedido", "Informa\303\247\303\265es do Cliente:", nullptr));
        btnMostrarPesqC->setText(QCoreApplication::translate("AdicionarPedido", "Mostrar", nullptr));
        label_39->setText(QCoreApplication::translate("AdicionarPedido", "Valor total:", nullptr));
        lblValorTotalPesqC->setText(QString());
        label_38->setText(QCoreApplication::translate("AdicionarPedido", "Data:", nullptr));
        lblDataPesqC->setText(QString());
        label_37->setText(QCoreApplication::translate("AdicionarPedido", "Id pedido:", nullptr));
        lblIdPedidoPesqC->setText(QString());
        tabPedido->setTabText(tabPedido->indexOf(tab), QCoreApplication::translate("AdicionarPedido", "Pedido por cliente", nullptr));
#if QT_CONFIG(tooltip)
        label_3->setToolTip(QCoreApplication::translate("AdicionarPedido", "<html><head/><body><p align=\"justify\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_3->setText(QCoreApplication::translate("AdicionarPedido", "    Informa\303\247\303\265es detalhadas do pedido", nullptr));
        label_28->setText(QCoreApplication::translate("AdicionarPedido", "ID Pedido", nullptr));
        labelIDPedido->setText(QString());
        label_23->setText(QCoreApplication::translate("AdicionarPedido", "ID Cliente", nullptr));
        labelIDCliente->setText(QString());
        label_24->setText(QCoreApplication::translate("AdicionarPedido", "Nome", nullptr));
        labelNomeCliente->setText(QString());
        label_25->setText(QCoreApplication::translate("AdicionarPedido", "Endereco", nullptr));
        labelEnderecoCliente->setText(QString());
        label_26->setText(QCoreApplication::translate("AdicionarPedido", "Telefone", nullptr));
        labelTelefoneCliente->setText(QString());
        label_4->setText(QCoreApplication::translate("AdicionarPedido", "Email", nullptr));
        labelEmailCliente->setText(QString());
        label_29->setText(QCoreApplication::translate("AdicionarPedido", "Data", nullptr));
        labelDataCompra->setText(QString());
        label_30->setText(QCoreApplication::translate("AdicionarPedido", "Valor Total", nullptr));
        labelValorTotalCompra->setText(QString());
        comboBoxTipoPesquisa->setItemText(0, QCoreApplication::translate("AdicionarPedido", "Pesquisar por Data", nullptr));
        comboBoxTipoPesquisa->setItemText(1, QCoreApplication::translate("AdicionarPedido", "Valor de compra maior que", nullptr));
        comboBoxTipoPesquisa->setItemText(2, QCoreApplication::translate("AdicionarPedido", "Valor de compra menor que", nullptr));
        comboBoxTipoPesquisa->setItemText(3, QCoreApplication::translate("AdicionarPedido", "Valor de compra entre", nullptr));
        comboBoxTipoPesquisa->setItemText(4, QCoreApplication::translate("AdicionarPedido", "Pesquisar por Produto", nullptr));

#if QT_CONFIG(tooltip)
        comboBoxTipoPesquisa->setToolTip(QCoreApplication::translate("AdicionarPedido", "<html><head/><body><p align=\"justify\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        lineEditSearchPedido->setPlaceholderText(QCoreApplication::translate("AdicionarPedido", "Digite a Data", nullptr));
        lineEditValorX->setPlaceholderText(QCoreApplication::translate("AdicionarPedido", "Valor X", nullptr));
        lineEditValorY->setPlaceholderText(QCoreApplication::translate("AdicionarPedido", "Valor Y", nullptr));
        comboBoxTipoOrdenacao->setItemText(0, QCoreApplication::translate("AdicionarPedido", "Ordernar por Data (Crescente)", nullptr));
        comboBoxTipoOrdenacao->setItemText(1, QCoreApplication::translate("AdicionarPedido", "Ordernar por Data (Decrescente)", nullptr));
        comboBoxTipoOrdenacao->setItemText(2, QCoreApplication::translate("AdicionarPedido", "Ordenar por valor de compra (Crescente)", nullptr));
        comboBoxTipoOrdenacao->setItemText(3, QCoreApplication::translate("AdicionarPedido", "Ordenar por valor de compra (Decrescente)", nullptr));

        tabPedido->setTabText(tabPedido->indexOf(listarPedido), QCoreApplication::translate("AdicionarPedido", "Listar Pedidos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdicionarPedido: public Ui_AdicionarPedido {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADICIONARPEDIDO_H
