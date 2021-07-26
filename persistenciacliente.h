#ifndef PERSISTENCIACLIENTE_H
#define PERSISTENCIACLIENTE_H
#include<cliente.h>
#include<fstream>
#include<QString>
#include<QSql>
#include<QSqlDatabase>
#include<QSqlQuery>
#include<QSqlRecord>
#include<QVariant>
using std::string;
namespace HEV
{
    class PersistenciaCliente
    {
        public:
            PersistenciaCliente();
            int incluir(Cliente obj);                  
            QSqlQuery filteredSearch(QString key);
            Cliente pesquisarCliente(QString key);
            QSqlQuery searchCustomerPurchases(QString key);
            void alterar(Cliente obj);
            QSqlQuery criarListaCadastrados(QString order);
            void deleteTabelaCliente();
            int idMax();
    };

}

#endif // PERSISTENCIACLIENTE_H
