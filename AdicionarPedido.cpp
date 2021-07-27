#include "AdicionarPedido.h"
#include "ui_AdicionarPedido.h"

AdicionarPedido::AdicionarPedido(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdicionarPedido)
{
    ui->setupUi(this);
    setWindowIcon(QIcon(":/imgs/images/icone.png"));
    currentOrder="";
    iniciarListas();

    on_comboBox_currentIndexChanged(0);
}

AdicionarPedido::~AdicionarPedido()
{
    delete ui;
}

void AdicionarPedido::on_lineEditSearchPedido_textEdited()
{
    try
       {
           int n = ui->twListarPedidos->rowCount();
           for (int i = n; i >= 0; i--)ui->twListarPedidos->removeRow(i);

           QString key=ui->lineEditSearchPedido->text();

           if(key!="")
           {
               int escolhaComboBox = ui->comboBoxTipoPesquisa->currentIndex();
               QSqlQuery tabela;
               persistencia = new PersistenciaPedidoVenda;
               if(escolhaComboBox==0)
               {
                   tabela=persistencia->searchDate(key,currentOrder);
               }else if(escolhaComboBox==1)
               {
                   tabela=persistencia->searchForValuesGreaterThan(key,currentOrder);
               }else if(escolhaComboBox==2)
               {
                   tabela=persistencia->searchForValuesLessThan(key,currentOrder);
               }else if(escolhaComboBox==4)
               {
                   tabela=persistencia->searchForPurchasesByProduct(key,currentOrder);
               }

               int iCod, iDat, iValorTotal;
               iCod = tabela.record().indexOf("id");
               iDat = tabela.record().indexOf("dataCompra");
               iValorTotal = tabela.record().indexOf("valorTotal");

               int linha = 0;
               while (tabela.next())
               {
                   ui->twListarPedidos->insertRow(linha);
                   ui->twListarPedidos->setItem(linha,0,new QTableWidgetItem(tabela.value(iCod).toString()));
                   ui->twListarPedidos->setItem(linha,1,new QTableWidgetItem(prepareDate(tabela.value(iDat).toString())));
                   ui->twListarPedidos->setItem(linha,2,new QTableWidgetItem(valorDuasCasa(tabela.value(iValorTotal).toString())));
                   linha++;
               }
               ui->twListarPedidos->setRowCount(linha);
               delete persistencia;

           }else organizeOrder();
       } catch (QString erro)
       {
           QMessageBox::information(this,"Erro", erro);
       }
}

void AdicionarPedido::on_lineEditSearchProduto_textEdited()
{
    try
    {
        QStringList key = ui->lineEditSearchProduto->text().split(' ');

        int n = ui->twProdutos->rowCount();
        for (int i = n; i >= 0; i--)ui->twProdutos->removeRow(i);

        QString x="";
        for(int i=0;i<key.size();i++)x+=key[i];

        persistencia = new PersistenciaProduto;
        QSqlQuery list = persistencia->filteredSearch(x);
        int linha = 0;

        int iCod, iNome, iQuantidade, iPreco;
        iCod = list.record().indexOf("id");
        iNome = list.record().indexOf("nome");
        iQuantidade = list.record().indexOf("quantidade");
        iPreco = list.record().indexOf("preco");

        while (list.next())
        {
            ui->twProdutos->insertRow(linha);
            ui->twProdutos->setItem(linha,0,new QTableWidgetItem(list.value(iCod).toString()));
            ui->twProdutos->setItem(linha,1,new QTableWidgetItem(list.value(iNome).toString()));
            ui->twProdutos->setItem(linha,2,new QTableWidgetItem(list.value(iQuantidade).toString()));
            ui->twProdutos->setItem(linha,3,new QTableWidgetItem(valorDuasCasa(list.value(iPreco).toString())));
            linha++;
        }

        ui->twProdutos->setRowCount(linha);
        delete persistencia;

    } catch (QString erro)
    {
        QMessageBox::information(this,"Erro",erro);
    }
}

