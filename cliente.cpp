#include "cliente.h"

Cliente::Cliente():
    Thing(),
    endereco(""),
    telefone(""),
    email("")
{

}

Cliente::Cliente(QString nome, QString endereco, QString telefone, QString email):
    Thing(nome,"")
{   
    setEndereco(endereco);
    setTelefone(telefone);
    setEmail(email);
}

Cliente::Cliente(QString id, QString nome, QString endereco, QString telefone, QString email):
    Thing(id, nome)
{
    setEndereco(endereco);
    setTelefone(telefone);
    setEmail(email);
}

void Cliente::setNome(QString nome)
{
    int i;
    for (i = 0; i < nome.size() && ((nome[i] >= 'A' && nome[i] <= 'Z') || (nome[i] == ' ') || (nome[i] >= 'a' && nome[i] <= 'z')); i++);
    if (i != nome.size())
        throw QString("Nome invalido");

    QString aux="";
    QChar p=nome[0];
    aux+=p.toUpper();
    for(int i=1;i<nome.size();i++)
    {
        aux+=nome[i].toLower();
    }
    Thing::setNome(aux);
}

void Cliente::setEndereco(QString endereco)
{
    if (endereco == "")this->endereco = endereco;
    else
    {
        QString aux="";
        QChar p=endereco[0];
        aux+=p.toUpper();
        for(int i=1;i<endereco.size();i++)
        {
            aux+=endereco[i].toLower();
        }

        this->endereco = aux;
    }
}

void Cliente::setTelefone(QString telefone)
{
    int i;
    // verificar se so tem numeros
    for (i = 0; i < telefone.size() && (telefone[i] >= '0' && telefone[i] <= '9'); i++);
    if (i != telefone.size())
        throw QString("Telefone invalido");
    this->telefone = telefone;
}

