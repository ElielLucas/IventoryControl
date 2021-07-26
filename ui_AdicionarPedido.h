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
#include <QtWidgets/QDateEdit>
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
    QComboBox *comboBox;
    QFrame *frCliente;
    QFrame *frCadastroCliente;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEditNome;
    QLineEdit *lineEditEndereco;
    QLineEdit *lineEditTelefone;
    QLineEdit *lineEditCadastroEmailCliente;
    QLabel *label_2;
    QFrame *frBuscaCliente;
    QLineEdit *txtSearchCliente;
    QFrame *frInformacoesCliente;
    QTableWidget *tbWidgetInformacoesCliente;
    QWidget *listarPedido;
    QFrame *frMostrarLista;
    QTableWidget *twProdutosLista;
    QLabel *label_3;
    QWidget *layoutWidget1;
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
    QWidget *widgetSearchForDate;
    QDateEdit *dateEditSearchPedido;

    void setupUi(QDialog *AdicionarPedido)
    {
        if (AdicionarPedido->objectName().isEmpty())
            AdicionarPedido->setObjectName(QString::fromUtf8("AdicionarPedido"));
        AdicionarPedido->resize(940, 690);
        AdicionarPedido->setMaximumSize(QSize(940, 690));
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
"#tbWidgetInformacoesCliente\n"
"{\n"
"	 selection-background-color: rgb(250, 128, 114);\n"
"	 background:#b5b5b5;\n"
"	 border-bottom-right-radius:5px;\n"
"     border-bottom-left-radius:5px;\n"
"     border: 1px solid #F4A460;\n"
"}\n"
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
"	 background:"
                        "#b5b5b5;\n"
"	 border-bottom-right-radius:20px;\n"
"     border-bottom-left-radius:20px;\n"
"     border: 1px solid #F4A460;\n"
"}\n"
"\n"
"#twProdutosLista\n"
"{\n"
"     selection-background-color: rgb(250, 128, 114);\n"
"	 background:#b5b5b5;\n"
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
        twProdutos->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
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
        twPedido->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
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
        lineEditSearchProduto->setGeometry(QRect(20, 20, 401, 22));
        lineEditSearchProduto->setFont(font1);
        lineEditSearchProduto->setStyleSheet(QString::fromUtf8("#lineEditSearchProduto{\n"
"  border-width:1px;\n"
"  border:0;\n"
" border-radius:6px;\n"
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
""));
        comboBox = new QComboBox(frNovoPedido);
        comboBox->addItem(QString());
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

        lineEditCadastroEmailCliente = new QLineEdit(layoutWidget);
        lineEditCadastroEmailCliente->setObjectName(QString::fromUtf8("lineEditCadastroEmailCliente"));

        verticalLayout->addWidget(lineEditCadastroEmailCliente);


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
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/imgs/images/infCliente.png")));
        label_2->setScaledContents(true);
        frBuscaCliente = new QFrame(frCliente);
        frBuscaCliente->setObjectName(QString::fromUtf8("frBuscaCliente"));
        frBuscaCliente->setGeometry(QRect(10, 0, 831, 171));
        frBuscaCliente->setFrameShape(QFrame::StyledPanel);
        frBuscaCliente->setFrameShadow(QFrame::Raised);
        txtSearchCliente = new QLineEdit(frBuscaCliente);
        txtSearchCliente->setObjectName(QString::fromUtf8("txtSearchCliente"));
        txtSearchCliente->setGeometry(QRect(10, 0, 401, 25));
        txtSearchCliente->setFont(font1);
        frInformacoesCliente = new QFrame(frBuscaCliente);
        frInformacoesCliente->setObjectName(QString::fromUtf8("frInformacoesCliente"));
        frInformacoesCliente->setGeometry(QRect(0, 40, 831, 131));
        frInformacoesCliente->setFont(font1);
        frInformacoesCliente->setFrameShape(QFrame::StyledPanel);
        frInformacoesCliente->setFrameShadow(QFrame::Raised);
        tbWidgetInformacoesCliente = new QTableWidget(frInformacoesCliente);
        tbWidgetInformacoesCliente->setObjectName(QString::fromUtf8("tbWidgetInformacoesCliente"));
        tbWidgetInformacoesCliente->setGeometry(QRect(10, 0, 821, 131));
        tbWidgetInformacoesCliente->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tbWidgetInformacoesCliente->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tabPedido->addTab(novoPedido, QString());
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
        twProdutosLista->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        twProdutosLista->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        label_3 = new QLabel(frMostrarLista);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 0, 331, 41));
        label_3->setStyleSheet(QString::fromUtf8(""));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/imgs/images/infDetalhadaDoPedido.png")));
        label_3->setScaledContents(true);
        layoutWidget1 = new QWidget(frMostrarLista);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 60, 431, 251));
        verticalLayout_3 = new QVBoxLayout(layoutWidget1);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_28 = new QLabel(layoutWidget1);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setStyleSheet(QString::fromUtf8("border:0;\n"
"border-bottom: 1px solid #F4A460;\n"
"\n"
""));

        horizontalLayout_2->addWidget(label_28);

        labelIDPedido = new QLabel(layoutWidget1);
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
        label_23 = new QLabel(layoutWidget1);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setStyleSheet(QString::fromUtf8("border:0;\n"
"border-bottom: 1px solid #F4A460;\n"
""));

        horizontalLayout_3->addWidget(label_23);

        labelIDCliente = new QLabel(layoutWidget1);
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
        label_24 = new QLabel(layoutWidget1);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setStyleSheet(QString::fromUtf8("border:0;\n"
"border-bottom: 1px solid #F4A460;\n"
""));

        horizontalLayout_4->addWidget(label_24);

        labelNomeCliente = new QLabel(layoutWidget1);
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
        label_25 = new QLabel(layoutWidget1);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setStyleSheet(QString::fromUtf8("border:0;\n"
"border-bottom: 1px solid #F4A460;\n"
""));

        horizontalLayout_5->addWidget(label_25);

        labelEnderecoCliente = new QLabel(layoutWidget1);
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
        label_26 = new QLabel(layoutWidget1);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setStyleSheet(QString::fromUtf8("border:0;\n"
"border-bottom: 1px solid #F4A460;\n"
""));

        horizontalLayout_6->addWidget(label_26);

        labelTelefoneCliente = new QLabel(layoutWidget1);
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
        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("border:0;\n"
"border-bottom: 1px solid #F4A460;\n"
""));

        horizontalLayout_9->addWidget(label_4);

        labelEmailCliente = new QLabel(layoutWidget1);
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
        label_29 = new QLabel(layoutWidget1);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setStyleSheet(QString::fromUtf8("border:0;\n"
"border-bottom: 1px solid #F4A460;\n"
""));

        horizontalLayout_7->addWidget(label_29);

        labelDataCompra = new QLabel(layoutWidget1);
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
        label_30 = new QLabel(layoutWidget1);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setStyleSheet(QString::fromUtf8("border:0;\n"
"border-bottom: 1px solid #F4A460;\n"
""));

        horizontalLayout_8->addWidget(label_30);

        labelValorTotalCompra = new QLabel(layoutWidget1);
        labelValorTotalCompra->setObjectName(QString::fromUtf8("labelValorTotalCompra"));
        labelValorTotalCompra->setStyleSheet(QString::fromUtf8("QLabel{ \n"
"  border-width:1px;\n"
"  border:0;\n"
"  border-radius:6px;\n"
"  border-color:#fff;\n"
"  background:#b5b5b5;\n"
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
        twListarPedidos->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
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
"border-radius:8px;\n"
""));
        widgetSearchForDate = new QWidget(listarPedido);
        widgetSearchForDate->setObjectName(QString::fromUtf8("widgetSearchForDate"));
        widgetSearchForDate->setGeometry(QRect(240, 20, 171, 41));
        dateEditSearchPedido = new QDateEdit(widgetSearchForDate);
        dateEditSearchPedido->setObjectName(QString::fromUtf8("dateEditSearchPedido"));
        dateEditSearchPedido->setGeometry(QRect(10, 10, 151, 22));
        dateEditSearchPedido->setStyleSheet(QString::fromUtf8("QDateEdit{\n"
"  border-width:1px;\n"
"  border-radius:6px;\n"
"  border-color:#fff;\n"
"  background:qlineargradient(spread:reflect, x1:0.994318, y1:0.915, x2:0.994318, y2:0.488, stop:0.1875 rgba(128, 128, 128, 255), stop:1 rgba(211, 211, 211, 255))\n"
"}\n"
"\n"
""));
        tabPedido->addTab(listarPedido, QString());
        widgetSearchForDate->raise();
        quadradim->raise();
        widgetPesquisaTwoLines->raise();
        frMostrarLista->raise();
        twListarPedidos->raise();
        widgetPesquisaOneLine->raise();
        comboBoxTipoPesquisa->raise();
        comboBoxTipoOrdenacao->raise();

        retranslateUi(AdicionarPedido);

        tabPedido->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AdicionarPedido);
    } // setupUi

    void retranslateUi(QDialog *AdicionarPedido)
    {
        AdicionarPedido->setWindowTitle(QCoreApplication::translate("AdicionarPedido", "Vendas", nullptr));
        label_7->setText(QCoreApplication::translate("AdicionarPedido", " Valor total R$:", nullptr));
        lblValorTotal->setText(QString());
        btnFinalizarPedido->setText(QCoreApplication::translate("AdicionarPedido", "Finalizar Pedido", nullptr));
        lineEditSearchProduto->setPlaceholderText(QCoreApplication::translate("AdicionarPedido", "Digite o c\303\263digo ou nome do Produto", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("AdicionarPedido", "Novo Cliente", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("AdicionarPedido", "Cliente Cadastrado", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("AdicionarPedido", "Sem Informar Cliente", nullptr));

        lineEditNome->setPlaceholderText(QCoreApplication::translate("AdicionarPedido", "Nome", nullptr));
        lineEditEndereco->setPlaceholderText(QCoreApplication::translate("AdicionarPedido", "Endere\303\247o", nullptr));
        lineEditTelefone->setPlaceholderText(QCoreApplication::translate("AdicionarPedido", "Telefone", nullptr));
        lineEditCadastroEmailCliente->setPlaceholderText(QCoreApplication::translate("AdicionarPedido", "Email", nullptr));
#if QT_CONFIG(tooltip)
        label_2->setToolTip(QCoreApplication::translate("AdicionarPedido", "<html><head/><body><p align=\"justify\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_2->setText(QString());
        txtSearchCliente->setPlaceholderText(QCoreApplication::translate("AdicionarPedido", "Digite o nome do cliente", nullptr));
        tabPedido->setTabText(tabPedido->indexOf(novoPedido), QCoreApplication::translate("AdicionarPedido", "Nova Venda", nullptr));
#if QT_CONFIG(tooltip)
        label_3->setToolTip(QCoreApplication::translate("AdicionarPedido", "<html><head/><body><p align=\"justify\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_3->setText(QString());
        label_28->setText(QCoreApplication::translate("AdicionarPedido", "ID Pedido", nullptr));
        labelIDPedido->setText(QString());
        label_23->setText(QCoreApplication::translate("AdicionarPedido", "ID Cliente", nullptr));
        labelIDCliente->setText(QString());
        label_24->setText(QCoreApplication::translate("AdicionarPedido", "Nome", nullptr));
        labelNomeCliente->setText(QString());
        label_25->setText(QCoreApplication::translate("AdicionarPedido", "Endere\303\247o", nullptr));
        labelEnderecoCliente->setText(QString());
        label_26->setText(QCoreApplication::translate("AdicionarPedido", "Telefone", nullptr));
        labelTelefoneCliente->setText(QString());
        label_4->setText(QCoreApplication::translate("AdicionarPedido", "Email", nullptr));
        labelEmailCliente->setText(QString());
        label_29->setText(QCoreApplication::translate("AdicionarPedido", "Data", nullptr));
        labelDataCompra->setText(QString());
        label_30->setText(QCoreApplication::translate("AdicionarPedido", "Valor Total da Compra", nullptr));
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
