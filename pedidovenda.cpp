#include "pedidovenda.h"

namespace HEV
{
    PedidoVenda::PedidoVenda():
        idPedido("0")
    {
    }

    PedidoVenda::PedidoVenda(QString idPedido, QString total)
    {
        this->idPedido=idPedido;
        setValorTotal(total);
    }

    PedidoVenda::PedidoVenda(QDateTime dataHoras, QString total)
    {
        this->dataHoras=dataHoras;
        setValorTotal(total);
    }

    PedidoVenda::PedidoVenda(QDateTime dataHoras, QString total, list<Produto> listaProduto)
    {
        this->dataHoras=dataHoras;
        this->listaProduto=listaProduto;
        setValorTotal(total);
    }

} // namespace HEV