void AdicionarPedido::on_dateEditSearchPedido_dateChanged(const QDate &date)
{
    try
    {
        QString key = date.toString("yyyy-MM-dd");

        persistencia = new PersistenciaPedidoVenda;
        QSqlQuery tabela=persistencia->searchDate(key,currentOrder);
        int iCod, iDat, iValorTotal, iIdCliente;
        iCod = tabela.record().indexOf("id");
        iDat = tabela.record().indexOf("dataCompra");
        iValorTotal = tabela.record().indexOf("valorTotal");
        iIdCliente = tabela.record().indexOf("id_cliente");

        int linha = 0;
        while (tabela.next())
        {
            ui->twListarPedidos->insertRow(linha);
            ui->twListarPedidos->setItem(linha,0,new QTableWidgetItem(tabela.value(iCod).toString()));
            ui->twListarPedidos->setItem(linha,1,new QTableWidgetItem(prepareDate(tabela.value(iDat).toString())));
            ui->twListarPedidos->setItem(linha,2,new QTableWidgetItem(valorDuasCasa(tabela.value(iValorTotal).toString())));
            linha++;
        }
        ui->twListarPedidos->setRowCount(linha);
        delete persistencia;

    }catch (QString erro)
    {
        QMessageBox::information(this,"Erro",erro);
    }
}


void AdicionarPedido::on_lineEditValorY_textEdited()
{
    try
    {
        int n = ui->twListarPedidos->rowCount();
        for (int i = n; i >= 0; i--)ui->twListarPedidos->removeRow(i);

        QString key1 = ui->lineEditValorX->text();
        QString key2 = ui->lineEditValorY->text();

        if(key1=="" || key2=="")key1=key2="";

        if(key1!="" && key2!="")
        {
            QSqlQuery tabela;

            persistencia = new PersistenciaPedidoVenda;
            tabela=persistencia->searchForValuesBetween(key1, key2, currentOrder);

            int iCod, iDat, iValorTotal;
            iCod = tabela.record().indexOf("id");
            iDat = tabela.record().indexOf("dataCompra");
            iValorTotal = tabela.record().indexOf("valorTotal");

            int linha = 0;
            while (tabela.next())
            {
                ui->twListarPedidos->insertRow(linha);
                ui->twListarPedidos->setItem(linha,0,new QTableWidgetItem(tabela.value(iCod).toString()));
                ui->twListarPedidos->setItem(linha,1,new QTableWidgetItem(prepareDate(tabela.value(iDat).toString())));
                ui->twListarPedidos->setItem(linha,2,new QTableWidgetItem(valorDuasCasa(tabela.value(iValorTotal).toString())));      
                linha++;
            }
            ui->twListarPedidos->setRowCount(linha);

        }else organizeOrder();
    } catch (QString erro)
    {
        QMessageBox::information(this,"Erro", erro);
    }
}

void AdicionarPedido::on_twProdutos_itemDoubleClicked(QTableWidgetItem *item)
{
    try
    {
        if (ui->twProdutos->currentRow() >= 0)
        {
            bool ok;
            int linha = ui->twProdutos->currentRow();
            int id = ui->twProdutos->item(linha, 0)->text().toUInt();
            int qtde = ui->twProdutos->item(linha, 2)->text().toInt();
            int num = (QInputDialog::getText(this, "Quantidade de produto", "Digite a quantidade que deseja desse produto: ",QLineEdit::Normal,QString(),&ok)).toDouble();

            if (ok)
            {
                if (num > qtde || num < 0)QMessageBox::information(this, "Inválido", "Quantidade invalida");
                else
                {
                    list<Thing>::iterator IT;
                    for(IT = comprarProduto.begin();IT!=comprarProduto.end() && IT->getCodigo() != QString::number(id);IT++);

                    if ((qtde - num) >= 0)IT->setQuantidade(QString::number(qtde-num));

                    Thing novo = *IT;
                    if(!escolhidos.empty())
                    {
                        for(IT = escolhidos.begin();IT!=escolhidos.end() && IT->getCodigo() != QString::number(id);IT++);
                        if (IT!=escolhidos.end() && IT->getCodigo()==QString::number(id))IT->setQuantidade(QString::number(IT->getQuantidade().toInt() + num));
                        else
                        {
                            novo.setQuantidade(QString::number(num));
                            escolhidos.push_back(novo);
                        }
                    }
                    else
                    {
                        novo.setQuantidade(QString::number(num));
                        escolhidos.push_back(novo);
                    }

                    gerarListaProdutosEstoqueProvisorio();
                    gerarListaDeCompra();
                }
            }
        }
    } catch (QString erro)
    {
        QMessageBox::information(this,"Erro", erro);
    }
}

