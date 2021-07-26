#ifndef PERSISTENCIAPEDIDOVENDA_H
#define PERSISTENCIAPEDIDOVENDA_H
#include<QString>
#include<QSql>
#include<QSqlDatabase>
#include<QSqlQuery>
#include<QSqlRecord>
#include<QVariant>
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
            void incluir(PedidoVenda obj, QString data, QString id_cliente);
            QSqlQuery searchDate(QString key, QString order);
            QSqlQuery searchForValuesLessThan(QString key, QString order);
            QSqlQuery searchForValuesGreaterThan(QString key, QString order);
            QSqlQuery searchForValuesBetween(QString key1, QString key2, QString order);
            QSqlQuery searchForPurchasesByProduct(QString key, QString order);
            QSqlQuery searchForSalesRelatedInformation(QString key, QString order);
            QSqlQuery tabelaCompleta(QString order);
            void atualizarEstoque(list<Produto> &listProd);
            void deleteTabelaPedidos();
            int idMax();
    };
}

#endif // PERSISTENCIAPEDIDOVENDA_H
