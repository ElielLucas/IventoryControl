#include "persistenciacliente.h"
namespace HEV
{
    PersistenciaCliente::PersistenciaCliente()
    {
        QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("dbInventoryControl.db");
        if(!db.open())throw QString("Falha ao conectar ao banco de dados!");
    }
    int PersistenciaCliente::incluir(Cliente obj)
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

//        fstream arquivo;
//        arquivo.open(nomeDoArquivoC.toStdString().c_str(), std::ios::in |std::ios::out | std::ios::app);
//        QString id = "1";
//        if(!arquivo.is_open())
//            throw QString("Arquivo nao foi aberto");

//        ofstream tempC;
//        tempC.open("tempC.txt", std::ios::out | std::ios::app);

//        if(!tempC.is_open())
//            throw QString("Arquivo nao foi aberto");

//        string linha;
//        int novoid =0;
//        bool ok = false;
//        Cliente objInclud;
//        objInclud.montarDados(valor.toStdString());
//        getline(arquivo,linha);
//        while(!arquivo.eof())
//        {
//            Cliente aux;
//            aux.montarDados(linha);
//            tempC << linha  + "\n";
//            novoid = aux.getKey().toUInt();
//            id = QString::number(novoid + 1);

//            if(aux.getCPF() == objInclud.getCPF()) ok = true;

//            getline(arquivo,linha);
//        }
//        if(ok)
//        {
//            tempC.close();
//            remove("tempC.txt");
//            arquivo.close();
//            throw QString("CPF ja inserido");
//        }

//        objInclud.setID(id);
//        tempC << objInclud.desmontarDados().toStdString() + "\n";
//        arquivo.close();
//        tempC.close();

//        remove(nomeDoArquivoC.toStdString().c_str());
//        rename("tempC.txt", nomeDoArquivoC.toStdString().c_str());
    }

    void PersistenciaCliente::excluir(QString key)
    {
        QSqlQuery codDelete("DELETE FROM tb_cliente WHERE id="+key+";");

        if(!codDelete.exec())
          throw QString("Falha ao excluir o cliente!");

//        ifstream arquivo;
//        arquivo.open(nomeDoArquivoC.toStdString().c_str(), std::ios::in);
//        if(!arquivo.is_open())
//            throw QString("Arquivo nao foi aberto");

//        if(arquivo.eof())
//            throw QString("Nao foi possivel excluir.\n A lista esta vazia!");

//        ofstream tempC;
//        tempC.open("tempC.txt", std::ios::out);
//        if(!tempC.is_open())
//            throw QString("Erro de arquivo");

//        string linha;
//        Cliente aux, dat;
//        bool ok=false;
//        while(getline(arquivo, linha))
//        {
//            aux.montarDados(linha);
//            if(aux.getKey() != valor)
//                tempC << linha + "\n";
//            else
//            {
//                dat = aux;
//                ok = true;
//            }
//        }
//        arquivo.close();
//        tempC.close();

//        remove(nomeDoArquivoC.toStdString().c_str());
//        rename("tempC.txt", nomeDoArquivoC.toStdString().c_str());

//        if(!ok)throw QString("O cliente nÃ£o foi encontrado!");

//        return dat.desmontarDados();
    }

    int PersistenciaCliente::pesquisarIndex(QString key, QString order)
    {
        QSqlQuery codSelect("with aux as (SELECT ROW_NUMBER ( ) OVER("+order+") as linha, nome from tb_products) select * from aux where LOWER(nome)='"+key.toLower()+"'");

        if(!codSelect.exec())
          throw QString("Falha ao pesquisar o cliente!");

        codSelect.next();

        int linha = codSelect.record().indexOf("linha");

        return codSelect.value(linha).toInt();

        //terminar
    }
    Cliente PersistenciaCliente::pesquisarCliente(QString key)
    {
        QSqlQuery codSelect("select * from tb_cliente WHERE id="+key);

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
    QSqlQuery PersistenciaCliente::currentPosition(QString key)
    {
        QSqlQuery codSelect("SELECT * from tb_cliente WHERE LOWER(nome) like'"+key.toLower()+"%'");

        if(!codSelect.exec())
          throw QString("Falha ao pesquisar o cliente!");

        return codSelect;
    }
//    QString PersistenciaCliente::pesquisar(QString valor)
//    {
//        ifstream arquivo;
//        arquivo.open(nomeDoArquivoC.toStdString().c_str(), std::ios::in);
//        if(!arquivo.is_open())
//            throw QString("Arquivo nÃ£o foi aberto");
//        if(arquivo.eof())
//            throw QString("Nao foi possivel procurar.\n A lista esta vazia!");

//        string linha;
//        Cliente aux,arm;
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
//            throw QString("Cliente nao encontrado");

//        return arm.desmontarDados();
//    }

    void PersistenciaCliente::alterar(Cliente obj)
    {
        QSqlQuery codUpdate("UPDATE tb_cliente SET nome='"+obj.getNome()+"'"+
                                                ", endereco='"+obj.getEndereco()+"'"+
                                                ", telefone='"+obj.getTelefone()+"'"+
                                                ", email='"+obj.getEmail()+"'"+
                                                " WHERE id="+obj.getID()+";");

        if(!codUpdate.exec())
          throw QString("Falha ao alterar o cliente!");


//        ifstream arquivo;
//        arquivo.open(nomeDoArquivoC.toStdString().c_str(), std::ios::out);
//        if(!arquivo.is_open())
//            throw QString("Arquivo nÃ£o foi aberto");
//        if(arquivo.eof())
//            throw QString("Nao foi possivel alterar.\n A lista esta vazia!");

//        ofstream temp;
//        temp.open("tempC.txt", std::ios::out);
//        if(!temp.is_open())
//            throw QString("Erro de arquivo");

//        string linha;
//        Cliente aux,arm, dadosAlterados;
//        dadosAlterados.montarDados(obj.toStdString());
//        bool ok = false;
//        while(getline(arquivo, linha))
//        {
//            aux.montarDados(linha);
//            if(aux.getKey() == dadosAlterados.getKey())
//            {
//                aux.setNome(dadosAlterados.getNome());
//                aux.setEndereco(dadosAlterados.getEndereco());
//                aux.setTelefone(dadosAlterados.getTelefone());
//                aux.setCpf(dadosAlterados.getCPF());

//                linha = aux.desmontarDados().toStdString();
//                ok = true;
//            }
//            temp << linha + "\n";
//        }
//        arquivo.close();
//        temp.close();

//        remove(nomeDoArquivoC.toStdString().c_str());
//        rename("tempC.txt", nomeDoArquivoC.toStdString().c_str());
//        if(!ok)
//            throw QString("Nao foi possÃ­vel alterar!");
    }

    QSqlQuery PersistenciaCliente::criarLista(QString order)
    {
        QSqlQuery codSelect("SELECT * from tb_cliente "+order);

        if(!codSelect.exec())
          throw QString("Falha ao montar lista!");

        return codSelect;


//        fstream arquivo;
//        arquivo.open(nomeDoArquivoC.toStdString().c_str(), std::ios::in |std::ios::out | std::ios::app);

//        if(!arquivo.is_open())
//            throw QString("Arquivo nao foi aberto");
//        if(arquivo.eof())
//            throw QString("Nao foi possivel gerar a lista.\n A lista esta vazia!");

//        string linha;
//        List<Cliente> lista;

//        while(getline(arquivo,linha))
//        {
//            Cliente p;
//            p.montarDados(linha);
//            lista.insert(&p);
//        }
//        arquivo.close();
//        return lista;
    }

    int PersistenciaCliente::idMax()
    {
        QSqlQuery pesquisa("select MAX(id) as id from tb_cliente");
        if(!pesquisa.exec())throw QString("Falha ao acessar o banco de dados!");

        int id = pesquisa.record().indexOf("id");
        return pesquisa.value(id).toInt();
    }


}
