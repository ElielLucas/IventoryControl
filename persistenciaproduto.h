#ifndef PERSISTENCIAPRODUTO_H
#define PERSISTENCIAPRODUTO_H
#include<fstream>
#include<QString>
#include<produto.h>
#include<QSql>
#include<QSqlDatabase>
#include<QSqlQuery>
#include<QSqlRecord>
#include<QVariant>

using std::string;
namespace HEV
{
    class PersistenciaProduto
    {
        public:
            PersistenciaProduto();
            void incluir(Produto obj);          
            QSqlQuery filteredSearch(QString key);
            Produto pesquisarProduto(QString key, int opcao, QString order);
            int currentPosition(QString key, QString comand, int opcao);
            void alterar(Produto obj);
            QSqlQuery criarListaCadastrados(QString order);
            QSqlQuery criarListaEstoque(QString order);
            void deleteTabelaProduto();
    };
}
#endif // PERSISTENCIAPRODUTO_H
