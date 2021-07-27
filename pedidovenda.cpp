#include "pedidovenda.h"

PedidoVenda::PedidoVenda()
{
}

PedidoVenda::PedidoVenda(QString idPedido, QString total)
{
    codigo=idPedido;
    setValorTotal(total);
}

PedidoVenda::PedidoVenda(QDateTime dataHoras, QString total)
{
    codigo="";
    this->dataHoras=dataHoras;
    setValorTotal(total);
}

PedidoVenda::PedidoVenda(QDateTime dataHoras, QString total, list<Produto> listaProduto)
{
    codigo="";
    this->dataHoras=dataHoras;
    this->listaProduto=listaProduto;
    setValorTotal(total);
}

