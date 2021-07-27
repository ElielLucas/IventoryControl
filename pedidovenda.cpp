#include "pedidovenda.h"

PedidoVenda::PedidoVenda():
    Thing()
{
}

PedidoVenda::PedidoVenda(QString idPedido, QString total):
    Thing(idPedido)
{
    setValorTotal(total);
}

PedidoVenda::PedidoVenda(QDateTime dataHoras, QString total):
    Thing()
{
    this->dataHoras=dataHoras;
    setValorTotal(total);
}

PedidoVenda::PedidoVenda(QDateTime dataHoras, QString total, list<Thing> listaProduto)
{
    this->dataHoras=dataHoras;
    this->listaProduto=listaProduto;
    setValorTotal(total);
}


