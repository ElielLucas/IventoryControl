#ifndef PRODUTO_H
#define PRODUTO_H
#include<QString>
#include<iostream>
#include<thing.h>
using namespace std;

class Produto: public Thing
{
private:
    QString quantidade;
    QString preco;
    QString descricao;
public:
    Produto();
    Produto(QString nome, QString quantidade, QString preco, QString descricao);
    Produto(QString codigo, QString nome, QString quantidade, QString preco, QString descricao);

    void setCodigo(QString codigo);
    void setNome(QString nome);
    void setDescricao(QString descricao){this->descricao=descricao;}
    void setPreco(QString preco);
    void setQuantidade(QString quantidade);

    QString getQuantidade()const{return quantidade;}
    QString getPreco()const{return preco;}
    QString getDescricao()const{return descricao;}
};
#endif // PRODUTO_H
