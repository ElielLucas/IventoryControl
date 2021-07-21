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
    QPushButton *btnAdicionar;
    QPushButton *btnExcluir;
    QTableWidget *twPedido;
    QLabel *label_7;
    QLabel *lblValorTotal;
    QPushButton *btnFinalizarPedido;
    QLineEdit *lineEditSearchProduto;
    QDateTimeEdit *dateTimeEdit;
    QComboBox *comboBoxSearch;
    QFrame *frCliente;
    QPushButton *btnPesquisarCliente;
    QComboBox *comboBox;
    QFrame *frBuscaCliente;
    QFrame *frInformacoesCliente;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *lblNomeNovo;
    QLabel *lblEnderecoNovo;
    QLabel *lblTelefoneNovo;
    QLineEdit *txtSearchCliente;
    QFrame *frCadastroCliente;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEditNome;
    QLineEdit *lineEditEndereco;
    QLineEdit *lineEditTelefone;
    QLabel *label_2;
    QWidget *pesquisarPedido;
    QLabel *label_3;
    QLineEdit *txtIdPedido;
    QFrame *frDadosPedido;
    QTableWidget *twProdutosPedido;
    QLabel *label_4;
    QFrame *frClientePesquisar;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *lblIdClientePesquisar;
    QLabel *lblNomePesquisar;
    QLabel *lblEnderecopesquisar;
    QLabel *lblTelefonePesquisar;
    QLabel *label_20;
    QLabel *lblIdPedidoPesquisar;
    QLabel *lblDataPesquisar;
    QLabel *label_21;
    QLabel *lblValorTotalPesquisar;
    QLabel *label_22;
    QPushButton *btnPesquisarPedido;
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
    QTableWidget *twListarPedido;
    QPushButton *btnMostrarLista;
    QFrame *frMostrarLista;
    QLabel *label_5;
    QPushButton *btnMostrarPedido;
    QFrame *frClienteMostrar;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *lblIdClienteMostrar;
    QLabel *lblNomeMostrar;
    QLabel *lblEnderecoMostrar;
    QLabel *lblTelefoneMostrar;
    QLabel *label_28;
    QLabel *lblIdPedidoMostrar;
    QLabel *lblDataMostrar;
    QLabel *label_29;
    QLabel *lblValorTotalMostrar;
    QLabel *label_30;
    QTableWidget *twProdutosLista;
    QComboBox *comboBox_2;

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
        btnAdicionar = new QPushButton(frNovoPedido);
        btnAdicionar->setObjectName(QString::fromUtf8("btnAdicionar"));
        btnAdicionar->setGeometry(QRect(330, 359, 93, 28));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("courier")});
        btnAdicionar->setFont(font1);
        btnAdicionar->setStyleSheet(QString::fromUtf8("font-size:14px;"));
        btnExcluir = new QPushButton(frNovoPedido);
        btnExcluir->setObjectName(QString::fromUtf8("btnExcluir"));
        btnExcluir->setGeometry(QRect(440, 359, 93, 28));
        btnExcluir->setFont(font1);
        btnExcluir->setStyleSheet(QString::fromUtf8("font-size:14px;"));
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
        btnFinalizarPedido->setGeometry(QRect(690, 360, 151, 28));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnFinalizarPedido->sizePolicy().hasHeightForWidth());
        btnFinalizarPedido->setSizePolicy(sizePolicy1);
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
        dateTimeEdit->setGeometry(QRect(20, 360, 154, 23));
        dateTimeEdit->setFont(font1);
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
        lineEditSearchProduto->raise();
        twProdutos->raise();
        btnAdicionar->raise();
        btnExcluir->raise();
        twPedido->raise();
        label_7->raise();
        lblValorTotal->raise();
        btnFinalizarPedido->raise();
        dateTimeEdit->raise();
        comboBoxSearch->raise();
        frCliente = new QFrame(novoPedido);
        frCliente->setObjectName(QString::fromUtf8("frCliente"));
        frCliente->setGeometry(QRect(10, 430, 841, 161));
        frCliente->setFrameShape(QFrame::StyledPanel);
        frCliente->setFrameShadow(QFrame::Raised);
        btnPesquisarCliente = new QPushButton(frCliente);
        btnPesquisarCliente->setObjectName(QString::fromUtf8("btnPesquisarCliente"));
        btnPesquisarCliente->setGeometry(QRect(690, 70, 93, 28));
        comboBox = new QComboBox(frCliente);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(20, 0, 181, 22));
        comboBox->setFont(font1);
        comboBox->setStyleSheet(QString::fromUtf8("QComboBox{background:qlineargradient(spread:reflect, x1:0.994318, y1:0.915, x2:0.994318, y2:0.488, stop:0.1875 rgba(128, 128, 128, 255), stop:1 rgba(211, 211, 211, 255))}"));
        frBuscaCliente = new QFrame(frCliente);
        frBuscaCliente->setObjectName(QString::fromUtf8("frBuscaCliente"));
        frBuscaCliente->setGeometry(QRect(10, 30, 411, 121));
        frBuscaCliente->setFrameShape(QFrame::StyledPanel);
        frBuscaCliente->setFrameShadow(QFrame::Raised);
        frInformacoesCliente = new QFrame(frBuscaCliente);
        frInformacoesCliente->setObjectName(QString::fromUtf8("frInformacoesCliente"));
        frInformacoesCliente->setGeometry(QRect(0, 40, 401, 71));
        frInformacoesCliente->setFont(font1);
        frInformacoesCliente->setFrameShape(QFrame::StyledPanel);
        frInformacoesCliente->setFrameShadow(QFrame::Raised);
        label_11 = new QLabel(frInformacoesCliente);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(10, 10, 71, 16));
        label_11->setFont(font1);
        label_12 = new QLabel(frInformacoesCliente);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(10, 30, 71, 16));
        label_12->setFont(font1);
        label_13 = new QLabel(frInformacoesCliente);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(10, 50, 71, 16));
        label_13->setFont(font1);
        lblNomeNovo = new QLabel(frInformacoesCliente);
        lblNomeNovo->setObjectName(QString::fromUtf8("lblNomeNovo"));
        lblNomeNovo->setGeometry(QRect(90, 30, 291, 20));
        lblEnderecoNovo = new QLabel(frInformacoesCliente);
        lblEnderecoNovo->setObjectName(QString::fromUtf8("lblEnderecoNovo"));
        lblEnderecoNovo->setGeometry(QRect(60, 10, 301, 16));
        lblTelefoneNovo = new QLabel(frInformacoesCliente);
        lblTelefoneNovo->setObjectName(QString::fromUtf8("lblTelefoneNovo"));
        lblTelefoneNovo->setGeometry(QRect(80, 50, 301, 16));
        txtSearchCliente = new QLineEdit(frBuscaCliente);
        txtSearchCliente->setObjectName(QString::fromUtf8("txtSearchCliente"));
        txtSearchCliente->setGeometry(QRect(10, 10, 181, 22));
        txtSearchCliente->setFont(font1);
        frCadastroCliente = new QFrame(frCliente);
        frCadastroCliente->setObjectName(QString::fromUtf8("frCadastroCliente"));
        frCadastroCliente->setEnabled(true);
        frCadastroCliente->setGeometry(QRect(0, 20, 351, 141));
        frCadastroCliente->setFrameShape(QFrame::StyledPanel);
        frCadastroCliente->setFrameShadow(QFrame::Raised);
        layoutWidget = new QWidget(frCadastroCliente);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 56, 321, 82));
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


        verticalLayout_2->addLayout(verticalLayout);

        label_2 = new QLabel(frCadastroCliente);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 10, 321, 41));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background:#ff9318;\n"
