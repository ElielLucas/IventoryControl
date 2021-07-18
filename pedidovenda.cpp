#include "pedidovenda.h"

namespace HEV
{
    PedidoVenda::PedidoVenda():
        idPedido("0"),
        idCliente(""),
        dataCompra("")
    {
    }
    PedidoVenda::PedidoVenda(QString idPedido, QString idCliente, int dia, int mes, int ano, QString total)
    {
        setIDPedido(idPedido);
        setIDCliente(idCliente);
        setDataCompra(dia, mes, ano);
        setValorTotal(total);
    }

    void PedidoVenda::setDataCompra(int dia, int mes, int ano)
    {
        int tmes[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
        if(ano > 2020 || ano < 2000)
            throw QString("Ano Inválido");
        if(mes > 12 || mes < 1)
            throw QString("Mês Inválido");
        if(dia > tmes[mes-1] || dia < 1)
            throw QString("Dia Inválido");
        dataCompra = QString::number(dia) + "/" + QString::number(mes) + "/" + QString::number(ano);
    }

    void PedidoVenda::setValorTotal(QString total)
    {
        int n;
        // verificar se so tem numeros e o ponto
        for (n = 0; n < total.size() && ((total[n] >= '0' && total[n] <= '9') || total[n] == '.'); n++);
        if (n != total.size())
            throw QString("Total invalido");
        QString nova ="", aux = total;
        int i;
        for (i = 0; i < aux.size() && aux[i] != '.'; i++){
            nova+=aux[i];
        }
        nova += ".";
        if (i == aux.size()){
            nova += "00";
        }else{
            nova += aux[i+1];
            if (i+ 2 == aux.size()){
                nova += "0";
            }else{
                nova += aux[i+2];
            }
        }
        total = nova;
        valorTotal = total;
    }

//    void PedidoVenda::setLista(List<Produto> *lista)
//    {
//        while (!(lista)->isEmpty()){
//            Produto p = lista->pegarPrimeiro();
//            listaProduto.insert(&p);
//        }
//    }



} // namespace HEV
