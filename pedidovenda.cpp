#include "pedidovenda.h"

namespace HEV
{
    PedidoVenda::PedidoVenda():
        idPedido("0")
    {
    }
    PedidoVenda::PedidoVenda(QDateTime dataHoras, QString total)
    {
        this->dataHoras=dataHoras;
        setValorTotal(total);
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


} // namespace HEV
