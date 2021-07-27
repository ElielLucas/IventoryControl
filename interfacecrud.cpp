#include "interfacecrud.h"

InterfaceCRUD::InterfaceCRUD()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    QString dir = qApp->applicationDirPath();
    QString banco = dir + "/banco_de_dados/dbInventoryControl.db";
    db.setDatabaseName(banco);
    if(!db.open())throw QString("Falha ao conectar ao banco de dados!");
}
