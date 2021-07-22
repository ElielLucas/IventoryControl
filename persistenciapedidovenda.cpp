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

          QString organizeDate=QString::number(obj.getDataHorasCompra().date().year())+"-"+QString::number(obj.getDataHorasCompra().date().month())+"-"+QString::number(obj.getDataHorasCompra().date().day());
          insert.prepare("insert into tb_pedidos(dataCompra, valorTotal, id_cliente) values('"+organizeDate+"',"+obj.getValorTotal()+","+id_cliente+")");

          if(!insert.exec())
            throw QString("Falha no cadastro do pedido!");

          list<Produto> listAux = obj.getListaCurso();
          for(auto i=listAux.begin();i!=listAux.end();i++)
          {
               insert.prepare("insert into produto_cliente(id_produto, id_cliente, dataCompraInstanciaDeProduto) values("+i->getCodigo()+","+id_cliente+",'"+organizeDate+"')");
               if(!insert.exec())
                 throw QString("Falha no cadastro do pedido!");
               insert.prepare("insert into produto_pedido(id_produto, id_pedido, quantidade_comprada) values("+i->getCodigo()+","+QString::number(idMax())+","+i->getQuantidade()+")");
               if(!insert.exec())
                 throw QString("Falha no cadastro do pedido!");
          }

//       QString id="1";
//       fstream arquivoPV;
//       arquivoPV.open(nomeDoArquivoPV.toStdString().c_str(), std::ios::in |std::ios::out | std::ios::app);

//       if(!arquivoPV.is_open())
//           throw QString("Arquivo nao foi aberto");

//       ofstream tempPV;
//       tempPV.open("tempPV.txt", std::ios::out | std::ios::app);

//       if(!tempPV.is_open())
//           throw QString("Arquivo nao foi aberto");

//       string linha;
//       int novoid =0;
//       PedidoVenda objInclud;
//       objInclud.montarDados(valor.toStdString());

//       if (!arquivoPV.eof()){
//           while(getline(arquivoPV,linha))
//           {
//                PedidoVenda aux;
//                aux.montarDados(linha);
//                tempPV<<linha+"\n";
//                novoid=aux.getKey().toUInt();
//                id= QString::number(novoid + 1);
//           }
//       }

//       objInclud.setIDPedido(id);
//       tempPV << objInclud.desmontarDados().toStdString() + "\n";
//       arquivoPV.close();
//       tempPV.close();

//       remove(nomeDoArquivoPV.toStdString().c_str());
//       rename("tempPV.txt", nomeDoArquivoPV.toStdString().c_str());
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
        if(key[0]>='0' && key[0]<='9')select.prepare("select * from tb_pedidos ped inner join produto_pedido pp on (pp.id_pedido = ped.id) inner join tb_products p on (p.id = pp.id_produto) WHERE p.id like '"+key+"%' "+order);
        else select.prepare("select * from tb_pedidos ped inner join produto_pedido pp on (pp.id_pedido = ped.id) inner join tb_products p on (p.id = pp.id_produto) WHERE LOWER(p.nome) like '"+key.toLower()+"%' "+order);

        if(!select.exec())throw QString("Falha ao acessar o banco de dados!");

        return select;
    }
    QSqlQuery PersistenciaPedidoVenda::searchForSalesRelatedInformation(QString key, QString order)
    {
        QSqlQuery select;
        select.prepare("select ped.id as id_pedido, dataCompra, valorTotal, p.id as id_produto, p.nome as nome_produto, p.preco,pp.quantidade_comprada, c.id as id_cliente, c.nome as nome_cliente, c.endereco, c.telefone, c.email from tb_pedidos ped inner join produto_pedido pp on (pp.id_pedido = ped.id) inner join tb_products p on (p.id = pp.id_produto) inner join produto_cliente pc on (pc.id_produto = p.id) inner join tb_cliente c on (c.id = pc.id_cliente) WHERE ped.id = "+key+" "+order);

        if(!select.exec())throw QString("Falha ao acessar o banco de dados!");

        return select;
    }

    QString PersistenciaPedidoVenda::pesquisar(QString valor)
    {
//        ifstream arquivo;
//        arquivo.open(nomeDoArquivoPV.toStdString().c_str(), std::ios::in);
//        if(!arquivo.is_open())
//            throw QString("Erro ao abrir o arquivo!");
//        if(arquivo.eof())
//            throw QString("Não tem pedidos");

//        string linha;
//        bool ok=false;
//        PedidoVenda arm;
//        getline(arquivo, linha);

//        while(!arquivo.eof())
//        {
//            PedidoVenda aux;
//            aux.montarDados(linha);
//            if(aux.getKey() == valor)
//            {
//                arm=aux;
//                ok=true;
//            }
//            getline(arquivo, linha);
//        }
//        arquivo.close();

//        if(!ok)
//            throw QString("Pedido não encontrado!");

//        return arm.desmontarDados();
    }

//    List<PedidoVenda> PersistenciaPedidoVenda::criarLista()
//    {
//        fstream arquivo;
//        arquivo.open(nomeDoArquivoPV.toStdString().c_str(), std::ios::in |std::ios::out | std::ios::app);

//        if(!arquivo.is_open())
//            throw QString("Arquivo nao foi aberto");
//        if(arquivo.eof())
//            throw QString("Arquivo esta vazio");

//        string linha;
//        List<PedidoVenda> lista;

//        while(getline(arquivo,linha))
//        {
//            PedidoVenda p;
//            p.montarDados(linha);
//            lista.insert(&p);
//        }
//        arquivo.close();
//        return lista;
//    }

//    List<PedidoVenda> PersistenciaPedidoVenda::criarListaporCliente(QString n)
//    {
//        fstream arquivo;
//        arquivo.open(nomeDoArquivoPV.toStdString().c_str(), std::ios::in |std::ios::out | std::ios::app);

//        if(!arquivo.is_open())
//            throw QString("Arquivo nao foi aberto");
//        if(arquivo.eof())
//            throw QString("Arquivo esta vazio");

//        string linha;
//        List<PedidoVenda> lista;

//        while(getline(arquivo,linha))
//        {
//            PedidoVenda p;
//            p.montarDados(linha);
//            if (p.getIDCliente() == n){
//                lista.insert(&p);
//            }
//        }
//        arquivo.close();
//        if (lista.size() == 0)
//            throw QString("O cliente não fez nenhum pedido");
//        return lista;
//    }

    QSqlQuery PersistenciaPedidoVenda::currentPosition(QString key, int opcao)
    {
        QSqlQuery codSelect("SELECT * from tb_products WHERE LOWER(nome) like'"+key.toLower()+"%'");

        if(!codSelect.exec())
          throw QString("Falha ao pesquisar o produto!");

        return codSelect;
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

//           ofstream tempP;
//           tempP.open("tempP.txt", std::ios::out | std::ios::app);

//           if(!tempP.is_open())
//               throw QString("Arquivo nao foi aberto");

//           while(!listProd->isEmpty())
//           {
//               Produto aux=listProd->pegarPrimeiro();
//               string texto=aux.desmontarDados().toStdString();

//               tempP<<texto+"\n";
//           }
//           tempP.close();

//           remove("arquivoProdutos.txt");
//           rename("tempP.txt", "arquivoProdutos.txt");
    }

    int PersistenciaPedidoVenda::idMax()
    {
        QSqlQuery pesquisa("select MAX(id) as id from tb_pedidos");
        if(!pesquisa.exec())throw QString("Falha ao acessar o banco de dados!");

        pesquisa.next();
        int id = pesquisa.record().indexOf("id");
        return pesquisa.value(id).toInt();
    }
}
