#ifndef CLIENTE_H
#define CLIENTE_H
#include<QString>
namespace HEV
{
    class Cliente
    {
    private:
        QString id;
        QString nome;
        QString endereco;
        QString telefone;
        QString email;
    public:
        Cliente();
        Cliente(QString nome, QString endereco, QString telefone, QString email);
        Cliente(QString id, QString nome, QString endereco, QString telefone, QString email);

        void setID(QString id){this->id=id;}
        void setNome(QString nome);
        void setEndereco(QString endereco);
        void setTelefone(QString telefone);
        void setEmail(QString email){this->email=email;}

        QString getID()const{return id;}
        QString getNome()const{return nome;}
        QString getEndereco()const{return endereco;}
        QString getTelefone()const{return telefone;}
        QString getEmail()const{return email;}

        bool operator != (Cliente &P){return id.toLongLong()!=P.id.toLongLong();}
        bool operator == (Cliente &P){return id.toLongLong()==P.id.toLongLong();}
        bool operator >= (Cliente &P){return id.toLongLong()>=P.id.toLongLong();}
    };
}


#endif // CLIENTE_H
