#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QFileDialog>
#include<QLocale>
#include<QMessageBox>
#include<QLinearGradient>
#include<QPainter>
#include<QIcon>
#include<QSqlDatabase>
#include<AdicionarProdutos.h>
#include<AdicionarClientes.h>
#include<AdicionarPedido.h>
#include<persistenciaproduto.h>
#include<persistenciapedidovenda.h>
#include<persistenciacliente.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_btnProdutos_clicked();

    void on_btnClientes_clicked();

    void on_btnPedidos_clicked();

    void on_actionExportar_para_Excel_triggered();

    void on_actionDeletar_Dados_triggered();

private:
    Ui::MainWindow *ui;
    PersistenciaCliente persistenciaClientes;
    PersistenciaProduto persistenciaProdutos;
    PersistenciaPedidoVenda persistenciaVendas;
};
#endif // MAINWINDOW_H
