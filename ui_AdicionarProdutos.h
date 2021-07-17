/********************************************************************************
** Form generated from reading UI file 'AdicionarProdutos.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADICIONARPRODUTOS_H
#define UI_ADICIONARPRODUTOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdicionarProdutos
{
public:
    QTabWidget *tabProdutos;
    QWidget *tabIncluir;
    QFrame *frame;
    QWidget *widget;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *txtCodigoIncluir;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *txtNomeIncluir;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *txtPrecoIncluir;
    QHBoxLayout *horizontalLayout_8;
    QLineEdit *txtQtdeIncluir;
    QHBoxLayout *horizontalLayout_9;
    QTextEdit *textEditCadastroDescricao;
    QPushButton *btnIncluir;
    QWidget *tabListar;
    QFrame *frDadosEdit;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_13;
    QVBoxLayout *verticalLayout_9;
    QLineEdit *lineEditCodigo;
    QHBoxLayout *horizontalLayout_14;
    QLineEdit *txtEditNome;
    QHBoxLayout *horizontalLayout_15;
    QLineEdit *txtQtdeEdit;
    QHBoxLayout *horizontalLayout_16;
    QLineEdit *txtPrecoEdit;
    QVBoxLayout *verticalLayout_10;
    QPushButton *btnEdit;
    QPushButton *btnExcluir;
    QHBoxLayout *horizontalLayout_17;
    QTextEdit *textEditDescricaoBusca;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_12;
    QComboBox *comboBox;
    QLineEdit *txtKeySearch;
    QPushButton *btnPesquisar;
    QTableWidget *twProdutos;

    void setupUi(QDialog *AdicionarProdutos)
    {
        if (AdicionarProdutos->objectName().isEmpty())
            AdicionarProdutos->setObjectName(QString::fromUtf8("AdicionarProdutos"));
        AdicionarProdutos->resize(652, 504);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 85, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 170, 127, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(255, 127, 63, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(127, 42, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(170, 57, 0, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush2);
        QBrush brush7(QColor(255, 255, 220, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush8(QColor(0, 0, 0, 128));
        brush8.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        AdicionarProdutos->setPalette(palette);
        tabProdutos = new QTabWidget(AdicionarProdutos);
        tabProdutos->setObjectName(QString::fromUtf8("tabProdutos"));
        tabProdutos->setEnabled(true);
        tabProdutos->setGeometry(QRect(20, 20, 611, 461));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush2);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush1);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        tabProdutos->setPalette(palette1);
        tabProdutos->setFocusPolicy(Qt::StrongFocus);
        tabProdutos->setContextMenuPolicy(Qt::DefaultContextMenu);
        tabProdutos->setLayoutDirection(Qt::LeftToRight);
        tabIncluir = new QWidget();
        tabIncluir->setObjectName(QString::fromUtf8("tabIncluir"));
        frame = new QFrame(tabIncluir);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(20, 10, 571, 411));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush2);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        frame->setPalette(palette2);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        widget = new QWidget(frame);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 20, 551, 341));
        verticalLayout_6 = new QVBoxLayout(widget);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        txtCodigoIncluir = new QLineEdit(widget);
        txtCodigoIncluir->setObjectName(QString::fromUtf8("txtCodigoIncluir"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush6);
        QBrush brush9(QColor(127, 127, 127, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush9);
        QBrush brush10(QColor(170, 170, 170, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush10);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush6);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush9);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush10);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush9);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush9);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush10);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush9);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush9);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        txtCodigoIncluir->setPalette(palette3);

        horizontalLayout_5->addWidget(txtCodigoIncluir);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        txtNomeIncluir = new QLineEdit(widget);
        txtNomeIncluir->setObjectName(QString::fromUtf8("txtNomeIncluir"));

        horizontalLayout_6->addWidget(txtNomeIncluir);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        txtPrecoIncluir = new QLineEdit(widget);
        txtPrecoIncluir->setObjectName(QString::fromUtf8("txtPrecoIncluir"));

        horizontalLayout_7->addWidget(txtPrecoIncluir);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        txtQtdeIncluir = new QLineEdit(widget);
        txtQtdeIncluir->setObjectName(QString::fromUtf8("txtQtdeIncluir"));

        horizontalLayout_8->addWidget(txtQtdeIncluir);


        verticalLayout_2->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        textEditCadastroDescricao = new QTextEdit(widget);
        textEditCadastroDescricao->setObjectName(QString::fromUtf8("textEditCadastroDescricao"));
        textEditCadastroDescricao->setPlaceholderText(QString::fromUtf8("Descri\303\247\303\243o do Produto. (Opcional)"));

        horizontalLayout_9->addWidget(textEditCadastroDescricao);


        verticalLayout_2->addLayout(horizontalLayout_9);


        verticalLayout_5->addLayout(verticalLayout_2);


        verticalLayout_6->addLayout(verticalLayout_5);

        btnIncluir = new QPushButton(widget);
        btnIncluir->setObjectName(QString::fromUtf8("btnIncluir"));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        btnIncluir->setPalette(palette4);
        btnIncluir->setCheckable(false);

        verticalLayout_6->addWidget(btnIncluir);

        tabProdutos->addTab(tabIncluir, QString());
        tabListar = new QWidget();
        tabListar->setObjectName(QString::fromUtf8("tabListar"));
        frDadosEdit = new QFrame(tabListar);
        frDadosEdit->setObjectName(QString::fromUtf8("frDadosEdit"));
        frDadosEdit->setGeometry(QRect(410, 40, 551, 381));
        frDadosEdit->setFrameShape(QFrame::StyledPanel);
        frDadosEdit->setFrameShadow(QFrame::Raised);
        layoutWidget_2 = new QWidget(frDadosEdit);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(0, 0, 191, 251));
        verticalLayout_8 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        lineEditCodigo = new QLineEdit(layoutWidget_2);
        lineEditCodigo->setObjectName(QString::fromUtf8("lineEditCodigo"));

        verticalLayout_9->addWidget(lineEditCodigo);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        txtEditNome = new QLineEdit(layoutWidget_2);
        txtEditNome->setObjectName(QString::fromUtf8("txtEditNome"));

        horizontalLayout_14->addWidget(txtEditNome);


        verticalLayout_9->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        txtQtdeEdit = new QLineEdit(layoutWidget_2);
        txtQtdeEdit->setObjectName(QString::fromUtf8("txtQtdeEdit"));

        horizontalLayout_15->addWidget(txtQtdeEdit);


        verticalLayout_9->addLayout(horizontalLayout_15);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        txtPrecoEdit = new QLineEdit(layoutWidget_2);
        txtPrecoEdit->setObjectName(QString::fromUtf8("txtPrecoEdit"));

        horizontalLayout_16->addWidget(txtPrecoEdit);


        verticalLayout_9->addLayout(horizontalLayout_16);


        horizontalLayout_13->addLayout(verticalLayout_9);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        btnEdit = new QPushButton(layoutWidget_2);
        btnEdit->setObjectName(QString::fromUtf8("btnEdit"));

        verticalLayout_10->addWidget(btnEdit);

        btnExcluir = new QPushButton(layoutWidget_2);
        btnExcluir->setObjectName(QString::fromUtf8("btnExcluir"));

        verticalLayout_10->addWidget(btnExcluir);


        horizontalLayout_13->addLayout(verticalLayout_10);


        verticalLayout_8->addLayout(horizontalLayout_13);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        textEditDescricaoBusca = new QTextEdit(layoutWidget_2);
        textEditDescricaoBusca->setObjectName(QString::fromUtf8("textEditDescricaoBusca"));

        horizontalLayout_17->addWidget(textEditDescricaoBusca);


        verticalLayout_8->addLayout(horizontalLayout_17);

        widget1 = new QWidget(tabListar);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(0, 10, 401, 421));
        verticalLayout_7 = new QVBoxLayout(widget1);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(0);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalLayout_12->setContentsMargins(0, -1, 0, -1);
        comboBox = new QComboBox(widget1);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setMaximumSize(QSize(59, 16777215));
        comboBox->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);

        horizontalLayout_12->addWidget(comboBox);

        txtKeySearch = new QLineEdit(widget1);
        txtKeySearch->setObjectName(QString::fromUtf8("txtKeySearch"));

        horizontalLayout_12->addWidget(txtKeySearch);

        btnPesquisar = new QPushButton(widget1);
        btnPesquisar->setObjectName(QString::fromUtf8("btnPesquisar"));
        QPalette palette5;
        QBrush brush11(QColor(85, 170, 0, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush11);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush11);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush11);
        btnPesquisar->setPalette(palette5);

        horizontalLayout_12->addWidget(btnPesquisar);


        verticalLayout_7->addLayout(horizontalLayout_12);

        twProdutos = new QTableWidget(widget1);
        twProdutos->setObjectName(QString::fromUtf8("twProdutos"));

        verticalLayout_7->addWidget(twProdutos);

        tabProdutos->addTab(tabListar, QString());

        retranslateUi(AdicionarProdutos);

        tabProdutos->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AdicionarProdutos);
    } // setupUi

    void retranslateUi(QDialog *AdicionarProdutos)
    {
        AdicionarProdutos->setWindowTitle(QCoreApplication::translate("AdicionarProdutos", "Estoque de Produtos", nullptr));
#if QT_CONFIG(tooltip)
        tabProdutos->setToolTip(QCoreApplication::translate("AdicionarProdutos", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        txtCodigoIncluir->setPlaceholderText(QCoreApplication::translate("AdicionarProdutos", "C\303\263digo do Produto", nullptr));
        txtNomeIncluir->setPlaceholderText(QCoreApplication::translate("AdicionarProdutos", "Nome do Produto", nullptr));
        txtPrecoIncluir->setInputMask(QString());
        txtPrecoIncluir->setPlaceholderText(QCoreApplication::translate("AdicionarProdutos", "Pre\303\247o Unit\303\241rio R$", nullptr));
        txtQtdeIncluir->setPlaceholderText(QCoreApplication::translate("AdicionarProdutos", "Quantidade", nullptr));
        btnIncluir->setText(QCoreApplication::translate("AdicionarProdutos", "Incluir", nullptr));
        tabProdutos->setTabText(tabProdutos->indexOf(tabIncluir), QCoreApplication::translate("AdicionarProdutos", "Cadastrar", nullptr));
        lineEditCodigo->setPlaceholderText(QCoreApplication::translate("AdicionarProdutos", "C\303\263digo", nullptr));
        txtEditNome->setPlaceholderText(QCoreApplication::translate("AdicionarProdutos", "Nome", nullptr));
        txtQtdeEdit->setPlaceholderText(QCoreApplication::translate("AdicionarProdutos", "Quantidade               ", nullptr));
        txtPrecoEdit->setPlaceholderText(QCoreApplication::translate("AdicionarProdutos", "Pre\303\247o Unit\303\241rio R$      ", nullptr));
        btnEdit->setText(QCoreApplication::translate("AdicionarProdutos", "Editar", nullptr));
        btnExcluir->setText(QCoreApplication::translate("AdicionarProdutos", "Excluir", nullptr));
        textEditDescricaoBusca->setPlaceholderText(QCoreApplication::translate("AdicionarProdutos", "Descri\303\247\303\243o do Produto", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("AdicionarProdutos", "C\303\263digo", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("AdicionarProdutos", "Nome", nullptr));

        btnPesquisar->setText(QCoreApplication::translate("AdicionarProdutos", "Pesquisar", nullptr));
        tabProdutos->setTabText(tabProdutos->indexOf(tabListar), QCoreApplication::translate("AdicionarProdutos", "Lista de Produtos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdicionarProdutos: public Ui_AdicionarProdutos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADICIONARPRODUTOS_H
