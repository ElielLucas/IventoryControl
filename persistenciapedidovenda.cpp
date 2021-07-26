#include "persistenciapedidovenda.h"
namespace HEV
{
    PersistenciaPedidoVenda::PersistenciaPedidoVenda()
    {
        QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("dbInventoryControl.db");
        if(!db.open())throw QString("Falha ao conectar ao banco de dados!");
    }
    void PersistenciaPedidoVenda::incluir(PedidoVenda obj, QString id_cliente)
    {
          QSqlQuery insert;

          QString organizeDate=obj.getDataHorasCompra().date().toString("yyyy-MM-dd")+" "+obj.getDataHorasCompra().time().toString();
          if(id_cliente!="")
          {
              insert.prepare("insert into tb_pedidos(dataCompra, valorTotal, id_cliente) values('"+organizeDate+"',"+obj.getValorTotal()+","+id_cliente+")");

              if(!insert.exec())
                throw QString("Falha no cadastro do pedido!");

              insert.prepare("insert into cliente_pedido(id_cliente, id_pedido) values("+id_cliente+","+QString::number(idMax())+")");
              if(!insert.exec())
                throw QString("Falha no cadastro do pedido!");
          }else
          {
              insert.prepare("insert into tb_pedidos(dataCompra, valorTotal) values('"+organizeDate+"',"+obj.getValorTotal()+")");

              if(!insert.exec())
                throw QString("Falha no cadastro do pedido!");
          }

          list<Produto> listAux = obj.getListaCurso();
          int cont=0;
          for(auto i=listAux.begin();i!=listAux.end();i++, cont++)
          {
               insert.prepare("insert into item_compra(ordem, id_pedido,id_produto, quantidade_comprada) values("+QString::number(cont)+","+QString::number(idMax())+","+i->getCodigo()+","+i->getQuantidade()+")");
               if(!insert.exec())
                 throw QString("Falha no cadastro do pedido!");
          }

    }

    void PersistenciaPedidoVenda::incluir(PedidoVenda obj, QString data, QString id_cliente)
    {
          QSqlQuery insert;

          if(id_cliente!="")
          {
              insert.prepare("insert into tb_pedidos(id, dataCompra, valorTotal, id_cliente) values("+obj.getID()+",'"+data+"',"+obj.getValorTotal()+","+id_cliente+")");

              if(!insert.exec())
                throw QString("Falha no cadastro do pedido!");

              insert.prepare("insert into cliente_pedido(id_cliente, id_pedido) values("+id_cliente+","+QString::number(idMax())+")");
              if(!insert.exec())
                throw QString("Falha no cadastro do pedido!");
          }else
          {
              insert.prepare("insert into tb_pedidos(id, dataCompra, valorTotal) values("+obj.getID()+",'"+data+"',"+obj.getValorTotal()+")");

              if(!insert.exec())
                throw QString("Falha no cadastro do pedido!");
          }
    }

    QSqlQuery PersistenciaPedidoVenda::tabelaCompleta(QString order)
    {
        QSqlQuery select("select * from tb_pedidos "+order);

        if(!select.exec())throw QString("Falha ao acessar o banco de dados!");

        return select;
    }

    QSqlQuery PersistenciaPedidoVenda::searchDate(QString key, QString order)
    {
        QSqlQuery select("select * from tb_pedidos WHERE dataCompra like '"+key+"%' "+order);

        if(!select.exec())throw QString("Falha ao acessar o banco de dados!");

        return select;
    }

    QSqlQuery PersistenciaPedidoVenda::searchForValuesLessThan(QString key, QString order)
    {
        QSqlQuery select("select * from tb_pedidos WHERE valorTotal < "+key+" "+order);

        if(!select.exec())throw QString("Falha ao acessar o banco de dados!");

        return select;
    }

    QSqlQuery PersistenciaPedidoVenda::searchForValuesGreaterThan(QString key, QString order)
    {
        QSqlQuery select("select * from tb_pedidos WHERE valorTotal > "+key+" "+order);

        if(!select.exec())throw QString("Falha ao acessar o banco de dados!");

        return select;
    }

    QSqlQuery PersistenciaPedidoVenda::searchForValuesBetween(QString key1, QString key2, QString order)
    {
        QSqlQuery select("select * from tb_pedidos WHERE valorTotal BETWEEN "+key1+" and "+key2+" "+order);

        if(!select.exec())throw QString("Falha ao acessar o banco de dados!");

        return select;
    }

    QSqlQuery PersistenciaPedidoVenda::searchForPurchasesByProduct(QString key, QString order)
    {
        QSqlQuery select;
        if(key[0]>='0' && key[0]<='9')select.prepare("select * from tb_pedidos ped inner join item_compra ic on (ic.id_pedido = ped.id) inner join tb_products p on (p.id = ic.id_produto) WHERE p.id like '"+key+"%' "+order);
        else select.prepare("select * from tb_pedidos ped inner join item_compra ic on (ic.id_pedido = ped.id) inner join tb_products p on (p.id = ic.id_produto) WHERE LOWER(p.nome) like '"+key.toLower()+"%' "+order);

        if(!select.exec())throw QString("Falha ao acessar o banco de dados!");

        return select;
    }
    QSqlQuery PersistenciaPedidoVenda::searchForSalesRelatedInformation(QString key, QString order)
    {
        QSqlQuery select;
        select.prepare("select ped.id as id_pedido, ped.dataCompra, valorTotal, p.id as id_produto, p.nome as nome_produto, p.preco,ic.quantidade_comprada, c.id as id_cliente, c.nome as nome_cliente, c.endereco, c.telefone, c.email from tb_pedidos ped left join tb_cliente c on (c.id = ped.id_cliente) inner join item_compra ic on (ped.id = ic.id_pedido) inner join tb_products p on(p.id = ic.id_produto) WHERE ped.id = "+key);

        if(!select.exec())throw QString("Falha ao acessar o banco de dados!");

        return select;
    }

    void PersistenciaPedidoVenda::atualizarEstoque(list<Produto> &listProd)
    {

        for(auto i=listProd.begin(); i!=listProd.end();i++)
        {
            QSqlQuery codUpdate("UPDATE tb_products SET id='"+i->getCodigo()+"'"+
                                                    ", nome='"+i->getNome()+"'"+
                                                    ", descricao='"+i->getDescricao()+"'"+
                                                    ", quantidade='"+i->getQuantidade()+"'"+
                                                    ", preco='"+i->getPreco()+"'"+
                                                    " WHERE id="+i->getCodigo()+";");
            if(!codUpdate.exec())
              throw QString("Falha ao atualizar o estoque!");
        }

    }

    int PersistenciaPedidoVenda::idMax()
    {
        QSqlQuery pesquisa("select MAX(id) as id from tb_pedidos");
        if(!pesquisa.exec())throw QString("Falha ao acessar o banco de dados!");

        pesquisa.next();
        int id = pesquisa.record().indexOf("id");
        return pesquisa.value(id).toInt();
    }


    void PersistenciaPedidoVenda::deleteTabelaPedidos()
    {
        QSqlQuery delet;
        delet.prepare("delete from item_compra;");
        delet.prepare("delete from cliente_pedido;");
        delet.prepare("delete from tb_pedidos;");
        if(!delet.exec())throw QString("Falha ao deletar os dados do sistema!");
        delet.prepare("DELETE FROM sqlite_sequence WHERE `name` = 'tb_pedidos';");
        if(!delet.exec())throw QString("Falha ao deletar os dados do sistema!");
    }
}
