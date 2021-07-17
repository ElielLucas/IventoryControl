#ifndef PERSISTENCIAPRODUTO_H
#define PERSISTENCIAPRODUTO_H
#include<fstream>
#include<QString>
#include<QSql>
#include<QSqlDatabase>
#include<QSqlQuery>
#include<QSqlRecord>
#include<QVariant>
#include<produto.h>
#include<list.h>
using std::ifstream;
using std::ofstream;
using std::string;
namespace HEV
{
    class PersistenciaProduto
    {
        public:
            PersistenciaProduto();
            void incluir(Produto obj);
            void excluir(QString key, int opcao);
            Produto pesquisar(QString key, int opcao);
            int currentPosition(QString key, QString comand, int opcao);
            void alterar(Produto obj);
            List<Produto> criarLista(QString order);
    };
}
#endif // PERSISTENCIAPRODUTO_H
