#ifndef PERSISTENCIAPEDIDOVENDA_H
#define PERSISTENCIAPEDIDOVENDA_H
#include<QSql>
#include<QSqlDatabase>
#include<QSqlQuery>
#include<QSqlRecord>
#include<QVariant>
#include<QCoreApplication>
#include<pedidovenda.h>
#include<persistenciacliente.h>
using namespace std;
class PersistenciaPedidoVenda
{
    public:
        PersistenciaPedidoVenda();
        ~PersistenciaPedidoVenda(){};
        int incluir(PedidoVenda obj, QString id_cliente);
        int incluir(PedidoVenda obj, QString data, QString id_cliente);
        void deleteTabela();
        QSqlQuery criarListaCadastrados(QString order);
        QSqlQuery searchDate(QString key, QString order);
        QSqlQuery searchForValuesLessThan(QString key, QString order);
        QSqlQuery searchForValuesGreaterThan(QString key, QString order);
        QSqlQuery searchForValuesBetween(QString key1, QString key2, QString order);
        QSqlQuery searchForPurchasesByProduct(QString key, QString order);
        QSqlQuery searchForSalesRelatedInformation(QString key, QString order);
        void atualizarEstoque(list<Produto> &list);
        int idMax();
};

#endif // PERSISTENCIAPEDIDOVENDA_H
