/********************************************************************************
** Form generated from reading UI file 'AdicionarPedido.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
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
    QTabWidget *tabWidget;
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
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_6;
    QDateTimeEdit *dateTimeEdit;
    QFrame *frCliente;
    QPushButton *btnPesquisarCliente;
    QPushButton *btnNovoPedido;
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
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEditNome;
    QLineEdit *lineEditEndereco;
    QLineEdit *lineEditTelefone;
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
    QLabel *label_19;
    QLabel *lblIdClientePesquisar;
    QLabel *lblNomePesquisar;
    QLabel *lblEnderecopesquisar;
    QLabel *lblTelefonePesquisar;
    QLabel *lblCPFpesquisar;
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
    QLabel *label_36;
    QLabel *lblIdClientePesqC;
    QLabel *lblNomePesqC;
    QLabel *lblEnderecoPesqC;
    QLabel *lblTelefonePesqC;
    QLabel *lblCPFPesqC;
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
    QLabel *label_27;
    QLabel *lblIdClienteMostrar;
    QLabel *lblNomeMostrar;
    QLabel *lblEnderecoMostrar;
    QLabel *lblTelefoneMostrar;
    QLabel *lblCPFMostrar;
    QLabel *label_28;
    QLabel *lblIdPedidoMostrar;
    QLabel *lblDataMostrar;
    QLabel *label_29;
    QLabel *lblValorTotalMostrar;
    QLabel *label_30;
    QTableWidget *twProdutosLista;

    void setupUi(QDialog *AdicionarPedido)
    {
        if (AdicionarPedido->objectName().isEmpty())
            AdicionarPedido->setObjectName(QString::fromUtf8("AdicionarPedido"));
        AdicionarPedido->resize(940, 690);
        AdicionarPedido->setStyleSheet(QString::fromUtf8("QDialog{background:qlineargradient(spread:reflect, x1:1, y1:0.494409, x2:1, y2:0.942727, stop:0.198864 rgba(243, 112, 25, 251), stop:0.738636 rgba(221, 77, 48, 255))}"));
        tabWidget = new QTabWidget(AdicionarPedido);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(40, 30, 861, 631));
        QFont font;
        font.setFamily(QString::fromUtf8("Courier"));
        tabWidget->setFont(font);
        tabWidget->setStyleSheet(QString::fromUtf8("Widget{background:rgb(255, 140, 64)}\n"
""));
        novoPedido = new QWidget();
        novoPedido->setObjectName(QString::fromUtf8("novoPedido"));
        frNovoPedido = new QFrame(novoPedido);
        frNovoPedido->setObjectName(QString::fromUtf8("frNovoPedido"));
        frNovoPedido->setGeometry(QRect(10, 20, 841, 391));
        frNovoPedido->setFrameShape(QFrame::StyledPanel);
        frNovoPedido->setFrameShadow(QFrame::Raised);
        twProdutos = new QTableWidget(frNovoPedido);
        twProdutos->setObjectName(QString::fromUtf8("twProdutos"));
        twProdutos->setGeometry(QRect(20, 50, 401, 301));
        twProdutos->setStyleSheet(QString::fromUtf8("QWidget{background:rgb(255,255, 255)}"));
        twProdutos->setEditTriggers(QAbstractItemView::NoEditTriggers);
        btnAdicionar = new QPushButton(frNovoPedido);
        btnAdicionar->setObjectName(QString::fromUtf8("btnAdicionar"));
        btnAdicionar->setGeometry(QRect(330, 359, 93, 28));
        btnAdicionar->setFont(font);
        btnExcluir = new QPushButton(frNovoPedido);
        btnExcluir->setObjectName(QString::fromUtf8("btnExcluir"));
        btnExcluir->setGeometry(QRect(440, 359, 93, 28));
        btnExcluir->setFont(font);
        twPedido = new QTableWidget(frNovoPedido);
        if (twPedido->rowCount() < 1)
            twPedido->setRowCount(1);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Courier"));
        font1.setKerning(true);
        font1.setStyleStrategy(QFont::PreferDefault);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem->setFont(font1);
        twPedido->setVerticalHeaderItem(0, __qtablewidgetitem);
        twPedido->setObjectName(QString::fromUtf8("twPedido"));
        twPedido->setGeometry(QRect(440, 50, 401, 301));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(twPedido->sizePolicy().hasHeightForWidth());
        twPedido->setSizePolicy(sizePolicy);
        twPedido->setEditTriggers(QAbstractItemView::NoEditTriggers);
        twPedido->setTextElideMode(Qt::ElideMiddle);
        label_7 = new QLabel(frNovoPedido);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(640, 20, 201, 21));
        label_7->setFont(font);
        lblValorTotal = new QLabel(frNovoPedido);
        lblValorTotal->setObjectName(QString::fromUtf8("lblValorTotal"));
        lblValorTotal->setGeometry(QRect(750, 20, 61, 20));
        btnFinalizarPedido = new QPushButton(frNovoPedido);
        btnFinalizarPedido->setObjectName(QString::fromUtf8("btnFinalizarPedido"));
        btnFinalizarPedido->setGeometry(QRect(690, 360, 151, 28));
        btnFinalizarPedido->setFont(font);
        lineEditSearchProduto = new QLineEdit(frNovoPedido);
        lineEditSearchProduto->setObjectName(QString::fromUtf8("lineEditSearchProduto"));
        lineEditSearchProduto->setGeometry(QRect(20, 20, 401, 20));
        lineEditSearchProduto->setFont(font);
        widget = new QWidget(frNovoPedido);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 360, 204, 24));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        horizontalLayout->addWidget(label_6);

        dateTimeEdit = new QDateTimeEdit(widget);
        dateTimeEdit->setObjectName(QString::fromUtf8("dateTimeEdit"));
        dateTimeEdit->setFont(font);

        horizontalLayout->addWidget(dateTimeEdit);

        frCliente = new QFrame(novoPedido);
        frCliente->setObjectName(QString::fromUtf8("frCliente"));
        frCliente->setGeometry(QRect(10, 430, 841, 161));
        frCliente->setFrameShape(QFrame::StyledPanel);
        frCliente->setFrameShadow(QFrame::Raised);
        btnPesquisarCliente = new QPushButton(frCliente);
        btnPesquisarCliente->setObjectName(QString::fromUtf8("btnPesquisarCliente"));
        btnPesquisarCliente->setGeometry(QRect(220, 0, 93, 28));
        btnNovoPedido = new QPushButton(frCliente);
        btnNovoPedido->setObjectName(QString::fromUtf8("btnNovoPedido"));
        btnNovoPedido->setGeometry(QRect(330, 0, 101, 28));
        comboBox = new QComboBox(frCliente);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(20, 0, 181, 22));
        comboBox->setFont(font);
        frBuscaCliente = new QFrame(frCliente);
        frBuscaCliente->setObjectName(QString::fromUtf8("frBuscaCliente"));
        frBuscaCliente->setGeometry(QRect(10, 30, 411, 121));
        frBuscaCliente->setFrameShape(QFrame::StyledPanel);
        frBuscaCliente->setFrameShadow(QFrame::Raised);
        frInformacoesCliente = new QFrame(frBuscaCliente);
        frInformacoesCliente->setObjectName(QString::fromUtf8("frInformacoesCliente"));
        frInformacoesCliente->setGeometry(QRect(0, 40, 401, 71));
        frInformacoesCliente->setFont(font);
        frInformacoesCliente->setFrameShape(QFrame::StyledPanel);
        frInformacoesCliente->setFrameShadow(QFrame::Raised);
        label_11 = new QLabel(frInformacoesCliente);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(10, 10, 71, 16));
        label_11->setFont(font);
        label_12 = new QLabel(frInformacoesCliente);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(10, 30, 71, 16));
        label_12->setFont(font);
        label_13 = new QLabel(frInformacoesCliente);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(10, 50, 71, 16));
        label_13->setFont(font);
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
        txtSearchCliente->setFont(font);
        frCadastroCliente = new QFrame(frCliente);
        frCadastroCliente->setObjectName(QString::fromUtf8("frCadastroCliente"));
        frCadastroCliente->setGeometry(QRect(0, 20, 351, 131));
        frCadastroCliente->setFrameShape(QFrame::StyledPanel);
        frCadastroCliente->setFrameShadow(QFrame::Raised);
        widget1 = new QWidget(frCadastroCliente);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(20, 10, 311, 117));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lineEditNome = new QLineEdit(widget1);
        lineEditNome->setObjectName(QString::fromUtf8("lineEditNome"));
        lineEditNome->setFont(font);

        verticalLayout->addWidget(lineEditNome);

        lineEditEndereco = new QLineEdit(widget1);
        lineEditEndereco->setObjectName(QString::fromUtf8("lineEditEndereco"));
        lineEditEndereco->setFont(font);

        verticalLayout->addWidget(lineEditEndereco);

        lineEditTelefone = new QLineEdit(widget1);
        lineEditTelefone->setObjectName(QString::fromUtf8("lineEditTelefone"));
        lineEditTelefone->setFont(font);

        verticalLayout->addWidget(lineEditTelefone);


        verticalLayout_2->addLayout(verticalLayout);

        tabWidget->addTab(novoPedido, QString());
        pesquisarPedido = new QWidget();
        pesquisarPedido->setObjectName(QString::fromUtf8("pesquisarPedido"));
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
        label_19 = new QLabel(frClientePesquisar);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(0, 100, 71, 16));
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
        lblCPFpesquisar = new QLabel(frClientePesquisar);
        lblCPFpesquisar->setObjectName(QString::fromUtf8("lblCPFpesquisar"));
        lblCPFpesquisar->setGeometry(QRect(80, 100, 301, 16));
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
        tabWidget->addTab(pesquisarPedido, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
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
        label_36 = new QLabel(frPedidoClientePesqC);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setGeometry(QRect(10, 80, 71, 16));
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
        lblCPFPesqC = new QLabel(frPedidoClientePesqC);
        lblCPFPesqC->setObjectName(QString::fromUtf8("lblCPFPesqC"));
        lblCPFPesqC->setGeometry(QRect(90, 80, 301, 16));
        twPedidoPesqC = new QTableWidget(frPedidoClientePesqC);
        twPedidoPesqC->setObjectName(QString::fromUtf8("twPedidoPesqC"));
        twPedidoPesqC->setGeometry(QRect(10, 100, 401, 361));
        frMostrarPesqC = new QFrame(tab);
        frMostrarPesqC->setObjectName(QString::fromUtf8("frMostrarPesqC"));
        frMostrarPesqC->setGeometry(QRect(430, 150, 431, 421));
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
        tabWidget->addTab(tab, QString());
        listarPedido = new QWidget();
        listarPedido->setObjectName(QString::fromUtf8("listarPedido"));
        twListarPedido = new QTableWidget(listarPedido);
        twListarPedido->setObjectName(QString::fromUtf8("twListarPedido"));
        twListarPedido->setGeometry(QRect(20, 70, 401, 491));
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
        label_27 = new QLabel(frClienteMostrar);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(0, 100, 71, 16));
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
        lblCPFMostrar = new QLabel(frClienteMostrar);
        lblCPFMostrar->setObjectName(QString::fromUtf8("lblCPFMostrar"));
        lblCPFMostrar->setGeometry(QRect(80, 100, 301, 16));
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
        tabWidget->addTab(listarPedido, QString());

        retranslateUi(AdicionarPedido);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AdicionarPedido);
    } // setupUi

    void retranslateUi(QDialog *AdicionarPedido)
    {
        AdicionarPedido->setWindowTitle(QCoreApplication::translate("AdicionarPedido", "Dialog", nullptr));
        btnAdicionar->setText(QCoreApplication::translate("AdicionarPedido", "Adicionar", nullptr));
        btnExcluir->setText(QCoreApplication::translate("AdicionarPedido", "Excluir", nullptr));
        QTableWidgetItem *___qtablewidgetitem = twPedido->verticalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("AdicionarPedido", "Carrinho de Compras", nullptr));
        label_7->setText(QCoreApplication::translate("AdicionarPedido", "Valor total R$:", nullptr));
        lblValorTotal->setText(QString());
        btnFinalizarPedido->setText(QCoreApplication::translate("AdicionarPedido", "Finalizar Pedido", nullptr));
        lineEditSearchProduto->setPlaceholderText(QCoreApplication::translate("AdicionarPedido", "Buscar Produto", nullptr));
        label_6->setText(QCoreApplication::translate("AdicionarPedido", "Data:", nullptr));
        btnPesquisarCliente->setText(QCoreApplication::translate("AdicionarPedido", "Pesquisar", nullptr));
        btnNovoPedido->setText(QCoreApplication::translate("AdicionarPedido", "Novo Pedido", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("AdicionarPedido", "Novo Cliente", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("AdicionarPedido", "Cliente Cadastrado", nullptr));

        label_11->setText(QCoreApplication::translate("AdicionarPedido", "Nome:", nullptr));
        label_12->setText(QCoreApplication::translate("AdicionarPedido", "Endere\303\247o:", nullptr));
        label_13->setText(QCoreApplication::translate("AdicionarPedido", "Telefone:", nullptr));
        lblNomeNovo->setText(QString());
        lblEnderecoNovo->setText(QString());
        lblTelefoneNovo->setText(QString());
        txtSearchCliente->setPlaceholderText(QCoreApplication::translate("AdicionarPedido", "Buscar Cliente", nullptr));
        label_2->setText(QCoreApplication::translate("AdicionarPedido", "Informa\303\247\303\265es do Cliente:", nullptr));
        lineEditNome->setPlaceholderText(QCoreApplication::translate("AdicionarPedido", "Nome", nullptr));
        lineEditEndereco->setPlaceholderText(QCoreApplication::translate("AdicionarPedido", "Endere\303\247o", nullptr));
        lineEditTelefone->setPlaceholderText(QCoreApplication::translate("AdicionarPedido", "Telefone", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(novoPedido), QCoreApplication::translate("AdicionarPedido", "Novo Pedido", nullptr));
        label_3->setText(QCoreApplication::translate("AdicionarPedido", "Id Pedido:", nullptr));
        label_4->setText(QCoreApplication::translate("AdicionarPedido", "Informa\303\247\303\265es do Cliente:", nullptr));
        label_15->setText(QCoreApplication::translate("AdicionarPedido", "Id Cliente:", nullptr));
        label_16->setText(QCoreApplication::translate("AdicionarPedido", "Nome:", nullptr));
        label_17->setText(QCoreApplication::translate("AdicionarPedido", "Endereco:", nullptr));
        label_18->setText(QCoreApplication::translate("AdicionarPedido", "Telefone:", nullptr));
        label_19->setText(QCoreApplication::translate("AdicionarPedido", "CPF:", nullptr));
        lblIdClientePesquisar->setText(QString());
        lblNomePesquisar->setText(QString());
        lblEnderecopesquisar->setText(QString());
        lblTelefonePesquisar->setText(QString());
        lblCPFpesquisar->setText(QString());
        label_20->setText(QCoreApplication::translate("AdicionarPedido", "Id pedido:", nullptr));
        lblIdPedidoPesquisar->setText(QString());
        lblDataPesquisar->setText(QString());
        label_21->setText(QCoreApplication::translate("AdicionarPedido", "Data:", nullptr));
        lblValorTotalPesquisar->setText(QString());
        label_22->setText(QCoreApplication::translate("AdicionarPedido", "Valor total:", nullptr));
        btnPesquisarPedido->setText(QCoreApplication::translate("AdicionarPedido", "Pesquisar", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(pesquisarPedido), QCoreApplication::translate("AdicionarPedido", "Pesquisar Pedido", nullptr));
        btnPesquisarPesqC->setText(QCoreApplication::translate("AdicionarPedido", "Pesquisar", nullptr));
        label_40->setText(QCoreApplication::translate("AdicionarPedido", "Id Cliente:", nullptr));
        label_32->setText(QCoreApplication::translate("AdicionarPedido", "Id Cliente:", nullptr));
        label_33->setText(QCoreApplication::translate("AdicionarPedido", "Nome:", nullptr));
        label_34->setText(QCoreApplication::translate("AdicionarPedido", "Endereco:", nullptr));
        label_35->setText(QCoreApplication::translate("AdicionarPedido", "Telefone:", nullptr));
        label_36->setText(QCoreApplication::translate("AdicionarPedido", "CPF:", nullptr));
        lblIdClientePesqC->setText(QString());
        lblNomePesqC->setText(QString());
        lblEnderecoPesqC->setText(QString());
        lblTelefonePesqC->setText(QString());
        lblCPFPesqC->setText(QString());
        label_31->setText(QCoreApplication::translate("AdicionarPedido", "Informa\303\247\303\265es do Cliente:", nullptr));
        btnMostrarPesqC->setText(QCoreApplication::translate("AdicionarPedido", "Mostrar", nullptr));
        label_39->setText(QCoreApplication::translate("AdicionarPedido", "Valor total:", nullptr));
        lblValorTotalPesqC->setText(QString());
        label_38->setText(QCoreApplication::translate("AdicionarPedido", "Data:", nullptr));
        lblDataPesqC->setText(QString());
        label_37->setText(QCoreApplication::translate("AdicionarPedido", "Id pedido:", nullptr));
        lblIdPedidoPesqC->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("AdicionarPedido", "Pedido por cliente", nullptr));
        btnMostrarLista->setText(QCoreApplication::translate("AdicionarPedido", "Mostrar Lista", nullptr));
        label_5->setText(QCoreApplication::translate("AdicionarPedido", "Informa\303\247\303\265es do Cliente:", nullptr));
        btnMostrarPedido->setText(QCoreApplication::translate("AdicionarPedido", "Mostrar", nullptr));
        label_23->setText(QCoreApplication::translate("AdicionarPedido", "Id Cliente:", nullptr));
        label_24->setText(QCoreApplication::translate("AdicionarPedido", "Nome:", nullptr));
        label_25->setText(QCoreApplication::translate("AdicionarPedido", "Endereco:", nullptr));
        label_26->setText(QCoreApplication::translate("AdicionarPedido", "Telefone:", nullptr));
        label_27->setText(QCoreApplication::translate("AdicionarPedido", "CPF:", nullptr));
        lblIdClienteMostrar->setText(QString());
        lblNomeMostrar->setText(QString());
        lblEnderecoMostrar->setText(QString());
        lblTelefoneMostrar->setText(QString());
        lblCPFMostrar->setText(QString());
        label_28->setText(QCoreApplication::translate("AdicionarPedido", "Id pedido:", nullptr));
        lblIdPedidoMostrar->setText(QString());
        lblDataMostrar->setText(QString());
        label_29->setText(QCoreApplication::translate("AdicionarPedido", "Data:", nullptr));
        lblValorTotalMostrar->setText(QString());
        label_30->setText(QCoreApplication::translate("AdicionarPedido", "Valor total:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(listarPedido), QCoreApplication::translate("AdicionarPedido", "Listar Pedido", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdicionarPedido: public Ui_AdicionarPedido {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADICIONARPEDIDO_H
