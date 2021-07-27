#ifndef ADICIONARCLIENTES_H
#define ADICIONARCLIENTES_H

#include <QDialog>
#include<QDateTime>
#include<persistenciacliente.h>
#include<persistenciapedidovenda.h>
#include<QTableWidgetItem>
#include<QMessageBox>

namespace Ui {
class AdicionarClientes;
}

class AdicionarClientes : public QDialog
{
    Q_OBJECT

public:
    explicit AdicionarClientes(QWidget *parent = nullptr);
    ~AdicionarClientes();

private slots:

    void on_pushButtonIncluir_clicked();

    void on_pushButtonEdit_clicked();

    void on_tabCliente_currentChanged(int index);

    void on_comboBoxOrdem_currentIndexChanged(){organizeOrder();}

    void on_lineEditSearchCliente_textEdited();

    void on_twCliente_itemDoubleClicked(QTableWidgetItem *item);

    void on_pushButtonComprasCliente_clicked();

    void on_pushButtonVoltar_clicked();

    void on_twPedidosCliente_itemDoubleClicked(QTableWidgetItem *item);

private:
    Ui::AdicionarClientes *ui;
    PersistenciaCliente persistenciaClientes;
    PersistenciaPedidoVenda persistenciaVendas;
    QString currentOrder;

    void limparDadosIncluir();
    void limparDadosLista();
    void iniciarLista();
    void mostrarLista(QString order);
    void organizeOrder();
    QString prepareDate(QString date);
    QString valorDuasCasa(QString aux);
};

#endif // ADICIONARCLIENTES_H
