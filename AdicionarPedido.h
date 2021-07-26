#ifndef ADICIONARPEDIDO_H
#define ADICIONARPEDIDO_H

#include<persistenciapedidovenda.h>
#include<persistenciaproduto.h>
#include<persistenciacliente.h>
#include<QTableWidgetItem>
#include<QDate>
#include<cliente.h>
#include<list>
#include<QMessageBox>
#include<QInputDialog>
#include <QDialog>


namespace Ui {
class AdicionarPedido;
}

class AdicionarPedido : public QDialog
{
    Q_OBJECT

public:
    explicit AdicionarPedido(QWidget *parent = nullptr);
    ~AdicionarPedido();

private slots:

    void on_tabPedido_currentChanged(int index);

    void on_btnFinalizarPedido_clicked();

    void on_lineEditSearchPedido_textEdited();

    void on_lineEditSearchProduto_textEdited();

    void on_txtSearchCliente_textEdited();

    void on_comboBox_currentIndexChanged(int index);

    void on_comboBoxTipoOrdenacao_currentIndexChanged(){organizeOrder();}

    void on_comboBoxTipoPesquisa_currentIndexChanged(int index);

    void on_lineEditValorX_textEdited(){on_lineEditValorY_textEdited();};

    void on_lineEditValorY_textEdited();

    void on_dateEditSearchPedido_dateChanged(const QDate &date);

    void on_twListarPedidos_itemDoubleClicked(QTableWidgetItem *item);

    void on_twProdutos_itemDoubleClicked(QTableWidgetItem *item);

    void on_twPedido_itemDoubleClicked(QTableWidgetItem *item);


private:
    Ui::AdicionarPedido *ui;
    HEV::PersistenciaPedidoVenda persistPedido;
    HEV::PersistenciaProduto produt;
    HEV::PersistenciaCliente client;
    QString currentOrder;

    list<HEV::Produto> comprarProduto;
    list<HEV::Produto> escolhidos;

    void limparIncluirPedido();
    void limparListaMestre();
    void limparListsSTL();
    void organizeOrder();
    QString prepareDate(QString date);
    QString valorDuasCasa(QString aux);

    void iniciarListas();
    void gerarListaProdutosEstoque();
    void gerarListaProdutosEstoqueProvisorio();

    void gerarListaDeCompra();
    void gerarListaDePedidos(QString order);

};

#endif // ADICIONARPEDIDO_H