void AdicionarPedido::on_twPedido_itemDoubleClicked(QTableWidgetItem *item)
{
    try
    {
        if (ui->twPedido->currentRow() >= 0)
        {
            int linha = ui->twPedido->currentRow();
            int id = ui->twPedido->item(linha, 0)->text().toInt();
            int quantAux = ui->twPedido->item(linha, 2)->text().toInt();

            Produto key;
            key.setCodigo(QString::number(id));

            list<Thing>::iterator IT;
            for(IT = comprarProduto.begin();IT!=comprarProduto.end() && IT->getCodigo() != QString::number(id);IT++);
            if (IT->getCodigo()==QString::number(id))
            {
                int qtde = IT->getQuantidade().toInt() + quantAux;
                IT->setQuantidade(QString::number(qtde));
            }

            int i=0;
            for(IT = escolhidos.begin(); IT!=escolhidos.end() && IT->getCodigo() != QString::number(id);IT++, i++);
            escolhidos.erase(IT);

            gerarListaProdutosEstoqueProvisorio();
            gerarListaDeCompra();
       }

    }
    catch (QString erro)
    {
        QMessageBox::information(this,"Erro",erro);
    }
}

void AdicionarPedido::on_btnFinalizarPedido_clicked()
{
    try
    {
        int id=-1;

        if(ui->comboBox->currentIndex()==0)
        {
            Cliente novoCliente(ui->lineEditNome->text(),ui->lineEditEndereco->text(),ui->lineEditTelefone->text(),ui->lineEditCadastroEmailCliente->text());
            persistencia = new PersistenciaCliente;
            id = persistencia->incluir(novoCliente);
            delete persistencia;
        }else if(ui->comboBox->currentIndex()==1)
        {
            int linha = ui->tbWidgetInformacoesCliente->currentRow();
            QTableWidgetItem *aux(ui->tbWidgetInformacoesCliente->item(linha,0));

            QString key = aux->text();
            id = key.toInt();         
        }

        PedidoVenda novoPedido(ui->dateTimeEdit->dateTime(), ui->lblValorTotal->text(),escolhidos);

        persistencia = new PersistenciaPedidoVenda;
        if(id>=0)persistencia->incluir(novoPedido, QString::number(id));
        else persistencia->incluir(novoPedido,"");
        persistencia->atualizarEstoque(comprarProduto);
        delete persistencia;

        QMessageBox::information(this,"Compra", "Compra realizada com sucesso.");
        limparIncluirPedido();
        gerarListaProdutosEstoque();
    }
    catch (QString erro)
    {
        QMessageBox::information(this,"Erro",erro);
    }
}

