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
    QWidget *layoutWidget;
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
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_12;
    QComboBox *comboBox;
    QLineEdit *txtKeySearch;
    QPushButton *btnPesquisar;
    QTableWidget *twProdutos;
    QComboBox *comboBoxOrdem;

    void setupUi(QDialog *AdicionarProdutos)
    {
        if (AdicionarProdutos->objectName().isEmpty())
            AdicionarProdutos->setObjectName(QString::fromUtf8("AdicionarProdutos"));
        AdicionarProdutos->setWindowModality(Qt::ApplicationModal);
        AdicionarProdutos->resize(652, 504);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QLinearGradient gradient(1, 0.494409, 1, 0.942727);
        gradient.setSpread(QGradient::ReflectSpread);
        gradient.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient.setColorAt(0.198864, QColor(243, 112, 25, 251));
        gradient.setColorAt(0.738636, QColor(221, 77, 48, 255));
        QBrush brush1(gradient);
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
        QLinearGradient gradient1(1, 0.494409, 1, 0.942727);
        gradient1.setSpread(QGradient::ReflectSpread);
        gradient1.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient1.setColorAt(0.198864, QColor(243, 112, 25, 251));
        gradient1.setColorAt(0.738636, QColor(221, 77, 48, 255));
        QBrush brush7(gradient1);
        palette.setBrush(QPalette::Active, QPalette::Base, brush7);
        QLinearGradient gradient2(1, 0.494409, 1, 0.942727);
        gradient2.setSpread(QGradient::ReflectSpread);
        gradient2.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient2.setColorAt(0.198864, QColor(243, 112, 25, 251));
        gradient2.setColorAt(0.738636, QColor(221, 77, 48, 255));
        QBrush brush8(gradient2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush8);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush2);
        QBrush brush9(QColor(255, 255, 220, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush10(QColor(0, 0, 0, 128));
        brush10.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QLinearGradient gradient3(1, 0.494409, 1, 0.942727);
        gradient3.setSpread(QGradient::ReflectSpread);
        gradient3.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient3.setColorAt(0.198864, QColor(243, 112, 25, 251));
        gradient3.setColorAt(0.738636, QColor(221, 77, 48, 255));
        QBrush brush11(gradient3);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush11);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QLinearGradient gradient4(1, 0.494409, 1, 0.942727);
        gradient4.setSpread(QGradient::ReflectSpread);
        gradient4.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient4.setColorAt(0.198864, QColor(243, 112, 25, 251));
        gradient4.setColorAt(0.738636, QColor(221, 77, 48, 255));
        QBrush brush12(gradient4);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush12);
        QLinearGradient gradient5(1, 0.494409, 1, 0.942727);
        gradient5.setSpread(QGradient::ReflectSpread);
        gradient5.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient5.setColorAt(0.198864, QColor(243, 112, 25, 251));
        gradient5.setColorAt(0.738636, QColor(221, 77, 48, 255));
        QBrush brush13(gradient5);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush13);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        QLinearGradient gradient6(1, 0.494409, 1, 0.942727);
        gradient6.setSpread(QGradient::ReflectSpread);
        gradient6.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient6.setColorAt(0.198864, QColor(243, 112, 25, 251));
        gradient6.setColorAt(0.738636, QColor(221, 77, 48, 255));
        QBrush brush14(gradient6);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush14);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        QLinearGradient gradient7(1, 0.494409, 1, 0.942727);
        gradient7.setSpread(QGradient::ReflectSpread);
        gradient7.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient7.setColorAt(0.198864, QColor(243, 112, 25, 251));
        gradient7.setColorAt(0.738636, QColor(221, 77, 48, 255));
        QBrush brush15(gradient7);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush15);
        QLinearGradient gradient8(1, 0.494409, 1, 0.942727);
        gradient8.setSpread(QGradient::ReflectSpread);
        gradient8.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient8.setColorAt(0.198864, QColor(243, 112, 25, 251));
        gradient8.setColorAt(0.738636, QColor(221, 77, 48, 255));
        QBrush brush16(gradient8);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush16);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        QBrush brush17(QColor(255, 85, 0, 255));
        brush17.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush17);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush10);
