#include "persistenciaproduto.h"
namespace HEV
{
    PersistenciaProduto::PersistenciaProduto()
    {
        QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("dbInventoryControl.db");
        if(!db.open())throw QString("Falha ao conectar ao banco de dados!");
    }
    void PersistenciaProduto::incluir(Produto obj)
    {
        QSqlQuery codInsertion;
        codInsertion.prepare("insert into tb_products(id, nome, descricao, quantidade, preco) values"
                  "('"+obj.getCodigo()+"','"+obj.getNome()+"','"+obj.getDescricao()+"','"+obj.getQuantidade()+"','"+obj.getPreco()+"')");
        if(!codInsertion.exec())
          throw QString("Falha no cadastro do produto!");

//        fstream arquivo;
//        arquivo.open(nomeDoArquivoP.toStdString().c_str(), std::ios::in |std::ios::out | std::ios::app);

//        if(!arquivo.is_open())
//             throw QString("Arquivo nao foi aberto");

//        string linha;
//        List<Produto> lista;
//        Produto inserir;
//        bool ok = false;
//        inserir.montarDados(valor.toStdString());

//        while(getline(arquivo,linha))
//        {
//             Produto aux;
//             aux.montarDados(linha);
//             if(aux.getCodigo()==inserir.getCodigo())
//             {
//                  ok=true;
//             }else lista.insert(&aux);
//        }

//        if (!ok)lista.insert(&inserir);

//        arquivo.close();

//        ofstream temp;
//        temp.open("temp.txt", std::ios::out | std::ios::app);

//        if(!temp.is_open())
//            throw QString("Arquivo nao foi aberto");

//        while(!lista.isEmpty())
//        {
//            Produto aux=lista.pegarPrimeiro();
//            QString texto=aux.desmontarDados();
//            temp<<texto.toStdString()+"\n";
//        }
//        temp.close();
//        remove(nomeDoArquivoP.toStdString().c_str());
//        rename("temp.txt", nomeDoArquivoP.toStdString().c_str());
//        if (ok)
//           throw QString("No estoque, já existe outro produto com este código");
    }

    void PersistenciaProduto::excluir(QString key, int opcao)
    {
        QSqlQuery codDelete;

        if(opcao==0)codDelete.prepare("DELETE FROM tb_products WHERE id="+key+";");
        else if(opcao==1)codDelete.prepare("DELETE FROM tb_products WHERE nome='"+key+"';");

        if(!codDelete.exec())
          throw QString("Falha ao excluir o produto!");

//        ifstream arquivo;
//        arquivo.open(nomeDoArquivoP.toStdString().c_str(), std::ios::in);
//        if(!arquivo.is_open())
//            throw QString("Arquivo nao foi aberto");

//        if(arquivo.eof())
//            throw QString("Nao foi possivel excluir.\n Nao tem estoque!");

//        ofstream temp;
//        temp.open("temp.txt", std::ios::out);
//        if(!temp.is_open())
//            throw QString("Erro de arquivo");

//        string linha;
//        Produto aux,dat;
//        bool ok=false;
//        while(getline(arquivo, linha))
//        {
//            aux.montarDados(linha);
//            if(aux.getKey() != valor)
//                temp << linha + "\n";
//            else
//            {
//                dat = aux;
//                ok = true;
//            }
//        }
//        arquivo.close();
//        temp.close();

//        remove(nomeDoArquivoP.toStdString().c_str());
//        rename("temp.txt", nomeDoArquivoP.toStdString().c_str());

//        if(!ok)throw QString("O produto não foi encontrado em estoque!");

//        return dat.desmontarDados();
    }