void AdicionarPedido::on_twListarPedidos_itemDoubleClicked(QTableWidgetItem *item)
{
    try
    {
        ui->quadradim->setVisible(true);
        int linha = item->row();
        QString cod = ui->twListarPedidos->item(linha,0)->text();

        persistencia = new PersistenciaPedidoVenda;
        QSqlQuery tabela = persistencia->searchForSalesRelatedInformation(cod, currentOrder);

        ui->frMostrarLista->setVisible(true);

        int idPedido = tabela.record().indexOf("id_pedido");
        int Dat = tabela.record().indexOf("dataCompra");
        int iValorTotal = tabela.record().indexOf("valorTotal");
        int idProd = tabela.record().indexOf("id_produto");
        int nomeProduto = tabela.record().indexOf("nome_produto");
        int preco = tabela.record().indexOf("preco");
        int quantidadeComprada = tabela.record().indexOf("quantidade_comprada");
        int idCliente = tabela.record().indexOf("id_cliente");
        int nomeCliente = tabela.record().indexOf("nome_cliente");
        int endereco = tabela.record().indexOf("endereco");
        int telefone = tabela.record().indexOf("telefone");
        int email = tabela.record().indexOf("email");

        tabela.next();
        ui->labelIDPedido->setText(tabela.value(idPedido).toString());
        ui->labelIDCliente->setText(tabela.value(idCliente).toString());
        ui->labelNomeCliente->setText(tabela.value(nomeCliente).toString());
        ui->labelEnderecoCliente->setText(tabela.value(endereco).toString());
        ui->labelTelefoneCliente->setText(tabela.value(telefone).toString());
        ui->labelEmailCliente->setText(tabela.value(email).toString());
        ui->labelDataCompra->setText(prepareDate(tabela.value(Dat).toString()));
        ui->labelValorTotalCompra->setText(valorDuasCasa(tabela.value(iValorTotal).toString()));

        linha=0;
        int qnt = tabela.value(quantidadeComprada).toInt();
        float valorUnitario = tabela.value(preco).toFloat();
        ui->twProdutosLista->insertRow(linha);
        ui->twProdutosLista->setItem(linha,0,new QTableWidgetItem(tabela.value(idProd).toString()));
        ui->twProdutosLista->setItem(linha,1,new QTableWidgetItem(tabela.value(nomeProduto).toString()));
        ui->twProdutosLista->setItem(linha,2,new QTableWidgetItem(tabela.value(quantidadeComprada).toString()));
        ui->twProdutosLista->setItem(linha,3,new QTableWidgetItem(valorDuasCasa(QString::number(valorUnitario))));
        ui->twProdutosLista->setItem(linha,4,new QTableWidgetItem(valorDuasCasa(QString::number(qnt*valorUnitario))));
        linha++;
        while (tabela.next())
        {
            qnt = tabela.value(quantidadeComprada).toInt();
            valorUnitario = tabela.value(preco).toFloat();
            ui->twProdutosLista->insertRow(linha);
            ui->twProdutosLista->setItem(linha,0,new QTableWidgetItem(tabela.value(idProd).toString()));
            ui->twProdutosLista->setItem(linha,1,new QTableWidgetItem(tabela.value(nomeProduto).toString()));           
            ui->twProdutosLista->setItem(linha,2,new QTableWidgetItem(QString::number(qnt)));
            ui->twProdutosLista->setItem(linha,3,new QTableWidgetItem(valorDuasCasa(QString::number(valorUnitario))));
            ui->twProdutosLista->setItem(linha,4,new QTableWidgetItem(valorDuasCasa(QString::number(qnt*valorUnitario))));
            linha++;
        }

        ui->twProdutosLista->setRowCount(linha);
        delete persistencia;
    }
    catch (QString erro)
    {
        QMessageBox::information(this,"Erro",erro);
    }
}

