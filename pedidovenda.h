#ifndef HEV_PEDIDOVENDA_H
#define HEV_PEDIDOVENDA_H
#include<QString>
#include<vector>
#include <produto.h>
#include<QDateTime>
class PedidoVenda
{
private:
    QString codigo;
    QDateTime dataHoras;
    QString valorTotal;
    list<Produto> listaProduto;

public:
    PedidoVenda();
    PedidoVenda(QDateTime dataHoras, QString total);
    PedidoVenda(QString idPedido, QString total);
    PedidoVenda(QDateTime dataHoras, QString total, list<Produto> listaProduto);

    void setCodigo(QString codigo){this->codigo=codigo;}
    void setDataHorasCompra(QDateTime dateTime){dataHoras=dateTime;}
    void setValorTotal(QString total){valorTotal=total;}
    void setLista(list<Produto> &lista){listaProduto=lista;}

    QString getCodigo()const{return codigo;}
    QDateTime getDataHorasCompra()const{return dataHoras;}
    QString getValorTotal()const{return valorTotal;}
    list<Produto>getLista()const {return listaProduto;}
};


#endif // HEV_PEDIDOVENDA_H
