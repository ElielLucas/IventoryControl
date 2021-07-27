#include "persistenciacliente.h"

PersistenciaCliente::PersistenciaCliente():InterfaceCRUD()
{
}
int PersistenciaCliente::incluir(Thing obj)
{
    QSqlQuery codInsertion;
    codInsertion.prepare("insert into tb_cliente(nome, endereco, telefone, email) values"
              "('"+obj.getNome()+"','"+obj.getEndereco()+"','"+obj.getTelefone()+"','"+obj.getEmail()+"')");

    if(!codInsertion.exec())
      throw QString("Falha no cadastro do cliente!");

    codInsertion.prepare("select MAX(id) as id from tb_cliente");

    if(!codInsertion.exec())
      throw QString("Falha no cadastro do cliente!");

    codInsertion.next();
    int id = codInsertion.record().indexOf("id");

    return codInsertion.value(id).toInt();
}

void PersistenciaCliente::alterar(Thing obj)
{
    QSqlQuery codUpdate("UPDATE tb_cliente SET nome='"+obj.getNome()+"'"+
                                            ", endereco='"+obj.getEndereco()+"'"+
                                            ", telefone='"+obj.getTelefone()+"'"+
                                            ", email='"+obj.getEmail()+"'"+
                                            " WHERE id="+obj.getCodigo()+";");

    if(!codUpdate.exec())
      throw QString("Falha ao alterar o cliente!");

}

void PersistenciaCliente::deleteTabela()
{
    QSqlQuery delet("delete from tb_cliente;");
    if(!delet.exec())throw QString("Falha ao deletar os dados do sistema!");
    delet.prepare("DELETE FROM sqlite_sequence WHERE `name` = 'tb_cliente';");
    if(!delet.exec())throw QString("Falha ao deletar os dados do sistema!");
}

Thing PersistenciaCliente::pesquisarThing(QString key, int opcao, QString order)
{
    QSqlQuery codSelect("select * from tb_cliente WHERE id="+key+" "+order);

    if(!codSelect.exec())
      throw QString("Falha ao pesquisar o produto!");

    codSelect.next();

    int iCod, iNome, iEndereco, iTelefone, iEmail;

    iCod = codSelect.record().indexOf("id");
    iNome = codSelect.record().indexOf("nome");
    iEndereco = codSelect.record().indexOf("endereco");
    iTelefone = codSelect.record().indexOf("telefone");
    iEmail = codSelect.record().indexOf("email");

    Cliente saida(codSelect.value(iCod).toString(), codSelect.value(iNome).toString(), codSelect.value(iEndereco).toString(), codSelect.value(iTelefone).toString(), codSelect.value(iEmail).toString());

    return saida;
}
QSqlQuery PersistenciaCliente::filteredSearch(QString key)
{
    QSqlQuery codSelect("SELECT * from tb_cliente WHERE LOWER(nome) like'"+key.toLower()+"%'");

    if(!codSelect.exec())
      throw QString("Falha ao pesquisar o cliente!");

    return codSelect;
}

QSqlQuery PersistenciaCliente::criarListaCadastrados(QString order)
{
    QSqlQuery codSelect("SELECT * from tb_cliente "+order);

    if(!codSelect.exec())
      throw QString("Falha ao montar lista!");

    return codSelect;
}

QSqlQuery PersistenciaCliente::searchCustomerPurchases(QString key)
{
    QSqlQuery pesquisa("select * from tb_cliente c inner join cliente_pedido cp on (c.id = cp.id_cliente) inner join tb_pedidos ped on (cp.id_pedido = ped.id) WHERE c.id = "+key+" order by ped.dataCompra");
    if(!pesquisa.exec())throw QString("Falha ao acessar o banco de dados!");
    return pesquisa;
}

int PersistenciaCliente::idMax()
{
    QSqlQuery pesquisa("select MAX(id) as id from tb_cliente");
    if(!pesquisa.exec())throw QString("Falha ao acessar o banco de dados!");

    int id = pesquisa.record().indexOf("id");
    return pesquisa.value(id).toInt();
}