void AdicionarPedido::on_txtSearchCliente_textEdited()
{
    try
    {
        ui->tbWidgetInformacoesCliente->setHorizontalHeaderLabels({"ID", "Nome", "Endereco", "Telefone", "Email"});
        QString key = ui->txtSearchCliente->text();

        int n = ui->tbWidgetInformacoesCliente->rowCount();
        for (int i = n; i >= 0; i--)ui->tbWidgetInformacoesCliente->removeRow(i);

        persistencia = new PersistenciaCliente;
        QSqlQuery list = persistencia->filteredSearch(key);
        int linha = 0;

        int iCod, iNome, iEndereco, iTelefone, iEmail;
        iCod = list.record().indexOf("id");
        iNome = list.record().indexOf("nome");
        iEndereco = list.record().indexOf("endereco");
        iTelefone = list.record().indexOf("telefone");
        iEmail = list.record().indexOf("email");

        while (list.next())
        {
            ui->tbWidgetInformacoesCliente->insertRow(linha);
            ui->tbWidgetInformacoesCliente->setItem(linha,0,new QTableWidgetItem(list.value(iCod).toString()));
            ui->tbWidgetInformacoesCliente->setItem(linha,1,new QTableWidgetItem(list.value(iNome).toString()));
            ui->tbWidgetInformacoesCliente->setItem(linha,2,new QTableWidgetItem(list.value(iEndereco).toString()));
            ui->tbWidgetInformacoesCliente->setItem(linha,3,new QTableWidgetItem(list.value(iTelefone).toString()));
            ui->tbWidgetInformacoesCliente->setItem(linha,4,new QTableWidgetItem(list.value(iEmail).toString()));
            linha++;
        }

        ui->tbWidgetInformacoesCliente->setRowCount(linha);
        delete persistencia;
    }catch (QString erro)
    {
        QMessageBox::information(this,"Erro",erro);
    }
}


void AdicionarPedido::gerarListaProdutosEstoque()
{
    try
    {
        int n = ui->twProdutos->rowCount();
        for (int i = n; i >= 0; i--)ui->twProdutos->removeRow(i);

        list<Thing> aux;

        persistencia= new PersistenciaProduto;
        QSqlQuery list = persistencia->criarListaEstoque("order by id");
        int linha = 0;

        int iCod, iNome, iQuant, iPrec;
        iCod = list.record().indexOf("id");
        iNome = list.record().indexOf("nome");
        iQuant = list.record().indexOf("quantidade");
        iPrec = list.record().indexOf("preco");
        while (list.next())
        {
            ui->twProdutos->insertRow(linha);
            QString cod = list.value(iCod).toString();
            QString nome = list.value(iNome).toString();
            QString quant = list.value(iQuant).toString();
            QString prec = list.value(iPrec).toString();

            ui->twProdutos->setItem(linha,0,new QTableWidgetItem(cod));
            ui->twProdutos->setItem(linha,1,new QTableWidgetItem(nome));
            ui->twProdutos->setItem(linha,2,new QTableWidgetItem(quant));
            ui->twProdutos->setItem(linha,3,new QTableWidgetItem(valorDuasCasa(prec)));

            aux.push_back(Produto(cod, nome, quant, prec, ""));
            linha++;
        }

        comprarProduto = aux;

        ui->twProdutos->setRowCount(linha);
        delete persistencia;
    }
    catch (QString erro)
    {
        QMessageBox::information(this,"Erro",erro);
    }
}

void AdicionarPedido::gerarListaProdutosEstoqueProvisorio()
{
    try
    {
        int n = ui->twProdutos->rowCount();
        for (int i = n; i >= 0; i--)ui->twProdutos->removeRow(i);

        int linha=0;

        for(auto i=comprarProduto.begin(); i!=comprarProduto.end();i++, linha++)
        {
            ui->twProdutos->insertRow(linha);
            ui->twProdutos->setItem(linha,0,new QTableWidgetItem(i->getCodigo()));
            ui->twProdutos->setItem(linha,1,new QTableWidgetItem(i->getNome()));
            ui->twProdutos->setItem(linha,2,new QTableWidgetItem(i->getQuantidade()));
            ui->twProdutos->setItem(linha,3,new QTableWidgetItem(i->getPreco()));
        }
        ui->twProdutos->setRowCount(linha);
    }
    catch (QString erro)
    {
        QMessageBox::information(this,"Erro",erro);
    }
}