    int PersistenciaProduto::pesquisarIndex(QString key, int opcao, QString order)
    {
        QSqlQuery codSelect;
        if(opcao==0)
             codSelect.prepare("with aux as (SELECT ROW_NUMBER ( ) OVER("+order+") as linha, id from tb_products) select * from aux where id="+key);
        else
            codSelect.prepare("with aux as (SELECT ROW_NUMBER ( ) OVER("+order+") as linha, nome from tb_products) select * from aux where LOWER(nome)='"+key.toLower()+"'");


        if(!codSelect.exec())
          throw QString("Falha ao pesquisar o produto!");

        codSelect.next();

        int linha = codSelect.record().indexOf("linha");

        return codSelect.value(linha).toInt();

//        ifstream arquivo;
//        arquivo.open(nomeDoArquivoP.toStdString().c_str(), std::ios::in);
//        if(!arquivo.is_open())
//            throw QString("Arquivo não foi aberto");
//        if(arquivo.eof())
//            throw QString("Nao foi possivel procurar.\n Nao tem estoque!");

//        string linha;
//        Produto aux,arm;
//        bool ok=false;
//        getline(arquivo, linha);
//        while(!arquivo.eof())
//        {
//            aux.montarDados(linha);
//            if(aux.getKey() == valor)
//            {
//                arm=aux;
//                ok=true;
//            }
//            getline(arquivo, linha);
//        }

//        arquivo.close();
//        if (!ok)
//            throw QString("Produto nao encontrado");

//        return arm.desmontarDados();
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

//        ifstream arquivo;
//        arquivo.open(nomeDoArquivoP.toStdString().c_str(), std::ios::in);
//        if(!arquivo.is_open())
//            throw QString("Arquivo não foi aberto");
//        if(arquivo.eof())
//            throw QString("Nao foi possivel alterar.\n Nao tem estoque!");

//        ofstream temp;
//        temp.open("temp.txt", std::ios::out);
//        if(!temp.is_open())
//            throw QString("Erro de arquivo");

//        string linha;
//        Produto aux,arm,dadosAlterados;
//        dadosAlterados.montarDados(obj.toStdString());
//        bool ok=false;
//        while(getline(arquivo, linha))
//        {
//            aux.montarDados(linha);
//            if(aux.getCodigo() == dadosAlterados.getCodigo())
//            {
//                aux.setDescricao(dadosAlterados.getDescricao());
//                aux.setQuantidade(dadosAlterados.getQuantidade());
//                aux.setPreco(dadosAlterados.getPreco());

//                linha=aux.desmontarDados().toStdString();
//                ok=true;
//            }
//            temp << linha + "\n";
//        }
//        arquivo.close();
//        temp.close();

//        remove(nomeDoArquivoP.toStdString().c_str());
//        rename("temp.txt", nomeDoArquivoP.toStdString().c_str());
//        if(!ok)
//            throw QString("Não foi possível alterar!");
  }

    QSqlQuery PersistenciaProduto::criarLista(QString order)
    {
        QSqlQuery codSelect("SELECT * from tb_products "+order);

        if(!codSelect.exec())
          throw QString("Falha ao montar lista!");

        return codSelect;

//        HEV::Tree saida;
//        while (codSelect.next())
//        {
//            Produto aux(codSelect.value(iCod).toString(),codSelect.value(iNome).toString(),codSelect.value(iQuant).toString(),codSelect.value(iPrec).toString());
//            saida.push(&aux);
//        }

//        fstream arquivo;
//        arquivo.open(nomeDoArquivoP.toStdString().c_str(), std::ios::in |std::ios::out | std::ios::app);

//        if(!arquivo.is_open())
//            throw QString("Arquivo nao foi aberto");
//        if(arquivo.eof())
//            throw QString("Nao foi possivel gerar lista.\n Nao tem estoque!");

//        string linha;
//        List<Produto> lista;

//        while(getline(arquivo,linha))
//        {
//            Produto p;
//            p.montarDados(linha);
//            lista.insert(&p);
//        }
//        arquivo.close();
//        return lista;
    }

    int PersistenciaProduto::currentPosition(QString key, QString comand, int opcao)
    {
        QSqlQuery codSelect;

        if(opcao==0)codSelect.prepare("SELECT row_number() over (order by "+comand+") as ROW from tb_products WHERE id="+key+";");
        else if(opcao==1)codSelect.prepare("SELECT row_number() over (order by "+comand+") as ROW from tb_products WHERE nome='"+key+"';");

        if(!codSelect.exec())
          throw QString("Falha ao pesquisar o produto!");

        int row = codSelect.record().indexOf("ROW");

        codSelect.next();
        int saida = codSelect.value(row).toInt();

        return saida-1;
    }
}

