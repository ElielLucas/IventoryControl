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
    void on_btnPesquisarCliente_clicked();

    void on_btnAdicionar_clicked();

    void on_btnExcluir_clicked();

    void on_btnFinalizarPedido_clicked();

    void on_btnPesquisarPedido_clicked();

    void on_btnMostrarLista_clicked();

    void on_btnMostrarPedido_clicked();

    void on_btnPesquisarPesqC_clicked();

    void on_btnMostrarPesqC_clicked();

    void on_comboBox_currentIndexChanged(int index);

    void on_lineEditSearchProduto_textEdited();

    void on_tabPedido_currentChanged(int index);

    void on_lineEditSearchPedidos_textEdited();

    void on_comboBoxTipoOrdenacao_currentIndexChanged(){organizeOrder();}

    void on_lineEditSearchPedido_textEdited();

    void on_comboBoxTipoPesquisa_currentIndexChanged(int index);

    void on_lineEditValorY_textEdited();

    void on_twListarPedidos_itemDoubleClicked(QTableWidgetItem *item);

private:
    Ui::AdicionarPedido *ui;
    HEV::PersistenciaPedidoVenda persistPedido;
    HEV::PersistenciaProduto produt;
    QString currentOrder;

    list<HEV::Produto> comprarProduto;
    list<HEV::Produto> escolhidos;
    list<HEV::Produto> mostrar;
    list<HEV::PedidoVenda> pedidovenda;
    list<HEV::PedidoVenda> pedidoporcliente;

    QString valorDuasCasa(QString aux);

    void limparIncluirPedido();
    void limparListaMestre();
    void limparListsSTL();
    void limparListaPorCliente();
    void organizeOrder();

    void iniciarListas();
    void criarLista();
    void gerarListaProdutosEstoque();
    void gerarListaProdutosEstoqueProvisorio();


    void gerarListaDeCompra();
    void gerarListaDePesquisa();
    void gerarListaDePedidos(QString order);


    void gerarListaDePedidoPorCliente();
    void gerarListaMostrarPorCliente();
};

#endif // ADICIONARPEDIDO_H