void AdicionarPedido::gerarListaDeCompra()
{
    try
    {
        int n = ui->twPedido->rowCount();
        for (int i = n; i >= 0; i--)ui->twPedido->removeRow(i);

        int linha = 0;
        double total = 0;

        for (auto IT = escolhidos.begin(); IT != escolhidos.end(); IT++, linha++)
        {
            ui->twPedido->insertRow(linha);

            Thing n = *IT;
            ui->twPedido->setItem(linha,0,new QTableWidgetItem(n.getCodigo()));
            ui->twPedido->setItem(linha,1,new QTableWidgetItem(n.getNome()));
            ui->twPedido->setItem(linha,2,new QTableWidgetItem(n.getQuantidade()));
            ui->twPedido->setItem(linha,3,new QTableWidgetItem(valorDuasCasa(n.getPreco())));

            double valor = n.getQuantidade().toDouble() * n.getPreco().toDouble();
            total += valor;

            QString v = valorDuasCasa(QString::number(valor));
            ui->twPedido->setItem(linha,4,new QTableWidgetItem(v));
            ui->twPedido->setCurrentCell(0,0);
        }
        QString t = valorDuasCasa(QString::number(total));
        ui->lblValorTotal->setText(t);
        ui->twPedido->setRowCount(linha);
    }
    catch (QString erro)
    {
        QMessageBox::information(this,"Erro",erro);
    }
}

void AdicionarPedido::gerarListaDePedidos(QString order)
{
    try
    {
        for(int i=0;i<3;i++)ui->twListarPedidos->setColumnWidth(i,127);

        persistencia = new PersistenciaPedidoVenda;
        QSqlQuery list = persistencia->criarListaCadastrados(order);

        int iCod, iDat, iValorTotal, iIdCliente;
        iCod = list.record().indexOf("id");
        iDat = list.record().indexOf("dataCompra");
        iValorTotal = list.record().indexOf("valorTotal");
        iIdCliente = list.record().indexOf("id_cliente");

        int linha = 0;
        while (list.next())
        {
            ui->twListarPedidos->insertRow(linha);
            ui->twListarPedidos->setItem(linha,0,new QTableWidgetItem(list.value(iCod).toString()));
            ui->twListarPedidos->setItem(linha,1,new QTableWidgetItem(prepareDate(list.value(iDat).toString())));
            ui->twListarPedidos->setItem(linha,2,new QTableWidgetItem(valorDuasCasa(list.value(iValorTotal).toString())));          
            linha++;
        }

        ui->twListarPedidos->setRowCount(linha);
        delete persistencia;
    }
    catch (QString erro)
    {
        QMessageBox::information(this,"Erro",erro);
    }
}

void AdicionarPedido::on_comboBox_currentIndexChanged(int index)
{
    try
    {
        if(index==0)
        {
            ui->dateTimeEdit->setDateTime(QDateTime::currentDateTime());
            ui->lineEditNome->clear();
            ui->lineEditEndereco->clear();
            ui->lineEditTelefone->clear();
            ui->frBuscaCliente->setVisible(false);
            ui->frCadastroCliente->setVisible(true);
        }else if(index==1)
        {
            ui->dateTimeEdit->setDateTime(QDateTime::currentDateTime());
            ui->txtSearchCliente->clear();          
            ui->frBuscaCliente->setVisible(true);
            ui->frCadastroCliente->setVisible(false);         
            on_txtSearchCliente_textEdited();           
        }else  if(index==2)
        {
            ui->dateTimeEdit->setDateTime(QDateTime::currentDateTime());
            ui->frBuscaCliente->setVisible(false);
            ui->frCadastroCliente->setVisible(false);
        }
    }  catch (QString erro) {
        QMessageBox::information(this, "Erro", erro);
    }
}

void AdicionarPedido::on_tabPedido_currentChanged(int index)
{
    try
    {
        if (index == 0)
        {
            limparListsSTL();
            limparIncluirPedido();
            gerarListaProdutosEstoque();
            on_txtSearchCliente_textEdited();
        }else if (index == 1)
        {
            limparListaMestre();           
            organizeOrder();
            on_comboBoxTipoPesquisa_currentIndexChanged(0);
        }

    }  catch (QString erro)
    {
        QMessageBox::information(this,"Erro", erro);
    }
}

