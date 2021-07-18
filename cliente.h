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
        QString cpf;
    public:
        Cliente();
        Cliente(QString id, QString nome, QString endereco, QString telefone, QString cpf);

        void setID(QString id){this->id=id;}
        void setNome(QString nome);
        void setEndereco(QString endereco);
        void setTelefone(QString telefone);
        void setCpf(QString CPF);

        QString getNome(){return nome;}
        QString getEndereco(){return endereco;}
        QString getTelefone(){return telefone;}
        QString getCPF(){return cpf;}

        bool operator != (Cliente &P){return id.toLongLong()!=P.id.toLongLong();}
        bool operator == (Cliente &P){return id.toLongLong()==P.id.toLongLong();}
        bool operator >= (Cliente &P){return id.toLongLong()>=P.id.toLongLong();}
    };
}


#endif // CLIENTE_H
