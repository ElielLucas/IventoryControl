#ifndef ADICIONARPEDIDO_H
#define ADICIONARPEDIDO_H

#include<persistenciapedidovenda.h>
#include<persistenciaproduto.h>
#include<persistenciacliente.h>
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

    void on_lineEditSearchProduto_textEdited(const QString &arg1);

    void on_tabPedido_currentChanged(int index);

private:
    Ui::AdicionarPedido *ui;
    HEV::PersistenciaPedidoVenda persistPedido;
    HEV::PersistenciaProduto produt;

    list<HEV::Produto> comprarProduto;
    list<HEV::Produto> escolhidos;
    list<HEV::Produto> mostrar;
    list<HEV::PedidoVenda> pedidovenda;
    list<HEV::PedidoVenda> pedidoporcliente;

    QString valorDuasCasa(QString aux);

    void limparIncluir();
    void limparPesquisar();
    void limparListar();
    void limparAsLista();
    void limparListaPorCliente();
    void organize();

    void iniciarListas();
    void criarLista();
    void gerarListaProdutosEstoque();
    void gerarListaProdutosEstoqueProvisorio();
    void gerarListaDeCompra();
    void gerarListaDePesquisa();
    void gerarListaDePedido();
    void gerarListaDeMostrar();
    void gerarListaDePedidoPorCliente();
    void gerarListaMostrarPorCliente();
};

#endif // ADICIONARPEDIDO_H