void AdicionarPedido::on_comboBoxTipoPesquisa_currentIndexChanged(int index)
{
    if(index==0)
    {
        ui->widgetPesquisaTwoLines->setVisible(false);
        ui->widgetPesquisaOneLine->setVisible(false);
        ui->dateEditSearchPedido->setVisible(true);
        ui->dateEditSearchPedido->setDate(QDate::currentDate());
        organizeOrder();
    }else  if(index==1)
    {
        ui->widgetPesquisaTwoLines->setVisible(false);
        ui->widgetPesquisaOneLine->setVisible(true);
        ui->dateEditSearchPedido->setVisible(false);
        ui->lineEditSearchPedido->clear();
        ui->lineEditSearchPedido->setPlaceholderText("Digite o valor");
        organizeOrder();
    }else  if(index==2)
    {
        ui->widgetPesquisaTwoLines->setVisible(false);
        ui->widgetPesquisaOneLine->setVisible(true);
        ui->dateEditSearchPedido->setVisible(false);
        ui->lineEditSearchPedido->clear();
        ui->lineEditSearchPedido->setPlaceholderText("Digite o valor");
        organizeOrder();
    }else  if(index==3)
    {
        ui->widgetPesquisaOneLine->setVisible(false);
        ui->widgetPesquisaTwoLines->setVisible(true);
        ui->dateEditSearchPedido->setVisible(false);
        ui->lineEditValorX->clear();
        ui->lineEditValorY->clear();
        organizeOrder();
    }
    else  if(index==4)
    {
        ui->widgetPesquisaOneLine->setVisible(true);
        ui->widgetPesquisaTwoLines->setVisible(false);
        ui->dateEditSearchPedido->setVisible(false);
        ui->lineEditSearchPedido->setPlaceholderText("Código ou Nome");
        organizeOrder();
    }
}

void AdicionarPedido::organizeOrder()
{
    if(ui->comboBoxTipoOrdenacao->currentIndex()==0)currentOrder="order by dataCompra";
    else if(ui->comboBoxTipoOrdenacao->currentIndex()==1)currentOrder="order by dataCompra desc";
    else if(ui->comboBoxTipoOrdenacao->currentIndex()==2)currentOrder="order by valorTotal";
    else if(ui->comboBoxTipoOrdenacao->currentIndex()==3)currentOrder="order by valorTotal desc";

    gerarListaDePedidos(currentOrder);
}

QString AdicionarPedido::prepareDate(QString date)
{
    QLocale local;
    QDate data;
    QString aux="";

    int day, month, year, i=0;
    for(int cont=0;i<date.size();i++)
    {
        if(date[i]!='-' && date[i]!=' ')aux+=date[i];
        else
        {
            if(cont==0)day = aux.toInt();
            else if(cont==1)month = aux.toInt();
            else if(cont==2)year = aux.toInt();
            cont++;
            aux="";
        }
    }
    data.setDate(day,month,year);

    for(;i<date.size();i++)aux+=date[i];
    return QString(local.toString(data,"ddd | dd MMMM yyyy |")+" "+aux);
}

QString AdicionarPedido::valorDuasCasa(QString aux)
{
    int i = 0;
    QString nova ="";
    for (; i < aux.size() && aux[i] != '.'; i++)nova+=aux[i];

    nova += ".";
    if (i == aux.size())nova += "00";
    else
    {
        nova += aux[i+1];
        if (i+ 2 == aux.size())nova += "0";
        else nova += aux[i+2];
    }
    return nova;
}

