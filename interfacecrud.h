#ifndef INTERFACECRUD_H
#define INTERFACECRUD_H

#include<thing.h>
#include<fstream>
#include<QString>
#include<QCoreApplication>
#include<QSql>
#include<QSqlDatabase>
#include<QSqlQuery>
#include<QSqlRecord>
#include<QVariant>

using std::string;

class InterfaceCRUD
{
    public:
    InterfaceCRUD();
    ~InterfaceCRUD(){};
    virtual int incluir(Thing obj)=0;
    virtual int incluir(Thing obj, QString id_cliente)=0;
    virtual int incluir(Thing obj, QString data, QString id_cliente)=0;
    virtual void alterar(Thing obj)=0;
    virtual void deleteTabela()=0;
    virtual QSqlQuery criarListaCadastrados(QString order)=0;
    virtual QSqlQuery filteredSearch(QString key)=0;
    virtual Thing pesquisarThing(QString key, int opcao, QString order)=0;
    virtual int idMax()=0;


    virtual QSqlQuery searchDate(QString key, QString order);
    virtual QSqlQuery searchForValuesLessThan(QString key, QString order);
    virtual QSqlQuery searchForValuesGreaterThan(QString key, QString order);
    virtual QSqlQuery searchForValuesBetween(QString key1, QString key2, QString order);
    virtual QSqlQuery searchForPurchasesByProduct(QString key, QString order);
    virtual QSqlQuery searchForSalesRelatedInformation(QString key, QString order);
    virtual QSqlQuery searchCustomerPurchases(QString key);
    virtual void atualizarEstoque(list<Thing> &list);
    virtual QSqlQuery criarListaEstoque(QString order);

};


#endif // INTERFACECRUD_H
