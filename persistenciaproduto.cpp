#include "persistenciaproduto.h"

PersistenciaProduto::PersistenciaProduto()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    QString dir = qApp->applicationDirPath();
    QString banco = dir + "/banco_de_dados/dbInventoryControl.db";
    db.setDatabaseName(banco);
    if(!db.open())throw QString("Falha ao conectar ao banco de dados!");
}
int PersistenciaProduto::incluir(Produto obj)
{
    QSqlQuery codInsertion;
    codInsertion.prepare("insert into tb_products(nome, descricao, quantidade, preco) values"
              "('"+obj.getNome()+"','"+obj.getDescricao()+"','"+obj.getQuantidade()+"','"+obj.getPreco()+"')");
    if(!codInsertion.exec())
      throw QString("Falha no cadastro do produto! Já existe um produto cadastrado com esse nome.");

    return 0;
}

void PersistenciaProduto::alterar(Produto obj)
{
    QSqlQuery codUpdate("UPDATE tb_products SET id='"+obj.getCodigo()+"'"+
                                            ", nome='"+obj.getNome()+"'"+
                                            ", descricao='"+obj.getDescricao()+"'"+
                                            ", quantidade='"+obj.getQuantidade()+"'"+
                                            ", preco='"+obj.getPreco()+"'"+
                                            " WHERE id="+obj.getCodigo()+";");

    if(!codUpdate.exec())
      throw QString("Falha ao alterar o produto!");
}

void PersistenciaProduto::deleteTabela()
{
    QSqlQuery delet("delete from tb_products;");
    if(!delet.exec())throw QString("Falha ao deletar os dados do sistema!");
    delet.prepare("DELETE FROM sqlite_sequence WHERE `name` = 'tb_products';");
    if(!delet.exec())throw QString("Falha ao deletar os dados do sistema!");
}

QSqlQuery PersistenciaProduto::filteredSearch(QString key)
{
    QSqlQuery codSelect;
    if(!key.isEmpty() && key[0]>='0' && key[0]<='9')codSelect.prepare("SELECT * from tb_products WHERE id like '"+key+"%'");
    else codSelect.prepare("SELECT * from tb_products WHERE LOWER(nome) like '"+key.toLower()+"%'");

    if(!codSelect.exec())
      throw QString("Falha ao pesquisar o produto!");

    return codSelect;
}

Produto PersistenciaProduto::pesquisarProduto(QString key, int opcao, QString order)
{
    QSqlQuery codSelect;
    if(opcao==0)
         codSelect.prepare("select * from tb_products WHERE id="+key+" "+order);
    else
        codSelect.prepare("select * from tb_products WHERE nome='"+key+"' "+order);

    if(!codSelect.exec())
      throw QString("Falha ao pesquisar o produto!");

    codSelect.next();

    int iCod, iNome, iQuant, iPrec, iDesc;

    iCod = codSelect.record().indexOf("id");
    iNome = codSelect.record().indexOf("nome");
    iQuant = codSelect.record().indexOf("quantidade");
    iPrec = codSelect.record().indexOf("preco");
    iDesc = codSelect.record().indexOf("descricao");

    Produto aux(codSelect.value(iCod).toString(), codSelect.value(iNome).toString(), codSelect.value(iQuant).toString(), codSelect.value(iPrec).toString(), codSelect.value(iDesc).toString());

    return aux;
}

QSqlQuery PersistenciaProduto::criarListaCadastrados(QString order)
{
    QSqlQuery codSelect("SELECT * from tb_products "+order);

    if(!codSelect.exec())
      throw QString("Falha ao montar lista!");

    return codSelect;

}

QSqlQuery PersistenciaProduto::criarListaEstoque(QString order)
{
    QSqlQuery codSelect("SELECT * from tb_products where quantidade > 0 "+order);

    if(!codSelect.exec())
      throw QString("Falha ao montar lista!");

    return codSelect;
}