void AdicionarPedido::iniciarListas()
{
    //Lista Produtos Página Principal
    ui->twProdutos->setColumnCount(4);
    QStringList cabecalhos = {"ID Produto", "Nome", "Quantidade", "Preço Unit."};
    ui->twProdutos->setHorizontalHeaderLabels(cabecalhos);
    ui->twProdutos->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->twProdutos->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->twProdutos->verticalHeader()->setVisible(false);
    for(int i=0;i<4;i++)ui->twProdutos->setColumnWidth(i,100);

    //Lista Carrinho de compras
    ui->twPedido->setColumnCount(5);
    QStringList cabecalho = {"ID Produto", "Nome", "Qtde", "Preço Unit.", "Total"};
    ui->twPedido->setHorizontalHeaderLabels(cabecalho);
    ui->twPedido->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->twPedido->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->twPedido->verticalHeader()->setVisible(false);
    for(int i=0;i<5;i++)ui->twPedido->setColumnWidth(i,80);
    ui->twPedido->setColumnWidth(2,65);
    ui->twPedido->setColumnWidth(3,95);

    //Lista Mostrar pedido marcado
    ui->twProdutosLista->setColumnCount(5);
    ui->twProdutosLista->setHorizontalHeaderLabels(cabecalho);
    ui->twProdutosLista->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->twProdutosLista->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->twProdutosLista->verticalHeader()->setVisible(false);
    //definir tamanho das colunas
    for(int i=0;i<5;i++)ui->twProdutosLista->setColumnWidth(i,86);

    //Lista Mestre de Pedidos
    ui->twListarPedidos->setColumnCount(3);
    cabecalho.clear();
    cabecalho = {"ID Pedido", "Data", "Valor Total"};
    ui->twListarPedidos->setHorizontalHeaderLabels(cabecalho);
    ui->twListarPedidos->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->twListarPedidos->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->twListarPedidos->verticalHeader()->setVisible(false);
    //definir tamanho das colunas
    for(int i=0;i<3;i++)ui->twListarPedidos->setColumnWidth(i,127);

    //Listar Clientes
    ui->tbWidgetInformacoesCliente->setColumnCount(5);
    cabecalho = {"ID Cliente", "Nome", "Endereco", "Telefone", "Email"};
    ui->tbWidgetInformacoesCliente->setHorizontalHeaderLabels(cabecalho);
    ui->tbWidgetInformacoesCliente->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tbWidgetInformacoesCliente->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tbWidgetInformacoesCliente->verticalHeader()->setVisible(false);
    ui->tbWidgetInformacoesCliente->setColumnWidth(0,60);
    for(int i=1;i<=3;i++)ui->tbWidgetInformacoesCliente->setColumnWidth(i,200);
    ui->tbWidgetInformacoesCliente->setColumnWidth(4,280);

    gerarListaProdutosEstoque();
}

void AdicionarPedido::limparListsSTL()
{
    comprarProduto.clear();
    escolhidos.clear();
}

void AdicionarPedido::limparIncluirPedido()
{
     ui->lineEditSearchProduto->clear();
     ui->lineEditNome->clear();
     ui->lineEditEndereco->clear();
     ui->lineEditTelefone->clear();
     ui->lblValorTotal->clear();
     ui->dateTimeEdit->setDateTime(QDateTime::currentDateTime());

     int n = ui->twProdutos->rowCount();
     for (int i = n; i >= 0; i--){
         ui->twProdutos->removeRow(i);
     }

     n = ui->twPedido->rowCount();
     for (int i = n; i >= 0; i--){
         ui->twPedido->removeRow(i);
     }
}


void AdicionarPedido::limparListaMestre()
{
    ui->quadradim->setVisible(false);
    ui->frMostrarLista->setVisible(false);
    ui->widgetPesquisaTwoLines->setVisible(false);
    ui->labelIDPedido->setText("");
    ui->labelIDCliente->setText("");
    ui->labelNomeCliente->setText("");
    ui->labelEnderecoCliente->setText("");
    ui->labelEmailCliente->setText("");
    ui->labelValorTotalCompra->setText("");
    ui->labelDataCompra->setText("");
    ui->labelValorTotalCompra->setText("");

    int n = ui->twProdutosLista->rowCount();
    for (int i = n; i >= 0; i--)ui->twProdutosLista->removeRow(i);

    n = ui->twListarPedidos->rowCount();
    for (int i = n; i >= 0; i--)ui->twListarPedidos->removeRow(i);
}
