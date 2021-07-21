#ifndef PERSISTENCIAPEDIDOVENDA_H
#define PERSISTENCIAPEDIDOVENDA_H
#include<fstream>
#include<QString>
#include<QSql>
#include<QSqlDatabase>
#include<QSqlQuery>
#include<QSqlRecord>
#include<QVariant>
#include<vector>
#include<pedidovenda.h>
#include<persistenciacliente.h>

using std::string;
namespace HEV
{
    class PersistenciaPedidoVenda
    {    
        public:
            PersistenciaPedidoVenda();
            void incluir(PedidoVenda obj, QString id_cliente);
            QString pesquisar(QString valor);
            QSqlQuery currentPosition(QString key, int opcao);

            //pesquisar por data
            //pesquisar valores de compra menores que X
            //pesquisar valores de compra maiores que X
            //pesquisar valores de compra entre X e Y
            //pesquisar por comprar que tenham o produto X

//            List<PedidoVenda> criarLista();
//            List<PedidoVenda> criarListaporCliente(QString n);
            void atualizarEstoque(list<Produto> &listProd);


            int idMax();
    };
}

#endif // PERSISTENCIAPEDIDOVENDA_H
