/********************************************************************************
** Form generated from reading UI file 'AdicionarProdutos.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
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
#include <QtWidgets/QLabel>
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
    QLabel *label_2;
    QWidget *tabListar;
    QFrame *frDadosEdit;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_6;
    QLineEdit *lineEditCodigo;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_4;
    QLineEdit *txtEditNome;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label;
    QLineEdit *txtQtdeEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *txtPrecoEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_7;
    QTextEdit *textEditDescricaoBusca_2;
    QPushButton *btnExcluir;
    QPushButton *btnEdit;
    QComboBox *comboBoxOrdem;
    QComboBox *comboBox;
    QLineEdit *txtKeySearch_3;
    QWidget *quadradim;
    QTableWidget *twProdutos;

    void setupUi(QDialog *AdicionarProdutos)
    {
        if (AdicionarProdutos->objectName().isEmpty())
            AdicionarProdutos->setObjectName(QString::fromUtf8("AdicionarProdutos"));
        AdicionarProdutos->setWindowModality(Qt::ApplicationModal);
        AdicionarProdutos->resize(860, 598);
        AdicionarProdutos->setMaximumSize(QSize(860, 598));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QLinearGradient gradient(0, 1, 1, 0);
        gradient.setSpread(QGradient::PadSpread);
        gradient.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient.setColorAt(0, QColor(2, 0, 36, 255));
        gradient.setColorAt(1, QColor(239, 77, 18, 255));
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
        QLinearGradient gradient1(0, 1, 1, 0);
        gradient1.setSpread(QGradient::PadSpread);
        gradient1.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient1.setColorAt(0, QColor(2, 0, 36, 255));
        gradient1.setColorAt(1, QColor(239, 77, 18, 255));
        QBrush brush7(gradient1);
        palette.setBrush(QPalette::Active, QPalette::Base, brush7);
        QLinearGradient gradient2(0, 1, 1, 0);
        gradient2.setSpread(QGradient::PadSpread);
        gradient2.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient2.setColorAt(0, QColor(2, 0, 36, 255));
        gradient2.setColorAt(1, QColor(239, 77, 18, 255));
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
        QLinearGradient gradient3(0, 1, 1, 0);
        gradient3.setSpread(QGradient::PadSpread);
        gradient3.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient3.setColorAt(0, QColor(2, 0, 36, 255));
        gradient3.setColorAt(1, QColor(239, 77, 18, 255));
        QBrush brush11(gradient3);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush11);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QLinearGradient gradient4(0, 1, 1, 0);
        gradient4.setSpread(QGradient::PadSpread);
        gradient4.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient4.setColorAt(0, QColor(2, 0, 36, 255));
        gradient4.setColorAt(1, QColor(239, 77, 18, 255));
        QBrush brush12(gradient4);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush12);
        QLinearGradient gradient5(0, 1, 1, 0);
        gradient5.setSpread(QGradient::PadSpread);
        gradient5.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient5.setColorAt(0, QColor(2, 0, 36, 255));
        gradient5.setColorAt(1, QColor(239, 77, 18, 255));
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
        QLinearGradient gradient6(0, 1, 1, 0);
        gradient6.setSpread(QGradient::PadSpread);
        gradient6.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient6.setColorAt(0, QColor(2, 0, 36, 255));
        gradient6.setColorAt(1, QColor(239, 77, 18, 255));
        QBrush brush14(gradient6);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush14);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        QLinearGradient gradient7(0, 1, 1, 0);
        gradient7.setSpread(QGradient::PadSpread);
        gradient7.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient7.setColorAt(0, QColor(2, 0, 36, 255));
        gradient7.setColorAt(1, QColor(239, 77, 18, 255));
        QBrush brush15(gradient7);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush15);
        QLinearGradient gradient8(0, 1, 1, 0);
        gradient8.setSpread(QGradient::PadSpread);
        gradient8.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient8.setColorAt(0, QColor(2, 0, 36, 255));
        gradient8.setColorAt(1, QColor(239, 77, 18, 255));
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
        font.setFamilies({QString::fromUtf8("Courier")});
        font.setPointSize(8);
        AdicionarProdutos->setFont(font);
        AdicionarProdutos->setCursor(QCursor(Qt::ArrowCursor));
        AdicionarProdutos->setMouseTracking(false);
        AdicionarProdutos->setContextMenuPolicy(Qt::NoContextMenu);
        AdicionarProdutos->setAcceptDrops(true);
        AdicionarProdutos->setAutoFillBackground(false);
        AdicionarProdutos->setStyleSheet(QString::fromUtf8("QDialog{background:qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0 rgba(2, 0, 36, 255), stop:1 rgba(239, 77, 18, 255));\n"
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
"height:23px;\n"
"}\n"
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
""));
        AdicionarProdutos->setSizeGripEnabled(false);
        AdicionarProdutos->setModal(false);
        tabProdutos = new QTabWidget(AdicionarProdutos);
        tabProdutos->setObjectName(QString::fromUtf8("tabProdutos"));
        tabProdutos->setEnabled(true);
        tabProdutos->setGeometry(QRect(30, 20, 811, 551));
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
#if QT_CONFIG(accessibility)
        tabProdutos->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        tabProdutos->setLayoutDirection(Qt::LeftToRight);
        tabProdutos->setStyleSheet(QString::fromUtf8(""));
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
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Courier")});
        tabIncluir->setFont(font1);
        tabIncluir->setStyleSheet(QString::fromUtf8(""));
        frame = new QFrame(tabIncluir);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(110, 80, 571, 411));
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
#if QT_CONFIG(whatsthis)
        frame->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
        frame->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"  border-width:1px;\n"
"  border-radius:4px;\n"
"  border-color:#fff;\n"
"  background:#b5b5b5\n"
"}\n"
"\n"
""));
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
        QBrush brush18(QColor(181, 181, 181, 255));
        brush18.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush18);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush6);
        QBrush brush19(QColor(127, 127, 127, 255));
        brush19.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush19);
        QBrush brush20(QColor(170, 170, 170, 255));
        brush20.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush20);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush18);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush18);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush6);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush18);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush19);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush20);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush18);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush18);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush19);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush18);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush19);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush20);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush19);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush19);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush18);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush18);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush10);
#endif
        txtCodigoIncluir->setPalette(palette3);
        txtCodigoIncluir->setFont(font1);

        horizontalLayout_5->addWidget(txtCodigoIncluir);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        txtNomeIncluir = new QLineEdit(layoutWidget);
        txtNomeIncluir->setObjectName(QString::fromUtf8("txtNomeIncluir"));
        txtNomeIncluir->setFont(font1);

        horizontalLayout_6->addWidget(txtNomeIncluir);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        txtPrecoIncluir = new QLineEdit(layoutWidget);
        txtPrecoIncluir->setObjectName(QString::fromUtf8("txtPrecoIncluir"));
        txtPrecoIncluir->setFont(font1);

        horizontalLayout_7->addWidget(txtPrecoIncluir);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        txtQtdeIncluir = new QLineEdit(layoutWidget);
        txtQtdeIncluir->setObjectName(QString::fromUtf8("txtQtdeIncluir"));
        txtQtdeIncluir->setFont(font1);

        horizontalLayout_8->addWidget(txtQtdeIncluir);


        verticalLayout_2->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        textEditCadastroDescricao = new QTextEdit(layoutWidget);
        textEditCadastroDescricao->setObjectName(QString::fromUtf8("textEditCadastroDescricao"));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Courier")});
        font2.setBold(false);
        font2.setStrikeOut(false);
        font2.setKerning(true);
        textEditCadastroDescricao->setFont(font2);
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

        btnIncluir = new QPushButton(frame);
        btnIncluir->setObjectName(QString::fromUtf8("btnIncluir"));
        btnIncluir->setGeometry(QRect(10, 370, 549, 28));
        QPalette palette4;
        QLinearGradient gradient9(0.994318, 0.915, 0.994318, 0.488);
        gradient9.setSpread(QGradient::ReflectSpread);
        gradient9.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient9.setColorAt(0.1875, QColor(128, 128, 128, 255));
        gradient9.setColorAt(1, QColor(211, 211, 211, 255));
        QBrush brush21(gradient9);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush21);
        QLinearGradient gradient10(0.994318, 0.915, 0.994318, 0.488);
        gradient10.setSpread(QGradient::ReflectSpread);
        gradient10.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient10.setColorAt(0.1875, QColor(128, 128, 128, 255));
        gradient10.setColorAt(1, QColor(211, 211, 211, 255));
        QBrush brush22(gradient10);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush22);
        QLinearGradient gradient11(0.994318, 0.915, 0.994318, 0.488);
        gradient11.setSpread(QGradient::ReflectSpread);
        gradient11.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient11.setColorAt(0.1875, QColor(128, 128, 128, 255));
        gradient11.setColorAt(1, QColor(211, 211, 211, 255));
        QBrush brush23(gradient11);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush23);
        QLinearGradient gradient12(0.994318, 0.915, 0.994318, 0.488);
        gradient12.setSpread(QGradient::ReflectSpread);
        gradient12.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient12.setColorAt(0.1875, QColor(128, 128, 128, 255));
        gradient12.setColorAt(1, QColor(211, 211, 211, 255));
        QBrush brush24(gradient12);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush24);
        QLinearGradient gradient13(0.994318, 0.915, 0.994318, 0.488);
        gradient13.setSpread(QGradient::ReflectSpread);
        gradient13.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient13.setColorAt(0.1875, QColor(128, 128, 128, 255));
        gradient13.setColorAt(1, QColor(211, 211, 211, 255));
        QBrush brush25(gradient13);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush25);
        QLinearGradient gradient14(0.994318, 0.915, 0.994318, 0.488);
        gradient14.setSpread(QGradient::ReflectSpread);
        gradient14.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient14.setColorAt(0.1875, QColor(128, 128, 128, 255));
        gradient14.setColorAt(1, QColor(211, 211, 211, 255));
        QBrush brush26(gradient14);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush26);
        QLinearGradient gradient15(0.994318, 0.915, 0.994318, 0.488);
        gradient15.setSpread(QGradient::ReflectSpread);
        gradient15.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient15.setColorAt(0.1875, QColor(128, 128, 128, 255));
        gradient15.setColorAt(1, QColor(211, 211, 211, 255));
        QBrush brush27(gradient15);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush27);
        QLinearGradient gradient16(0.994318, 0.915, 0.994318, 0.488);
        gradient16.setSpread(QGradient::ReflectSpread);
        gradient16.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient16.setColorAt(0.1875, QColor(128, 128, 128, 255));
        gradient16.setColorAt(1, QColor(211, 211, 211, 255));
        QBrush brush28(gradient16);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush28);
        QLinearGradient gradient17(0.994318, 0.915, 0.994318, 0.488);
        gradient17.setSpread(QGradient::ReflectSpread);
        gradient17.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient17.setColorAt(0.1875, QColor(128, 128, 128, 255));
        gradient17.setColorAt(1, QColor(211, 211, 211, 255));
        QBrush brush29(gradient17);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush29);
        btnIncluir->setPalette(palette4);
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Courier")});
        font3.setKerning(true);
        font3.setStyleStrategy(QFont::PreferDefault);
        btnIncluir->setFont(font3);
        btnIncluir->setAutoFillBackground(false);
        btnIncluir->setStyleSheet(QString::fromUtf8(""));
#if QT_CONFIG(shortcut)
        btnIncluir->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
        btnIncluir->setCheckable(false);
        btnIncluir->setAutoDefault(false);
        btnIncluir->setFlat(false);
        label_2 = new QLabel(tabIncluir);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(180, 20, 431, 51));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background:#ff9318;\n"
"	border-top-right-radius:50px;\n"
"	border-bottom-left-radius:50px;\n"
"	font-family: Courier;\n"
"}"));
        tabProdutos->addTab(tabIncluir, QString());
        tabListar = new QWidget();
        tabListar->setObjectName(QString::fromUtf8("tabListar"));
        tabListar->setStyleSheet(QString::fromUtf8(""));
        frDadosEdit = new QFrame(tabListar);
        frDadosEdit->setObjectName(QString::fromUtf8("frDadosEdit"));
        frDadosEdit->setGeometry(QRect(500, 40, 291, 351));
        frDadosEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"  border-width:1px;\n"
"  border-radius:4px;\n"
"  border-color:#fff;\n"
"  background:#b5b5b5\n"
"}\n"
""));
        frDadosEdit->setFrameShape(QFrame::StyledPanel);
        frDadosEdit->setFrameShadow(QFrame::Raised);
        layoutWidget_2 = new QWidget(frDadosEdit);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(0, -6, 291, 305));
        verticalLayout = new QVBoxLayout(layoutWidget_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_6 = new QLabel(layoutWidget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font1);
        label_6->setStyleSheet(QString::fromUtf8("border:0;\n"
"border-bottom: 1px solid #F4A460;\n"
"margin: 14px 0;\n"
"\n"
"\n"
""));

        horizontalLayout->addWidget(label_6);

        lineEditCodigo = new QLineEdit(layoutWidget_2);
        lineEditCodigo->setObjectName(QString::fromUtf8("lineEditCodigo"));
        lineEditCodigo->setFont(font1);
        lineEditCodigo->setAutoFillBackground(false);
        lineEditCodigo->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"  border-width:1px;\n"
"  border-radius:4px;\n"
"  border-color:#fff;\n"
"  background:#b5b5b5\n"
"}\n"
""));

        horizontalLayout->addWidget(lineEditCodigo);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        label_4 = new QLabel(layoutWidget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("border:0;\n"
"border-bottom: 1px solid #F4A460;\n"
"margin: 14px 0;\n"
"\n"
"\n"
""));

        horizontalLayout_14->addWidget(label_4);

        txtEditNome = new QLineEdit(layoutWidget_2);
        txtEditNome->setObjectName(QString::fromUtf8("txtEditNome"));
        txtEditNome->setFont(font1);
        txtEditNome->setAutoFillBackground(false);

        horizontalLayout_14->addWidget(txtEditNome);


        verticalLayout->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label = new QLabel(layoutWidget_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("border:0;\n"
"border-bottom: 1px solid #F4A460;\n"
"margin: 14px 0;\n"
"\n"
"\n"
""));

        horizontalLayout_15->addWidget(label);

        txtQtdeEdit = new QLineEdit(layoutWidget_2);
        txtQtdeEdit->setObjectName(QString::fromUtf8("txtQtdeEdit"));
        txtQtdeEdit->setFont(font1);
        txtQtdeEdit->setAutoFillBackground(false);

        horizontalLayout_15->addWidget(txtQtdeEdit);


        verticalLayout->addLayout(horizontalLayout_15);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("border:0;\n"
"border-bottom: 1px solid #F4A460;\n"
"margin: 14px 0;\n"
"\n"
"\n"
""));

        horizontalLayout_4->addWidget(label_3);

        txtPrecoEdit = new QLineEdit(layoutWidget_2);
        txtPrecoEdit->setObjectName(QString::fromUtf8("txtPrecoEdit"));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Courier")});
        font4.setPointSize(8);
        font4.setBold(false);
        font4.setItalic(false);
        font4.setUnderline(false);
        font4.setStrikeOut(false);
        font4.setKerning(true);
        txtPrecoEdit->setFont(font4);
        txtPrecoEdit->setAutoFillBackground(false);

        horizontalLayout_4->addWidget(txtPrecoEdit);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_7 = new QLabel(layoutWidget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font1);
        label_7->setStyleSheet(QString::fromUtf8("border:0;\n"
"border-bottom: 1px solid #F4A460;\n"
"margin: 35px 0;\n"
""));

        horizontalLayout_3->addWidget(label_7);

        textEditDescricaoBusca_2 = new QTextEdit(layoutWidget_2);
        textEditDescricaoBusca_2->setObjectName(QString::fromUtf8("textEditDescricaoBusca_2"));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::Button, brush18);
        palette5.setBrush(QPalette::Active, QPalette::BrightText, brush17);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush18);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush18);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush18);
        palette5.setBrush(QPalette::Inactive, QPalette::BrightText, brush17);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush18);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush18);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush18);
        palette5.setBrush(QPalette::Disabled, QPalette::BrightText, brush17);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush18);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush18);
        textEditDescricaoBusca_2->setPalette(palette5);
        textEditDescricaoBusca_2->setFont(font);
        textEditDescricaoBusca_2->setAutoFillBackground(true);
        textEditDescricaoBusca_2->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_3->addWidget(textEditDescricaoBusca_2);


        verticalLayout->addLayout(horizontalLayout_3);

        btnExcluir = new QPushButton(frDadosEdit);
        btnExcluir->setObjectName(QString::fromUtf8("btnExcluir"));
        btnExcluir->setGeometry(QRect(200, 310, 81, 31));
        btnExcluir->setFont(font1);
        btnExcluir->setAutoFillBackground(false);
        btnExcluir->setStyleSheet(QString::fromUtf8("QPushButton{background:qlineargradient(spread:reflect, x1:0.994318, y1:0.915, x2:0.994318, y2:0.488, stop:0.1875 rgba(128, 128, 128, 255), stop:1 rgba(211, 211, 211, 255));\n"
"font-size:14px;\n"
"weight:20px\n"
"}\n"
"\n"
"\n"
"QPushButton::pressed\n"
"{\n"
"	background:qlineargradient(spread:reflect, x1:0.994318, y1:0.915, x2:0.994318, y2:0.488, stop:0.1875 rgba(227, 156, 41, 255), stop:1 rgba(211, 211, 211, 255))\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	background:qlineargradient(spread:reflect, x1:0.994318, y1:0.915, x2:0.994318, y2:0.488, stop:0.1875 rgba(227, 156, 41, 255), stop:1 rgba(211, 211, 211, 255));\n"
"}"));
        btnEdit = new QPushButton(frDadosEdit);
        btnEdit->setObjectName(QString::fromUtf8("btnEdit"));
        btnEdit->setGeometry(QRect(30, 310, 81, 31));
        btnEdit->setFont(font1);
        btnEdit->setAcceptDrops(false);
        btnEdit->setAutoFillBackground(false);
        btnEdit->setStyleSheet(QString::fromUtf8("QPushButton{background:qlineargradient(spread:reflect, x1:0.994318, y1:0.915, x2:0.994318, y2:0.488, stop:0.1875 rgba(128, 128, 128, 255), stop:1 rgba(211, 211, 211, 255));\n"
"font-size:14px\n"
"}\n"
"\n"
"\n"
"QPushButton::pressed\n"
"{\n"
"	background:qlineargradient(spread:reflect, x1:0.994318, y1:0.915, x2:0.994318, y2:0.488, stop:0.1875 rgba(227, 156, 41, 255), stop:1 rgba(211, 211, 211, 255))\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	background:qlineargradient(spread:reflect, x1:0.994318, y1:0.915, x2:0.994318, y2:0.488, stop:0.1875 rgba(227, 156, 41, 255), stop:1 rgba(211, 211, 211, 255));\n"
"}"));
        btnEdit->setCheckable(false);
        btnEdit->setChecked(false);
        btnEdit->setAutoDefault(false);
        btnEdit->setFlat(false);
        comboBoxOrdem = new QComboBox(tabListar);
        comboBoxOrdem->addItem(QString());
        comboBoxOrdem->addItem(QString());
        comboBoxOrdem->addItem(QString());
        comboBoxOrdem->addItem(QString());
        comboBoxOrdem->setObjectName(QString::fromUtf8("comboBoxOrdem"));
        comboBoxOrdem->setGeometry(QRect(500, 480, 164, 30));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Sitka Text")});
        font5.setStyleStrategy(QFont::PreferDefault);
        comboBoxOrdem->setFont(font5);
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
        comboBox = new QComboBox(tabListar);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(10, 10, 71, 22));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy);
        comboBox->setMaximumSize(QSize(1000, 16777215));
        comboBox->setFont(font1);
        comboBox->setAutoFillBackground(false);
        comboBox->setStyleSheet(QString::fromUtf8("QComboBox{background:qlineargradient(spread:reflect, x1:0.994318, y1:0.915, x2:0.994318, y2:0.488, stop:0.1875 rgba(128, 128, 128, 255), stop:1 rgba(211, 211, 211, 255))}"));
        comboBox->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);
        txtKeySearch_3 = new QLineEdit(tabListar);
        txtKeySearch_3->setObjectName(QString::fromUtf8("txtKeySearch_3"));
        txtKeySearch_3->setGeometry(QRect(80, 10, 381, 22));
        txtKeySearch_3->setFont(font1);
        txtKeySearch_3->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"  border-width:1px;\n"
"  border-top-right-radius:6px;\n"
"  border-bottom-right-radius:6px;\n"
"  border-color:#fff;\n"
"  background:#b5b5b5\n"
"}"));
        quadradim = new QWidget(tabListar);
        quadradim->setObjectName(QString::fromUtf8("quadradim"));
        quadradim->setEnabled(true);
        quadradim->setGeometry(QRect(500, 40, 301, 301));
        quadradim->setStyleSheet(QString::fromUtf8("border: 1px solid #F4A460;\n"
""));
        twProdutos = new QTableWidget(tabListar);
        twProdutos->setObjectName(QString::fromUtf8("twProdutos"));
        twProdutos->setGeometry(QRect(10, 40, 451, 471));
        twProdutos->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tabProdutos->addTab(tabListar, QString());
        quadradim->raise();
        txtKeySearch_3->raise();
        comboBox->raise();
        frDadosEdit->raise();
        comboBoxOrdem->raise();
        lineEditCodigo->raise();
        label_6->raise();
        txtPrecoEdit->raise();
        label_3->raise();
        label_6->raise();
        lineEditCodigo->raise();
        twProdutos->raise();

        retranslateUi(AdicionarProdutos);

        tabProdutos->setCurrentIndex(1);
        btnIncluir->setDefault(false);
        btnEdit->setDefault(false);


        QMetaObject::connectSlotsByName(AdicionarProdutos);
    } // setupUi

    void retranslateUi(QDialog *AdicionarProdutos)
    {
        AdicionarProdutos->setWindowTitle(QCoreApplication::translate("AdicionarProdutos", "Estoque de Produtos", nullptr));
#if QT_CONFIG(accessibility)
        AdicionarProdutos->setAccessibleName(QString());
#endif // QT_CONFIG(accessibility)
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
#if QT_CONFIG(tooltip)
        label_2->setToolTip(QCoreApplication::translate("AdicionarProdutos", "<html><head/><body><p align=\"justify\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_2->setText(QCoreApplication::translate("AdicionarProdutos", "               Informa\303\247\303\265es do Produto", nullptr));
        tabProdutos->setTabText(tabProdutos->indexOf(tabIncluir), QCoreApplication::translate("AdicionarProdutos", "Cadastro", nullptr));
        label_6->setText(QCoreApplication::translate("AdicionarProdutos", "C\303\263digo    ", nullptr));
        lineEditCodigo->setPlaceholderText(QCoreApplication::translate("AdicionarProdutos", "C\303\263digo", nullptr));
        label_4->setText(QCoreApplication::translate("AdicionarProdutos", "Nome      ", nullptr));
        txtEditNome->setPlaceholderText(QCoreApplication::translate("AdicionarProdutos", "Nome", nullptr));
        label->setText(QCoreApplication::translate("AdicionarProdutos", "Quantidade", nullptr));
        txtQtdeEdit->setPlaceholderText(QCoreApplication::translate("AdicionarProdutos", "Quantidade               ", nullptr));
        label_3->setText(QCoreApplication::translate("AdicionarProdutos", "Pre\303\247o     ", nullptr));
        txtPrecoEdit->setPlaceholderText(QCoreApplication::translate("AdicionarProdutos", "Pre\303\247o Unit\303\241rio R$      ", nullptr));
        label_7->setText(QCoreApplication::translate("AdicionarProdutos", "Descri\303\247\303\243o ", nullptr));
#if QT_CONFIG(tooltip)
        textEditDescricaoBusca_2->setToolTip(QCoreApplication::translate("AdicionarProdutos", "<html><head/><body><p align=\"justify\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        textEditDescricaoBusca_2->setPlaceholderText(QCoreApplication::translate("AdicionarProdutos", "Descri\303\247\303\243o do Produto", nullptr));
        btnExcluir->setText(QCoreApplication::translate("AdicionarProdutos", "Excluir", nullptr));
        btnEdit->setText(QCoreApplication::translate("AdicionarProdutos", "Editar", nullptr));
        comboBoxOrdem->setItemText(0, QCoreApplication::translate("AdicionarProdutos", "Crescente por c\303\263digo", nullptr));
        comboBoxOrdem->setItemText(1, QCoreApplication::translate("AdicionarProdutos", "Crescente por nome", nullptr));
        comboBoxOrdem->setItemText(2, QCoreApplication::translate("AdicionarProdutos", "Decrescente por c\303\263digo", nullptr));
        comboBoxOrdem->setItemText(3, QCoreApplication::translate("AdicionarProdutos", "Decrescente por nome", nullptr));

        comboBoxOrdem->setPlaceholderText(QString());
        comboBox->setItemText(0, QCoreApplication::translate("AdicionarProdutos", "C\303\263digo", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("AdicionarProdutos", "Nome", nullptr));

#if QT_CONFIG(tooltip)
        comboBox->setToolTip(QCoreApplication::translate("AdicionarProdutos", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        txtKeySearch_3->setPlaceholderText(QCoreApplication::translate("AdicionarProdutos", "Buscar Produto", nullptr));
        tabProdutos->setTabText(tabProdutos->indexOf(tabListar), QCoreApplication::translate("AdicionarProdutos", "Lista de Produtos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdicionarProdutos: public Ui_AdicionarProdutos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADICIONARPRODUTOS_H
