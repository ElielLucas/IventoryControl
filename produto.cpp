#include "produto.h"
namespace HEV
{
Produto::Produto():
    codigo(""),
    nome(""),
    quantidade(""),
    preco(""),
    descricao("")
{
}
Produto::Produto(QString codigo, QString nome, QString quantidade, QString preco, QString descricao)
{
    setCodigo(codigo);
    setNome(nome);
    setDescricao(descricao);
    setQuantidade(quantidade);
    setPreco(preco);
}
Produto::Produto(QString nome, QString quantidade, QString preco, QString descricao)
{
    codigo="";
    setNome(nome);
    setDescricao(descricao);
    setQuantidade(quantidade);
    setPreco(preco);
}
void Produto::setCodigo(QString codigo)
{
    long long int aux=codigo.toLongLong();
    if(aux<=0)throw QString("Código inválido!");
    this->codigo=codigo;
}

void Produto::setNome(QString nome)
{
    if(nome=="")throw QString("Nome inválido!");
    QString aux="";
    QChar p=nome[0];
    aux+=p.toUpper();
    for(int i=1;i<nome.size();i++)
    {
        aux+=nome[i].toLower();
    }
    this->nome=aux;
}
void Produto::setQuantidade(QString quantidade)
{
    int n=quantidade.toInt();
    if(n<0)throw QString("Essa quantidade é inválida!");
    this->quantidade=quantidade;
}
void Produto::setPreco(QString preco)
{
    int n;

    for (n = 0; n < preco.size() && ((preco[n] >= '0' && preco[n] <= '9') || preco[n] == '.'); n++);
    if (n != preco.size())
        throw QString("Preco invalido");
    int i = 0;
    QString nova ="", aux = preco;
    for (; i < aux.size() && aux[i] != '.'; i++){
        nova+=aux[i];
    }
    nova += ".";
    if (i == aux.size()){
        nova += "00";
    }else{
        nova += aux[i+1];
        if (i+ 2 == aux.size()){
            nova += "0";
        }else{
            nova += aux[i+2];
        }
    }
    preco = nova;
    this->preco=preco;
}

void Produto::incQuantidade(int n)
{
    int aux=quantidade.toInt()+n;
    quantidade=QString::number(aux);
}

}
