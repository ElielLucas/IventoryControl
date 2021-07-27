#ifndef PERSISTENCIAPRODUTO_H
#define PERSISTENCIAPRODUTO_H
#include<QSql>
#include<QSqlDatabase>
#include<QSqlQuery>
#include<QSqlRecord>
#include<QVariant>
#include<QString>
#include<QCoreApplication>
#include<produto.h>
using namespace std;
class PersistenciaProduto
{
    public:
        PersistenciaProduto();
       ~PersistenciaProduto(){}
        int incluir(Produto obj);
        void alterar(Produto obj);
        void deleteTabela();
        QSqlQuery criarListaCadastrados(QString order);
        QSqlQuery criarListaEstoque(QString order);
        QSqlQuery filteredSearch(QString key);
        Produto pesquisarProduto(QString key, int opcao, QString order);
        int idMax();            
};

#endif // PERSISTENCIAPRODUTO_H