#endif
        AdicionarProdutos->setPalette(palette);
        QFont font;
        font.setFamily(QString::fromUtf8("Courier"));
        AdicionarProdutos->setFont(font);
        AdicionarProdutos->setStyleSheet(QString::fromUtf8("QDialog{background:qlineargradient(spread:reflect, x1:1, y1:0.494409, x2:1, y2:0.942727, stop:0.198864 rgba(243, 112, 25, 251), stop:0.738636 rgba(221, 77, 48, 255))}"));
        AdicionarProdutos->setSizeGripEnabled(false);
        AdicionarProdutos->setModal(false);
        tabProdutos = new QTabWidget(AdicionarProdutos);
        tabProdutos->setObjectName(QString::fromUtf8("tabProdutos"));
        tabProdutos->setEnabled(true);
        tabProdutos->setGeometry(QRect(20, 20, 611, 461));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush17);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush17);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush2);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush17);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush17);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush17);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush17);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush17);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush17);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush17);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush17);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush17);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush10);
#endif
        tabProdutos->setPalette(palette1);
        tabProdutos->setFont(font);
        tabProdutos->setFocusPolicy(Qt::StrongFocus);
        tabProdutos->setContextMenuPolicy(Qt::DefaultContextMenu);
        tabProdutos->setLayoutDirection(Qt::LeftToRight);
        tabProdutos->setStyleSheet(QString::fromUtf8("QMainWindow{background:qlineargradient(spread:reflect, x1:1, y1:0.494409, x2:1, y2:0.942727, stop:0.198864 rgba(243, 112, 25, 251), stop:0.738636 rgba(221, 77, 48, 255))}"));
        tabProdutos->setTabPosition(QTabWidget::North);
        tabProdutos->setTabShape(QTabWidget::Rounded);
        tabProdutos->setElideMode(Qt::ElideLeft);
        tabProdutos->setUsesScrollButtons(true);
        tabProdutos->setDocumentMode(false);
        tabProdutos->setTabsClosable(false);
        tabProdutos->setMovable(true);
        tabProdutos->setTabBarAutoHide(false);
        tabIncluir = new QWidget();
        tabIncluir->setObjectName(QString::fromUtf8("tabIncluir"));
        tabIncluir->setFont(font);
        frame = new QFrame(tabIncluir);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(20, 10, 571, 411));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush17);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush17);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush2);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush17);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush17);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush17);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush17);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush17);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush17);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush10);
#endif
        frame->setPalette(palette2);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        layoutWidget = new QWidget(frame);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 551, 341));
        verticalLayout_6 = new QVBoxLayout(layoutWidget);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        txtCodigoIncluir = new QLineEdit(layoutWidget);
        txtCodigoIncluir->setObjectName(QString::fromUtf8("txtCodigoIncluir"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush6);
        QBrush brush18(QColor(127, 127, 127, 255));
        brush18.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush18);
        QBrush brush19(QColor(170, 170, 170, 255));
        brush19.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush19);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush6);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush18);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush19);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush18);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush18);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush19);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush18);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush18);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush10);
