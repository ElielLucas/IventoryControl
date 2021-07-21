#ifndef HEV_PEDIDOVENDA_H
#define HEV_PEDIDOVENDA_H
#include <QString>
#include<vector>
#include<QDateTime>
#include <produto.h>

namespace HEV 
{

    class PedidoVenda
    {
    private:
        QString idPedido;
        QDateTime dataHoras;
        QString valorTotal;
        list<Produto> listaProduto;

    public:
        PedidoVenda();
        PedidoVenda(QDateTime dataHoras, QString total);

        void setDataHorasCompra(QDateTime dateTime){dataHoras=dateTime;}
        void setValorTotal(QString total);

        QDateTime getDataHorasCompra(){return dataHoras;}
        QString getValorTotal(){return valorTotal;}

        void setLista(list<Produto> &lista){listaProduto=lista;}
        list<Produto>getListaCurso()const {return listaProduto;}

        bool operator != (PedidoVenda &P){return idPedido.toLongLong()!=P.idPedido.toLongLong();}
        bool operator == (PedidoVenda &P){return idPedido.toLongLong()==P.idPedido.toLongLong();}
        bool operator >= (PedidoVenda &P){return idPedido.toLongLong()>=P.idPedido.toLongLong();}

    };

} // namespace HEV

#endif // HEV_PEDIDOVENDA_H
