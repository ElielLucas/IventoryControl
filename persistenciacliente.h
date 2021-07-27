#ifndef PERSISTENCIACLIENTE_H
#define PERSISTENCIACLIENTE_H
#include<interfacecrud.h>
#include<cliente.h>
#include<QCoreApplication>

class PersistenciaCliente: public InterfaceCRUD
{
    public:
        PersistenciaCliente();
       ~PersistenciaCliente(){}
        int incluir(Thing obj);
        int incluir(Thing obj, QString id_cliente){}
        int incluir(Thing obj, QString data, QString id_cliente){}
        void alterar(Thing  obj);
        void deleteTabela();
        QSqlQuery criarListaCadastrados(QString order);
        QSqlQuery filteredSearch(QString key);
        QSqlQuery searchCustomerPurchases(QString key);
        Thing pesquisarThing(QString key, int opcao, QString order);
        int idMax();
};



#endif // PERSISTENCIACLIENTE_H