#endif
        txtCodigoIncluir->setPalette(palette3);
        txtCodigoIncluir->setFont(font);

        horizontalLayout_5->addWidget(txtCodigoIncluir);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        txtNomeIncluir = new QLineEdit(layoutWidget);
        txtNomeIncluir->setObjectName(QString::fromUtf8("txtNomeIncluir"));
        txtNomeIncluir->setFont(font);

        horizontalLayout_6->addWidget(txtNomeIncluir);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        txtPrecoIncluir = new QLineEdit(layoutWidget);
        txtPrecoIncluir->setObjectName(QString::fromUtf8("txtPrecoIncluir"));
        txtPrecoIncluir->setFont(font);

        horizontalLayout_7->addWidget(txtPrecoIncluir);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        txtQtdeIncluir = new QLineEdit(layoutWidget);
        txtQtdeIncluir->setObjectName(QString::fromUtf8("txtQtdeIncluir"));
        txtQtdeIncluir->setFont(font);

        horizontalLayout_8->addWidget(txtQtdeIncluir);


        verticalLayout_2->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        textEditCadastroDescricao = new QTextEdit(layoutWidget);
        textEditCadastroDescricao->setObjectName(QString::fromUtf8("textEditCadastroDescricao"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Courier"));
        font1.setBold(false);
        font1.setWeight(50);
        font1.setStrikeOut(false);
        font1.setKerning(true);
        textEditCadastroDescricao->setFont(font1);
        textEditCadastroDescricao->setFrameShape(QFrame::StyledPanel);
        textEditCadastroDescricao->setFrameShadow(QFrame::Sunken);
        textEditCadastroDescricao->setLineWidth(1);
        textEditCadastroDescricao->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEditCadastroDescricao->setTabChangesFocus(false);
        textEditCadastroDescricao->setUndoRedoEnabled(true);
        textEditCadastroDescricao->setLineWrapMode(QTextEdit::WidgetWidth);
        textEditCadastroDescricao->setReadOnly(false);
        textEditCadastroDescricao->setOverwriteMode(false);
        textEditCadastroDescricao->setAcceptRichText(true);
        textEditCadastroDescricao->setTextInteractionFlags(Qt::TextEditorInteraction);
        textEditCadastroDescricao->setPlaceholderText(QString::fromUtf8("Descri\303\247\303\243o do Produto. (Opcional)"));

        horizontalLayout_9->addWidget(textEditCadastroDescricao);


        verticalLayout_2->addLayout(horizontalLayout_9);


        verticalLayout_5->addLayout(verticalLayout_2);


        verticalLayout_6->addLayout(verticalLayout_5);

        btnIncluir = new QPushButton(layoutWidget);
        btnIncluir->setObjectName(QString::fromUtf8("btnIncluir"));
        QPalette palette4;
        QLinearGradient gradient9(0.994318, 0.915, 0.994318, 0.488);
        gradient9.setSpread(QGradient::ReflectSpread);
        gradient9.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient9.setColorAt(0.1875, QColor(128, 128, 128, 255));
        gradient9.setColorAt(1, QColor(211, 211, 211, 255));
        QBrush brush20(gradient9);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush20);
        QLinearGradient gradient10(0.994318, 0.915, 0.994318, 0.488);
        gradient10.setSpread(QGradient::ReflectSpread);
        gradient10.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient10.setColorAt(0.1875, QColor(128, 128, 128, 255));
        gradient10.setColorAt(1, QColor(211, 211, 211, 255));
        QBrush brush21(gradient10);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush21);
        QLinearGradient gradient11(0.994318, 0.915, 0.994318, 0.488);
        gradient11.setSpread(QGradient::ReflectSpread);
        gradient11.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient11.setColorAt(0.1875, QColor(128, 128, 128, 255));
        gradient11.setColorAt(1, QColor(211, 211, 211, 255));
        QBrush brush22(gradient11);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush22);
        QLinearGradient gradient12(0.994318, 0.915, 0.994318, 0.488);
        gradient12.setSpread(QGradient::ReflectSpread);
        gradient12.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient12.setColorAt(0.1875, QColor(128, 128, 128, 255));
        gradient12.setColorAt(1, QColor(211, 211, 211, 255));
        QBrush brush23(gradient12);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush23);
        QLinearGradient gradient13(0.994318, 0.915, 0.994318, 0.488);
        gradient13.setSpread(QGradient::ReflectSpread);
        gradient13.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient13.setColorAt(0.1875, QColor(128, 128, 128, 255));
        gradient13.setColorAt(1, QColor(211, 211, 211, 255));
        QBrush brush24(gradient13);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush24);
        QLinearGradient gradient14(0.994318, 0.915, 0.994318, 0.488);
        gradient14.setSpread(QGradient::ReflectSpread);
        gradient14.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient14.setColorAt(0.1875, QColor(128, 128, 128, 255));
        gradient14.setColorAt(1, QColor(211, 211, 211, 255));
        QBrush brush25(gradient14);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush25);
        QLinearGradient gradient15(0.994318, 0.915, 0.994318, 0.488);
        gradient15.setSpread(QGradient::ReflectSpread);
        gradient15.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient15.setColorAt(0.1875, QColor(128, 128, 128, 255));
        gradient15.setColorAt(1, QColor(211, 211, 211, 255));
        QBrush brush26(gradient15);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush26);
        QLinearGradient gradient16(0.994318, 0.915, 0.994318, 0.488);
        gradient16.setSpread(QGradient::ReflectSpread);
        gradient16.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient16.setColorAt(0.1875, QColor(128, 128, 128, 255));
        gradient16.setColorAt(1, QColor(211, 211, 211, 255));
        QBrush brush27(gradient16);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush27);
        QLinearGradient gradient17(0.994318, 0.915, 0.994318, 0.488);
        gradient17.setSpread(QGradient::ReflectSpread);
        gradient17.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient17.setColorAt(0.1875, QColor(128, 128, 128, 255));
        gradient17.setColorAt(1, QColor(211, 211, 211, 255));
        QBrush brush28(gradient17);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush28);
        btnIncluir->setPalette(palette4);
        QFont font2;
        font2.setFamily(QString::fromUtf8("Courier"));
        font2.setKerning(true);
        font2.setStyleStrategy(QFont::PreferDefault);
        btnIncluir->setFont(font2);
        btnIncluir->setAutoFillBackground(false);
        btnIncluir->setStyleSheet(QString::fromUtf8("QPushButton{background:qlineargradient(spread:reflect, x1:0.994318, y1:0.915, x2:0.994318, y2:0.488, stop:0.1875 rgba(128, 128, 128, 255), stop:1 rgba(211, 211, 211, 255))}\n"
"\n"
""));
#if QT_CONFIG(shortcut)
        btnIncluir->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
        btnIncluir->setCheckable(false);
        btnIncluir->setAutoDefault(false);
        btnIncluir->setFlat(false);

        verticalLayout_6->addWidget(btnIncluir);

        tabProdutos->addTab(tabIncluir, QString());
        tabListar = new QWidget();
        tabListar->setObjectName(QString::fromUtf8("tabListar"));
        frDadosEdit = new QFrame(tabListar);
        frDadosEdit->setObjectName(QString::fromUtf8("frDadosEdit"));
        frDadosEdit->setGeometry(QRect(410, 40, 551, 261));
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
        lineEditCodigo->setFont(font);
        lineEditCodigo->setAutoFillBackground(false);

        verticalLayout_9->addWidget(lineEditCodigo);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        txtEditNome = new QLineEdit(layoutWidget_2);
        txtEditNome->setObjectName(QString::fromUtf8("txtEditNome"));
        txtEditNome->setFont(font);
        txtEditNome->setAutoFillBackground(false);

        horizontalLayout_14->addWidget(txtEditNome);


        verticalLayout_9->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        txtQtdeEdit = new QLineEdit(layoutWidget_2);
        txtQtdeEdit->setObjectName(QString::fromUtf8("txtQtdeEdit"));
        txtQtdeEdit->setFont(font);
        txtQtdeEdit->setAutoFillBackground(false);

        horizontalLayout_15->addWidget(txtQtdeEdit);


        verticalLayout_9->addLayout(horizontalLayout_15);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        txtPrecoEdit = new QLineEdit(layoutWidget_2);
        txtPrecoEdit->setObjectName(QString::fromUtf8("txtPrecoEdit"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Courier"));
        font3.setPointSize(8);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setUnderline(false);
        font3.setWeight(50);
        font3.setStrikeOut(false);
        font3.setKerning(true);
        txtPrecoEdit->setFont(font3);
        txtPrecoEdit->setAutoFillBackground(false);

        horizontalLayout_16->addWidget(txtPrecoEdit);


        verticalLayout_9->addLayout(horizontalLayout_16);


        horizontalLayout_13->addLayout(verticalLayout_9);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        btnEdit = new QPushButton(layoutWidget_2);
        btnEdit->setObjectName(QString::fromUtf8("btnEdit"));
        btnEdit->setFont(font);
        btnEdit->setAcceptDrops(false);
        btnEdit->setAutoFillBackground(false);
        btnEdit->setStyleSheet(QString::fromUtf8("QPushButton{background:qlineargradient(spread:reflect, x1:0.994318, y1:0.915, x2:0.994318, y2:0.488, stop:0.1875 rgba(128, 128, 128, 255), stop:1 rgba(211, 211, 211, 255))}\n"
"\n"
""));
        btnEdit->setCheckable(false);
        btnEdit->setChecked(false);
        btnEdit->setAutoDefault(false);
        btnEdit->setFlat(false);

        verticalLayout_10->addWidget(btnEdit);

        btnExcluir = new QPushButton(layoutWidget_2);
        btnExcluir->setObjectName(QString::fromUtf8("btnExcluir"));
        btnExcluir->setFont(font);
        btnExcluir->setAutoFillBackground(false);
        btnExcluir->setStyleSheet(QString::fromUtf8("QPushButton{background:qlineargradient(spread:reflect, x1:0.994318, y1:0.915, x2:0.994318, y2:0.488, stop:0.1875 rgba(128, 128, 128, 255), stop:1 rgba(211, 211, 211, 255))}\n"
"\n"
""));

        verticalLayout_10->addWidget(btnExcluir);


        horizontalLayout_13->addLayout(verticalLayout_10);


        verticalLayout_8->addLayout(horizontalLayout_13);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        textEditDescricaoBusca = new QTextEdit(layoutWidget_2);
        textEditDescricaoBusca->setObjectName(QString::fromUtf8("textEditDescricaoBusca"));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::BrightText, brush17);
        palette5.setBrush(QPalette::Inactive, QPalette::BrightText, brush17);
        palette5.setBrush(QPalette::Disabled, QPalette::BrightText, brush17);
        textEditDescricaoBusca->setPalette(palette5);
        QFont font4;
        font4.setFamily(QString::fromUtf8("Courier"));
        font4.setPointSize(8);
        textEditDescricaoBusca->setFont(font4);
        textEditDescricaoBusca->setAutoFillBackground(true);

        horizontalLayout_17->addWidget(textEditDescricaoBusca);


        verticalLayout_8->addLayout(horizontalLayout_17);

        layoutWidget1 = new QWidget(tabListar);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 10, 401, 421));
        verticalLayout_7 = new QVBoxLayout(layoutWidget1);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(0);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalLayout_12->setContentsMargins(0, -1, 0, -1);
        comboBox = new QComboBox(layoutWidget1);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setMaximumSize(QSize(59, 16777215));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Sitka Text"));
        comboBox->setFont(font5);
        comboBox->setAutoFillBackground(false);
        comboBox->setStyleSheet(QString::fromUtf8("QComboBox{background:qlineargradient(spread:reflect, x1:0.994318, y1:0.915, x2:0.994318, y2:0.488, stop:0.1875 rgba(128, 128, 128, 255), stop:1 rgba(211, 211, 211, 255))}"));
        comboBox->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);

        horizontalLayout_12->addWidget(comboBox);

        txtKeySearch = new QLineEdit(layoutWidget1);
        txtKeySearch->setObjectName(QString::fromUtf8("txtKeySearch"));
        txtKeySearch->setFont(font);
        txtKeySearch->setAutoFillBackground(false);

        horizontalLayout_12->addWidget(txtKeySearch);

        btnPesquisar = new QPushButton(layoutWidget1);
        btnPesquisar->setObjectName(QString::fromUtf8("btnPesquisar"));
        QPalette palette6;
        QLinearGradient gradient18(0.994318, 0.915, 0.994318, 0.488);
        gradient18.setSpread(QGradient::ReflectSpread);
        gradient18.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient18.setColorAt(0.1875, QColor(128, 128, 128, 255));
        gradient18.setColorAt(1, QColor(211, 211, 211, 255));
        QBrush brush29(gradient18);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush29);
        QLinearGradient gradient19(0.994318, 0.915, 0.994318, 0.488);
        gradient19.setSpread(QGradient::ReflectSpread);
        gradient19.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient19.setColorAt(0.1875, QColor(128, 128, 128, 255));
        gradient19.setColorAt(1, QColor(211, 211, 211, 255));
        QBrush brush30(gradient19);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush30);
        QLinearGradient gradient20(0.994318, 0.915, 0.994318, 0.488);
        gradient20.setSpread(QGradient::ReflectSpread);
        gradient20.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient20.setColorAt(0.1875, QColor(128, 128, 128, 255));
        gradient20.setColorAt(1, QColor(211, 211, 211, 255));
        QBrush brush31(gradient20);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush31);
        QLinearGradient gradient21(0.994318, 0.915, 0.994318, 0.488);
        gradient21.setSpread(QGradient::ReflectSpread);
        gradient21.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient21.setColorAt(0.1875, QColor(128, 128, 128, 255));
        gradient21.setColorAt(1, QColor(211, 211, 211, 255));
        QBrush brush32(gradient21);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush32);
        QLinearGradient gradient22(0.994318, 0.915, 0.994318, 0.488);
        gradient22.setSpread(QGradient::ReflectSpread);
        gradient22.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient22.setColorAt(0.1875, QColor(128, 128, 128, 255));
        gradient22.setColorAt(1, QColor(211, 211, 211, 255));
        QBrush brush33(gradient22);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush33);
        QLinearGradient gradient23(0.994318, 0.915, 0.994318, 0.488);
        gradient23.setSpread(QGradient::ReflectSpread);
        gradient23.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient23.setColorAt(0.1875, QColor(128, 128, 128, 255));
        gradient23.setColorAt(1, QColor(211, 211, 211, 255));
        QBrush brush34(gradient23);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush34);
        QLinearGradient gradient24(0.994318, 0.915, 0.994318, 0.488);
        gradient24.setSpread(QGradient::ReflectSpread);
        gradient24.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient24.setColorAt(0.1875, QColor(128, 128, 128, 255));
        gradient24.setColorAt(1, QColor(211, 211, 211, 255));
        QBrush brush35(gradient24);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush35);
        QLinearGradient gradient25(0.994318, 0.915, 0.994318, 0.488);
        gradient25.setSpread(QGradient::ReflectSpread);
        gradient25.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient25.setColorAt(0.1875, QColor(128, 128, 128, 255));
        gradient25.setColorAt(1, QColor(211, 211, 211, 255));
        QBrush brush36(gradient25);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush36);
        QLinearGradient gradient26(0.994318, 0.915, 0.994318, 0.488);
        gradient26.setSpread(QGradient::ReflectSpread);
        gradient26.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient26.setColorAt(0.1875, QColor(128, 128, 128, 255));
        gradient26.setColorAt(1, QColor(211, 211, 211, 255));
        QBrush brush37(gradient26);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush37);
        btnPesquisar->setPalette(palette6);
        btnPesquisar->setFont(font);
        btnPesquisar->setAutoFillBackground(false);
        btnPesquisar->setStyleSheet(QString::fromUtf8("QPushButton{background:qlineargradient(spread:reflect, x1:0.994318, y1:0.915, x2:0.994318, y2:0.488, stop:0.1875 rgba(128, 128, 128, 255), stop:1 rgba(211, 211, 211, 255))}\n"
"\n"
""));

        horizontalLayout_12->addWidget(btnPesquisar);


        verticalLayout_7->addLayout(horizontalLayout_12);

        twProdutos = new QTableWidget(layoutWidget1);
        twProdutos->setObjectName(QString::fromUtf8("twProdutos"));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::BrightText, brush17);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush6);
        QBrush brush38(QColor(250, 128, 114, 255));
        brush38.setStyle(Qt::SolidPattern);
        palette7.setBrush(QPalette::Active, QPalette::Highlight, brush38);
        palette7.setBrush(QPalette::Active, QPalette::HighlightedText, brush6);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipBase, brush3);
        palette7.setBrush(QPalette::Inactive, QPalette::BrightText, brush17);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::Highlight, brush38);
        palette7.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush3);
        palette7.setBrush(QPalette::Disabled, QPalette::BrightText, brush17);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush17);
        palette7.setBrush(QPalette::Disabled, QPalette::Highlight, brush38);
        palette7.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush3);
        twProdutos->setPalette(palette7);
        twProdutos->setFont(font);
        twProdutos->setAutoFillBackground(true);
        twProdutos->setStyleSheet(QString::fromUtf8("selection-background-color: rgb(250, 128, 114);\n"
""));
        twProdutos->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        verticalLayout_7->addWidget(twProdutos);

        comboBoxOrdem = new QComboBox(tabListar);
        comboBoxOrdem->addItem(QString());
        comboBoxOrdem->addItem(QString());
        comboBoxOrdem->addItem(QString());
        comboBoxOrdem->addItem(QString());
        comboBoxOrdem->setObjectName(QString::fromUtf8("comboBoxOrdem"));
        comboBoxOrdem->setGeometry(QRect(410, 410, 139, 20));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Sitka Text"));
        font6.setStyleStrategy(QFont::PreferDefault);
        comboBoxOrdem->setFont(font6);
        comboBoxOrdem->setLayoutDirection(Qt::LeftToRight);
        comboBoxOrdem->setStyleSheet(QString::fromUtf8("QComboBox{background:qlineargradient(spread:reflect, x1:0.994318, y1:0.915, x2:0.994318, y2:0.488, stop:0.1875 rgba(128, 128, 128, 255), stop:1 rgba(211, 211, 211, 255))}\n"
"\n"
""));
        comboBoxOrdem->setInsertPolicy(QComboBox::NoInsert);
        comboBoxOrdem->setSizeAdjustPolicy(QComboBox::AdjustToContents);
        comboBoxOrdem->setDuplicatesEnabled(false);
        comboBoxOrdem->setFrame(true);
        tabProdutos->addTab(tabListar, QString());

        retranslateUi(AdicionarProdutos);

        tabProdutos->setCurrentIndex(0);
        btnIncluir->setDefault(false);
        btnEdit->setDefault(false);


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
#if QT_CONFIG(tooltip)
        textEditCadastroDescricao->setToolTip(QCoreApplication::translate("AdicionarProdutos", "<html><head/><body><p align=\"justify\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        btnIncluir->setText(QCoreApplication::translate("AdicionarProdutos", "Incluir", nullptr));
        tabProdutos->setTabText(tabProdutos->indexOf(tabIncluir), QCoreApplication::translate("AdicionarProdutos", "Cadastrar", nullptr));
        lineEditCodigo->setPlaceholderText(QCoreApplication::translate("AdicionarProdutos", "C\303\263digo", nullptr));
        txtEditNome->setPlaceholderText(QCoreApplication::translate("AdicionarProdutos", "Nome", nullptr));
        txtQtdeEdit->setPlaceholderText(QCoreApplication::translate("AdicionarProdutos", "Quantidade               ", nullptr));
        txtPrecoEdit->setPlaceholderText(QCoreApplication::translate("AdicionarProdutos", "Pre\303\247o Unit\303\241rio R$      ", nullptr));
        btnEdit->setText(QCoreApplication::translate("AdicionarProdutos", "Editar", nullptr));
        btnExcluir->setText(QCoreApplication::translate("AdicionarProdutos", "Excluir", nullptr));
#if QT_CONFIG(tooltip)
        textEditDescricaoBusca->setToolTip(QCoreApplication::translate("AdicionarProdutos", "<html><head/><body><p align=\"justify\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        textEditDescricaoBusca->setPlaceholderText(QCoreApplication::translate("AdicionarProdutos", "Descri\303\247\303\243o do Produto", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("AdicionarProdutos", "C\303\263digo", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("AdicionarProdutos", "Nome", nullptr));

        btnPesquisar->setText(QCoreApplication::translate("AdicionarProdutos", "Pesquisar", nullptr));
        comboBoxOrdem->setItemText(0, QCoreApplication::translate("AdicionarProdutos", "Crescente por c\303\263digo", nullptr));
        comboBoxOrdem->setItemText(1, QCoreApplication::translate("AdicionarProdutos", "Crescente por nome", nullptr));
        comboBoxOrdem->setItemText(2, QCoreApplication::translate("AdicionarProdutos", "Decrescente por c\303\263digo", nullptr));
        comboBoxOrdem->setItemText(3, QCoreApplication::translate("AdicionarProdutos", "Decrescente por nome", nullptr));

        tabProdutos->setTabText(tabProdutos->indexOf(tabListar), QCoreApplication::translate("AdicionarProdutos", "Lista de Produtos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdicionarProdutos: public Ui_AdicionarProdutos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADICIONARPRODUTOS_H
