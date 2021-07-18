#ifndef HEV_PEDIDOVENDA_H
#define HEV_PEDIDOVENDA_H
#include <QString>
#include <produto.h>

namespace HEV 
{

    class PedidoVenda
    {
    private:
        QString idPedido;
        QString idCliente;
        QString dataCompra;
        QString valorTotal;
        //List<Produto> listaProduto;

    public:
        PedidoVenda();
        PedidoVenda(QString idPedido, QString idCliente,int dia, int mes, int ano, QString total);

        void setIDPedido(QString num){idPedido = num;}
        void setIDCliente(QString num){idCliente = num;}
        void setDataCompra(int dia,int mes,int ano);
        void setValorTotal(QString total);

        QString getDataCompra(){return dataCompra;}
        QString getValorTotal(){return valorTotal;}
        QString getIDCliente(){return idCliente;}

//        void setLista(List<Produto> * lista); // setar lista de produto
//        List<Produto>  getListaCurso(){return listaProduto;} // retornar lista

        bool operator != (PedidoVenda &P){return idPedido.toLongLong()!=P.idPedido.toLongLong();}
        bool operator == (PedidoVenda &P){return idPedido.toLongLong()==P.idPedido.toLongLong();}
        bool operator >= (PedidoVenda &P){return idPedido.toLongLong()>=P.idPedido.toLongLong();}

    };

} // namespace HEV

#endif // HEV_PEDIDOVENDA_H
