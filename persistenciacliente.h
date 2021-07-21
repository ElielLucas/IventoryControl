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
            void excluir(QString key);
            int pesquisarIndex(QString key, QString order);
            Cliente pesquisarCliente(QString key);
            QSqlQuery currentPosition(QString key);
            void alterar(Cliente obj);
            QSqlQuery criarLista(QString order);

            int idMax();
    };

}

#endif // PERSISTENCIACLIENTE_H