"	border-top-right-radius:35px;\n"
"	border-bottom-left-radius:35px;\n"
"	font-family: Courier;\n"
"}"));
        tabPedido->addTab(novoPedido, QString());
        pesquisarPedido = new QWidget();
        pesquisarPedido->setObjectName(QString::fromUtf8("pesquisarPedido"));
        pesquisarPedido->setStyleSheet(QString::fromUtf8("font-family: courier"));
        label_3 = new QLabel(pesquisarPedido);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 47, 71, 16));
        txtIdPedido = new QLineEdit(pesquisarPedido);
        txtIdPedido->setObjectName(QString::fromUtf8("txtIdPedido"));
        txtIdPedido->setGeometry(QRect(90, 44, 151, 22));
        frDadosPedido = new QFrame(pesquisarPedido);
        frDadosPedido->setObjectName(QString::fromUtf8("frDadosPedido"));
        frDadosPedido->setGeometry(QRect(10, 100, 561, 501));
        frDadosPedido->setFrameShape(QFrame::StyledPanel);
        frDadosPedido->setFrameShadow(QFrame::Raised);
        twProdutosPedido = new QTableWidget(frDadosPedido);
        twProdutosPedido->setObjectName(QString::fromUtf8("twProdutosPedido"));
        twProdutosPedido->setGeometry(QRect(140, 190, 401, 301));
        label_4 = new QLabel(frDadosPedido);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(0, 10, 161, 16));
        frClientePesquisar = new QFrame(frDadosPedido);
        frClientePesquisar->setObjectName(QString::fromUtf8("frClientePesquisar"));
        frClientePesquisar->setGeometry(QRect(140, 10, 401, 171));
        frClientePesquisar->setFrameShape(QFrame::StyledPanel);
        frClientePesquisar->setFrameShadow(QFrame::Raised);
        label_15 = new QLabel(frClientePesquisar);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(0, 20, 71, 16));
        label_16 = new QLabel(frClientePesquisar);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(0, 40, 71, 16));
        label_17 = new QLabel(frClientePesquisar);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(0, 60, 71, 16));
        label_18 = new QLabel(frClientePesquisar);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(0, 80, 71, 16));
        lblIdClientePesquisar = new QLabel(frClientePesquisar);
        lblIdClientePesquisar->setObjectName(QString::fromUtf8("lblIdClientePesquisar"));
        lblIdClientePesquisar->setGeometry(QRect(90, 20, 281, 16));
        lblNomePesquisar = new QLabel(frClientePesquisar);
        lblNomePesquisar->setObjectName(QString::fromUtf8("lblNomePesquisar"));
        lblNomePesquisar->setGeometry(QRect(80, 40, 301, 16));
        lblEnderecopesquisar = new QLabel(frClientePesquisar);
        lblEnderecopesquisar->setObjectName(QString::fromUtf8("lblEnderecopesquisar"));
        lblEnderecopesquisar->setGeometry(QRect(80, 60, 301, 16));
        lblTelefonePesquisar = new QLabel(frClientePesquisar);
        lblTelefonePesquisar->setObjectName(QString::fromUtf8("lblTelefonePesquisar"));
        lblTelefonePesquisar->setGeometry(QRect(80, 80, 301, 16));
        label_20 = new QLabel(frClientePesquisar);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(0, 0, 71, 16));
        lblIdPedidoPesquisar = new QLabel(frClientePesquisar);
        lblIdPedidoPesquisar->setObjectName(QString::fromUtf8("lblIdPedidoPesquisar"));
        lblIdPedidoPesquisar->setGeometry(QRect(80, 0, 281, 16));
        lblDataPesquisar = new QLabel(frClientePesquisar);
        lblDataPesquisar->setObjectName(QString::fromUtf8("lblDataPesquisar"));
        lblDataPesquisar->setGeometry(QRect(80, 120, 301, 16));
        label_21 = new QLabel(frClientePesquisar);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(0, 120, 71, 16));
        lblValorTotalPesquisar = new QLabel(frClientePesquisar);
        lblValorTotalPesquisar->setObjectName(QString::fromUtf8("lblValorTotalPesquisar"));
        lblValorTotalPesquisar->setGeometry(QRect(80, 140, 301, 16));
        label_22 = new QLabel(frClientePesquisar);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(0, 140, 71, 16));
        btnPesquisarPedido = new QPushButton(pesquisarPedido);
        btnPesquisarPedido->setObjectName(QString::fromUtf8("btnPesquisarPedido"));
        btnPesquisarPedido->setGeometry(QRect(270, 40, 93, 28));
        tabPedido->addTab(pesquisarPedido, QString());
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
        listarPedido->setStyleSheet(QString::fromUtf8("font-family: courier"));
        twListarPedido = new QTableWidget(listarPedido);
        twListarPedido->setObjectName(QString::fromUtf8("twListarPedido"));
        twListarPedido->setGeometry(QRect(20, 70, 401, 491));
        twListarPedido->setStyleSheet(QString::fromUtf8("font-family: courier"));
        btnMostrarLista = new QPushButton(listarPedido);
        btnMostrarLista->setObjectName(QString::fromUtf8("btnMostrarLista"));
        btnMostrarLista->setGeometry(QRect(310, 20, 93, 28));
        frMostrarLista = new QFrame(listarPedido);
        frMostrarLista->setObjectName(QString::fromUtf8("frMostrarLista"));
        frMostrarLista->setGeometry(QRect(430, 20, 421, 551));
        frMostrarLista->setFrameShape(QFrame::StyledPanel);
        frMostrarLista->setFrameShadow(QFrame::Raised);
        label_5 = new QLabel(frMostrarLista);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 10, 161, 16));
        btnMostrarPedido = new QPushButton(frMostrarLista);
        btnMostrarPedido->setObjectName(QString::fromUtf8("btnMostrarPedido"));
        btnMostrarPedido->setGeometry(QRect(230, 0, 93, 28));
        frClienteMostrar = new QFrame(frMostrarLista);
        frClienteMostrar->setObjectName(QString::fromUtf8("frClienteMostrar"));
        frClienteMostrar->setGeometry(QRect(10, 50, 411, 501));
        frClienteMostrar->setFrameShape(QFrame::StyledPanel);
        frClienteMostrar->setFrameShadow(QFrame::Raised);
        label_23 = new QLabel(frClienteMostrar);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(0, 20, 71, 16));
        label_24 = new QLabel(frClienteMostrar);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(0, 40, 71, 16));
        label_25 = new QLabel(frClienteMostrar);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(0, 60, 71, 16));
        label_26 = new QLabel(frClienteMostrar);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(0, 80, 71, 16));
        lblIdClienteMostrar = new QLabel(frClienteMostrar);
        lblIdClienteMostrar->setObjectName(QString::fromUtf8("lblIdClienteMostrar"));
        lblIdClienteMostrar->setGeometry(QRect(90, 20, 281, 16));
        lblNomeMostrar = new QLabel(frClienteMostrar);
        lblNomeMostrar->setObjectName(QString::fromUtf8("lblNomeMostrar"));
        lblNomeMostrar->setGeometry(QRect(90, 40, 301, 16));
        lblEnderecoMostrar = new QLabel(frClienteMostrar);
        lblEnderecoMostrar->setObjectName(QString::fromUtf8("lblEnderecoMostrar"));
        lblEnderecoMostrar->setGeometry(QRect(80, 60, 301, 16));
        lblTelefoneMostrar = new QLabel(frClienteMostrar);
        lblTelefoneMostrar->setObjectName(QString::fromUtf8("lblTelefoneMostrar"));
        lblTelefoneMostrar->setGeometry(QRect(80, 80, 301, 16));
        label_28 = new QLabel(frClienteMostrar);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(0, 0, 71, 16));
        lblIdPedidoMostrar = new QLabel(frClienteMostrar);
        lblIdPedidoMostrar->setObjectName(QString::fromUtf8("lblIdPedidoMostrar"));
        lblIdPedidoMostrar->setGeometry(QRect(90, 0, 281, 16));
        lblDataMostrar = new QLabel(frClienteMostrar);
        lblDataMostrar->setObjectName(QString::fromUtf8("lblDataMostrar"));
        lblDataMostrar->setGeometry(QRect(80, 120, 301, 16));
        label_29 = new QLabel(frClienteMostrar);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setGeometry(QRect(0, 120, 71, 16));
        lblValorTotalMostrar = new QLabel(frClienteMostrar);
        lblValorTotalMostrar->setObjectName(QString::fromUtf8("lblValorTotalMostrar"));
        lblValorTotalMostrar->setGeometry(QRect(80, 140, 301, 16));
        label_30 = new QLabel(frClienteMostrar);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setGeometry(QRect(0, 140, 71, 16));
        twProdutosLista = new QTableWidget(frClienteMostrar);
        twProdutosLista->setObjectName(QString::fromUtf8("twProdutosLista"));
        twProdutosLista->setGeometry(QRect(0, 190, 401, 301));
        comboBox_2 = new QComboBox(listarPedido);
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(20, 40, 69, 22));
        comboBox_2->setStyleSheet(QString::fromUtf8("QComboBox{background:qlineargradient(spread:reflect, x1:0.994318, y1:0.915, x2:0.994318, y2:0.488, stop:0.1875 rgba(128, 128, 128, 255), stop:1 rgba(211, 211, 211, 255));\n"
"font-family:courier;\n"
"}"));
        tabPedido->addTab(listarPedido, QString());

        retranslateUi(AdicionarPedido);

        tabPedido->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AdicionarPedido);
    } // setupUi

    void retranslateUi(QDialog *AdicionarPedido)
    {
        AdicionarPedido->setWindowTitle(QCoreApplication::translate("AdicionarPedido", "Dialog", nullptr));
        btnAdicionar->setText(QCoreApplication::translate("AdicionarPedido", "Adicionar", nullptr));
        btnExcluir->setText(QCoreApplication::translate("AdicionarPedido", "Excluir", nullptr));
        label_7->setText(QCoreApplication::translate("AdicionarPedido", " Valor total R$:", nullptr));
        lblValorTotal->setText(QString());
        btnFinalizarPedido->setText(QCoreApplication::translate("AdicionarPedido", "Finalizar Pedido", nullptr));
        lineEditSearchProduto->setPlaceholderText(QCoreApplication::translate("AdicionarPedido", "Buscar Produto", nullptr));
        comboBoxSearch->setItemText(0, QCoreApplication::translate("AdicionarPedido", "C\303\263digo", nullptr));
        comboBoxSearch->setItemText(1, QCoreApplication::translate("AdicionarPedido", "Nome", nullptr));

        btnPesquisarCliente->setText(QCoreApplication::translate("AdicionarPedido", "Pesquisar", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("AdicionarPedido", "Novo Cliente", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("AdicionarPedido", "Cliente Cadastrado", nullptr));

        label_11->setText(QCoreApplication::translate("AdicionarPedido", "Nome:", nullptr));
        label_12->setText(QCoreApplication::translate("AdicionarPedido", "Endere\303\247o:", nullptr));
        label_13->setText(QCoreApplication::translate("AdicionarPedido", "Telefone:", nullptr));
        lblNomeNovo->setText(QString());
        lblEnderecoNovo->setText(QString());
        lblTelefoneNovo->setText(QString());
        txtSearchCliente->setPlaceholderText(QCoreApplication::translate("AdicionarPedido", "Buscar Cliente", nullptr));
        lineEditNome->setPlaceholderText(QCoreApplication::translate("AdicionarPedido", "Nome", nullptr));
        lineEditEndereco->setPlaceholderText(QCoreApplication::translate("AdicionarPedido", "Endere\303\247o", nullptr));
        lineEditTelefone->setPlaceholderText(QCoreApplication::translate("AdicionarPedido", "Telefone", nullptr));
#if QT_CONFIG(tooltip)
        label_2->setToolTip(QCoreApplication::translate("AdicionarPedido", "<html><head/><body><p align=\"justify\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_2->setText(QCoreApplication::translate("AdicionarPedido", "        Informa\303\247\303\265es do Cliente:", nullptr));
        tabPedido->setTabText(tabPedido->indexOf(novoPedido), QCoreApplication::translate("AdicionarPedido", "Nova Venda", nullptr));
        label_3->setText(QCoreApplication::translate("AdicionarPedido", "Id Pedido:", nullptr));
        label_4->setText(QCoreApplication::translate("AdicionarPedido", "Informa\303\247\303\265es do Cliente:", nullptr));
        label_15->setText(QCoreApplication::translate("AdicionarPedido", "Id Cliente:", nullptr));
        label_16->setText(QCoreApplication::translate("AdicionarPedido", "Nome:", nullptr));
        label_17->setText(QCoreApplication::translate("AdicionarPedido", "Endereco:", nullptr));
        label_18->setText(QCoreApplication::translate("AdicionarPedido", "Telefone:", nullptr));
        lblIdClientePesquisar->setText(QString());
        lblNomePesquisar->setText(QString());
        lblEnderecopesquisar->setText(QString());
        lblTelefonePesquisar->setText(QString());
        label_20->setText(QCoreApplication::translate("AdicionarPedido", "Id pedido:", nullptr));
        lblIdPedidoPesquisar->setText(QString());
        lblDataPesquisar->setText(QString());
        label_21->setText(QCoreApplication::translate("AdicionarPedido", "Data:", nullptr));
        lblValorTotalPesquisar->setText(QString());
        label_22->setText(QCoreApplication::translate("AdicionarPedido", "Valor total:", nullptr));
        btnPesquisarPedido->setText(QCoreApplication::translate("AdicionarPedido", "Pesquisar", nullptr));
        tabPedido->setTabText(tabPedido->indexOf(pesquisarPedido), QCoreApplication::translate("AdicionarPedido", "Pesquisar Pedido", nullptr));
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
        btnMostrarLista->setText(QCoreApplication::translate("AdicionarPedido", "Mostrar Lista", nullptr));
        label_5->setText(QCoreApplication::translate("AdicionarPedido", "Informa\303\247\303\265es do Cliente:", nullptr));
        btnMostrarPedido->setText(QCoreApplication::translate("AdicionarPedido", "Mostrar", nullptr));
        label_23->setText(QCoreApplication::translate("AdicionarPedido", "Id Cliente:", nullptr));
        label_24->setText(QCoreApplication::translate("AdicionarPedido", "Nome:", nullptr));
        label_25->setText(QCoreApplication::translate("AdicionarPedido", "Endereco:", nullptr));
        label_26->setText(QCoreApplication::translate("AdicionarPedido", "Telefone:", nullptr));
        lblIdClienteMostrar->setText(QString());
        lblNomeMostrar->setText(QString());
        lblEnderecoMostrar->setText(QString());
        lblTelefoneMostrar->setText(QString());
        label_28->setText(QCoreApplication::translate("AdicionarPedido", "Id pedido:", nullptr));
        lblIdPedidoMostrar->setText(QString());
        lblDataMostrar->setText(QString());
        label_29->setText(QCoreApplication::translate("AdicionarPedido", "Data:", nullptr));
        lblValorTotalMostrar->setText(QString());
        label_30->setText(QCoreApplication::translate("AdicionarPedido", "Valor total:", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("AdicionarPedido", "Data", nullptr));

        tabPedido->setTabText(tabPedido->indexOf(listarPedido), QCoreApplication::translate("AdicionarPedido", "Listar Pedido", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdicionarPedido: public Ui_AdicionarPedido {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADICIONARPEDIDO_H
