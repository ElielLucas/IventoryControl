#ifndef HEV_PEDIDOVENDA_H
#define HEV_PEDIDOVENDA_H
#include<thing.h>
#include<QString>
#include<vector>
#include <produto.h>

class PedidoVenda: public Thing
{
private:
    QDateTime dataHoras;
    QString valorTotal;
    list<Thing> listaProduto;

public:
    PedidoVenda();
    PedidoVenda(QDateTime dataHoras, QString total);
    PedidoVenda(QString idPedido, QString total);
    PedidoVenda(QDateTime dataHoras, QString total, list<Thing> listaProduto);

    void setDataHorasCompra(QDateTime dateTime){dataHoras=dateTime;}
    void setValorTotal(QString total){valorTotal=total;}
    void setLista(list<Thing> &lista){listaProduto=lista;}

    QDateTime getDataHorasCompra()const{return dataHoras;}
    QString getValorTotal()const{return valorTotal;}
    list<Thing>getLista()const {return listaProduto;}
};


#endif // HEV_PEDIDOVENDA_H
