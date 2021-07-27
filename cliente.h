#ifndef CLIENTE_H
#define CLIENTE_H
#include<QString>
class Cliente
{
private:
    QString codigo;
    QString nome;
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

    QString getCodigo()const{return codigo;}
    QString getNome()const{return nome;}
    QString getEndereco()const{return endereco;}
    QString getTelefone()const{return telefone;}
    QString getEmail()const{return email;}
};

#endif // CLIENTE_H
