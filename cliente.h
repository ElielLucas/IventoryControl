#ifndef CLIENTE_H
#define CLIENTE_H
#include<thing.h>
class Cliente:public Thing
{
private:
    QString endereco;
    QString telefone;
    QString email;
public:
    Cliente();
    Cliente(QString nome, QString endereco, QString telefone, QString email);
    Cliente(QString id, QString nome, QString endereco, QString telefone, QString email);

    void setNome(QString nome);
    void setEndereco(QString endereco);
    void setTelefone(QString telefone);
    void setEmail(QString email){this->email=email;}

    virtual QString getEndereco()const{return endereco;}
    virtual QString getTelefone()const{return telefone;}
    virtual QString getEmail()const{return email;}
};

#endif // CLIENTE_H
