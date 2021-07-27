#ifndef PERSISTENCIAPEDIDOVENDA_H
#define PERSISTENCIAPEDIDOVENDA_H
#include<interfacecrud.h>
#include<pedidovenda.h>
#include<persistenciacliente.h>

class PersistenciaPedidoVenda: public InterfaceCRUD
{
    public:
        PersistenciaPedidoVenda();
        ~PersistenciaPedidoVenda(){};
        int incluir(Thing obj){}
        int incluir(Thing obj, QString id_cliente);
        int incluir(Thing obj, QString data, QString id_cliente);
        void alterar(Thing obj){}
        void deleteTabela();
        QSqlQuery criarListaCadastrados(QString order);
        QSqlQuery filteredSearch(QString key){}
        Thing pesquisarThing(QString key, int opcao, QString order){};
        int idMax();

        QSqlQuery searchDate(QString key, QString order);
        QSqlQuery searchForValuesLessThan(QString key, QString order);
        QSqlQuery searchForValuesGreaterThan(QString key, QString order);
        QSqlQuery searchForValuesBetween(QString key1, QString key2, QString order);
        QSqlQuery searchForPurchasesByProduct(QString key, QString order);
        QSqlQuery searchForSalesRelatedInformation(QString key, QString order);
        void atualizarEstoque(list<Thing> &list);
};

#endif // PERSISTENCIAPEDIDOVENDA_H
