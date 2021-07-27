#ifndef PERSISTENCIACLIENTE_H
#define PERSISTENCIACLIENTE_H
#include<QSql>
#include<QSqlDatabase>
#include<QSqlQuery>
#include<QSqlRecord>
#include<QVariant>
#include<cliente.h>
#include<QCoreApplication>
using namespace std;
class PersistenciaCliente
{
    public:
        PersistenciaCliente();
       ~PersistenciaCliente(){}
        int incluir(Cliente obj);
        void alterar(Cliente  obj);
        void deleteTabela();
        QSqlQuery criarListaCadastrados(QString order);
        QSqlQuery filteredSearch(QString key);
        QSqlQuery searchCustomerPurchases(QString key);
        Cliente pesquisarCliente(QString key, int opcao, QString order);
        int idMax();
};



#endif // PERSISTENCIACLIENTE_H
