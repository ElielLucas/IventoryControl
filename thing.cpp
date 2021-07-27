#include "thing.h"

Thing::Thing():
    codigo(""),
    nome("")
{

}

Thing::Thing(QString codigo)
{
    this->codigo=codigo;
    nome="";
}

Thing::Thing(QString codigo, QString nome)
{
    this->codigo=codigo;
    this->nome=nome;
}
