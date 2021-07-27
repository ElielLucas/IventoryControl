#ifndef THING_H
#define THING_H
#include<QString>
#include<QDateTime>
#include<list>
using namespace std;
class Thing
{
    private:
        QString codigo;
        QString nome;
    public:
        Thing();
        Thing(QString codigo);
        Thing(QString codigo, QString nome);
        virtual void setCodigo(QString codigo){this->codigo=codigo;}
        virtual void setNome(QString nome){this->nome=nome;}
        QString getCodigo()const{return codigo;}
        QString getNome()const{return nome;}



        virtual void setQuantidade(QString quantidade);
        virtual QString getQuantidade()const;
        virtual QString getPreco()const;
        virtual QString getDescricao()const;
        virtual QString getEndereco()const;
        virtual QString getTelefone()const;
        virtual QString getEmail()const;
        virtual QDateTime getDataHorasCompra()const;
        virtual QString getValorTotal()const;
        virtual list<Thing> getLista()const;
        virtual void setLista(list<Thing> &lista);
};

#endif // THING_H
