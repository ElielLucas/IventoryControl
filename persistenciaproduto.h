#ifndef PERSISTENCIAPRODUTO_H
#define PERSISTENCIAPRODUTO_H
#include<interfacecrud.h>
#include<QString>
#include<produto.h>

class PersistenciaProduto: public InterfaceCRUD
{
    public:
        PersistenciaProduto();
       ~PersistenciaProduto(){}
        int incluir(Thing obj);
        int incluir(Thing obj, QString id_cliente){}
        int incluir(Thing obj, QString data, QString id_cliente){}
        void alterar(Thing obj);
        void deleteTabela();
        QSqlQuery criarListaCadastrados(QString order);
        QSqlQuery criarListaEstoque(QString order);
        QSqlQuery filteredSearch(QString key);
        Thing pesquisarThing(QString key, int opcao, QString order);
        int idMax();            
};

#endif // PERSISTENCIAPRODUTO_H
