#include "AdicionarPedido.h"
#include "ui_AdicionarPedido.h"

AdicionarPedido::AdicionarPedido(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdicionarPedido)
{
    ui->setupUi(this);

    currentOrder="";
    iniciarListas();

    on_comboBox_currentIndexChanged(0);
}

AdicionarPedido::~AdicionarPedido()
{
    delete ui;
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

        QSqlQuery list = persistPedido.currentPosition(x, ui->comboBoxSearch->currentIndex());
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
            ui->twProdutos->setItem(linha,3,new QTableWidgetItem(list.value(iPreco).toString()));
            linha++;
        }

        ui->twProdutos->setRowCount(linha);

    } catch (QString erro)
    {
        QMessageBox::information(this,"Erro",erro);
    }
}

void AdicionarPedido::on_lineEditSearchPedidos_textEdited()
{
    try
    {
        QStringList key = ui->lineEditSearchPedido->text().split(' ');

        int n = ui->twProdutos->rowCount();
        for (int i = n; i >= 0; i--)ui->twProdutos->removeRow(i);


        QString x="";
        for(int i=0;i<key.size();i++)x+=key[i];

        QSqlQuery list = persistPedido.currentPosition(x, ui->comboBoxSearch->currentIndex());
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
            ui->twProdutos->setItem(linha,3,new QTableWidgetItem(list.value(iPreco).toString()));
            linha++;
        }

        ui->twProdutos->setRowCount(linha);

    } catch (QString erro)
    {
        QMessageBox::information(this,"Erro",erro);
    }
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
            if(escolhaComboBox==0)
            {
                tabela=persistPedido.searchDate(key,currentOrder);
            }else if(escolhaComboBox==1)
            {
                tabela=persistPedido.searchForValuesGreaterThan(key,currentOrder);
            }else if(escolhaComboBox==2)
            {
                tabela=persistPedido.searchForValuesLessThan(key,currentOrder);
            }else if(escolhaComboBox==4)
            {
                tabela=persistPedido.searchForPurchasesByProduct(key,currentOrder);
            }

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
                ui->twListarPedidos->setItem(linha,1,new QTableWidgetItem(tabela.value(iDat).toString()));
                ui->twListarPedidos->setItem(linha,2,new QTableWidgetItem(valorDuasCasa(tabela.value(iValorTotal).toString())));
                //ui->twListarPedidos->setItem(linha,3,new QTableWidgetItem(list.value(iIdCliente).toString()));
                linha++;
            }
            ui->twListarPedidos->setRowCount(linha);

            //ui->twProdutos->selectRow(row-1);
        }else organizeOrder();
    } catch (QString erro)
    {
        QMessageBox::information(this,"Erro", erro);
    }
}

void AdicionarPedido::on_lineEditValorY_textEdited()
{
    try
    {
        int n = ui->twListarPedidos->rowCount();
        for (int i = n; i >= 0; i--)ui->twListarPedidos->removeRow(i);

        QString key1 = ui->lineEditValorX->text(), key2 = ui->lineEditValorY->text();
        if(key1[0]==' ' || key2==' ')key1=key2="";

        if(key1!="" && key2!="")
        {
            QSqlQuery tabela;

            tabela=persistPedido.searchForValuesBetween(key1, key2, currentOrder);

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
                ui->twListarPedidos->setItem(linha,1,new QTableWidgetItem(tabela.value(iDat).toString()));
                ui->twListarPedidos->setItem(linha,2,new QTableWidgetItem(valorDuasCasa(tabela.value(iValorTotal).toString())));
                //ui->twListarPedidos->setItem(linha,3,new QTableWidgetItem(list.value(iIdCliente).toString()));
                linha++;
            }
            ui->twListarPedidos->setRowCount(linha);

        }else organizeOrder();
    } catch (QString erro)
    {
        QMessageBox::information(this,"Erro", erro);
    }
}

void AdicionarPedido::on_btnPesquisarCliente_clicked()
{
    try
    {
//        limparAsLista();
//        QString idcliente = ui->txtIdCliente->text();
//        HEV::PersistenciaCliente aux("ArquivoCliente.txt");
//        HEV::Cliente busca;
//        busca.montarDados(aux.pesquisar(idcliente).toStdString());

//        ui->frClienteNovo->setVisible(true);

//        ui->lblIdClienteNovo->setText(busca.getKey());
//        ui->lblNomeNovo->setText(busca.getNome());
//        ui->lblEnderecoNovo->setText(busca.getEndereco());
//        ui->lblTelefoneNovo->setText(busca.getTelefone());
//        ui->lblCPFNovo->setText(busca.getCPF());
//        ui->frNovoPedido->setVisible(false);
    }
    catch (QString erro)
    {
        QMessageBox::information(this,"Erro",erro);
    }
}

void AdicionarPedido::on_btnAdicionar_clicked()
{
    try
    {
        if (ui->twProdutos->currentRow() >= 0)
        {
            bool ok;
            int linha = ui->twProdutos->currentRow();
            int id = ui->twProdutos->item(linha, 0)->text().toUInt();
            double qtde = ui->twProdutos->item(linha, 2)->text().toDouble();
            double num = (QInputDialog::getText(this, "Quantidade de produto", "Digite a quantidade que deseja desse produto: ",QLineEdit::Normal,QString(),&ok)).toDouble();

            if (ok)
            {
                if (num > qtde || num < 0)QMessageBox::information(this, "Inválido", "Quantidade invalida");
                else
                {
                    list<HEV::Produto>::iterator IT;
                    for(IT = comprarProduto.begin();IT!=comprarProduto.end() && IT->getCodigo() != QString::number(id);IT++);

                    if ((qtde - num) > 0)IT->setQuantidade(QString::number(qtde-num));

                    HEV::Produto novo = *IT;
                    for(IT = escolhidos.begin();IT!=escolhidos.end() && IT->getCodigo() != QString::number(id);IT++);

                    if (IT->getCodigo()==QString::number(id))novo.setQuantidade(QString::number(novo.getQuantidade().toUInt() + num));
                    else
                        novo.setQuantidade(QString::number(num));

                    escolhidos.push_back(novo);
                    gerarListaProdutosEstoqueProvisorio();
                    gerarListaDeCompra();
                }
            }
        }
    }
    catch (QString erro)
    {
        QMessageBox::information(this,"Erro",erro);
    }
}

void AdicionarPedido::on_btnExcluir_clicked()
{
    try {
        if (ui->twPedido->currentRow() >= 0)
        {
            int linha = ui->twPedido->currentRow();
            int id = ui->twPedido->item(linha, 0)->text().toUInt();
            int quantAux = ui->twPedido->item(linha, 2)->text().toUInt();

            HEV::Produto key;
            key.setCodigo(QString::number(id));

            list<HEV::Produto>::iterator IT;
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
        HEV::PersistenciaPedidoVenda baixa;
        HEV::PersistenciaCliente x;
        if(ui->comboBox->currentIndex()==0)
        {
            HEV::Cliente novoCliente(ui->lineEditNome->text(),ui->lineEditEndereco->text(),ui->lineEditTelefone->text(),"");

            int id = x.incluir(novoCliente);

            HEV::PedidoVenda novoPedido(ui->dateTimeEdit->dateTime(), ui->lblValorTotal->text());
            novoPedido.setLista(escolhidos);

            baixa.incluir(novoPedido, QString::number(id));
            baixa.atualizarEstoque(comprarProduto);

            QMessageBox::information(this,"Compra", "Compra realizada com sucesso.");

            limparIncluirPedido();
            gerarListaProdutosEstoque();
        }
    }
    catch (QString erro)
    {
        QMessageBox::information(this,"Erro",erro);
    }
}

void AdicionarPedido::on_btnPesquisarPedido_clicked()
{
    try {
//        HEV::PersistenciaPedidoVenda pedido("arquivoPedidosVendas.txt");
//        QString idpedido = ui->txtIdPedido->text();
//        HEV::PedidoVenda pesquisa;
//        pesquisa.montarDados(pedido.pesquisar(idpedido).toStdString());
//        HEV::Cliente busca;
//        HEV::PersistenciaCliente aux("ArquivoCliente.txt");
//        busca.montarDados(aux.pesquisar(pesquisa.getIDCliente()).toStdString());
//        ui->frDadosPedido->setVisible(true);
//        ui->frClientePesquisar->setVisible(true);

//        ui->lblIdPedidoPesquisar->setText(pesquisa.getKey());
//        ui->lblIdClientePesquisar->setText(pesquisa.getIDCliente());
//        ui->lblNomePesquisar->setText(busca.getNome());
//        ui->lblEnderecopesquisar->setText(busca.getEndereco());
//        ui->lblTelefonePesquisar->setText(busca.getTelefone());
//        ui->lblCPFpesquisar->setText(busca.getCPF());
//        ui->lblDataPesquisar->setText(pesquisa.getDataCompra());
//        ui->lblValorTotalPesquisar->setText(pesquisa.getValorTotal());

//        mostrar = pesquisa.getListaCurso();
//        gerarListaDePesquisa();

    }
    catch (QString erro)
    {
        QMessageBox::information(this,"Erro",erro);
    }
}

void AdicionarPedido::on_btnMostrarLista_clicked()
{
    try {
//        limparListar();
//        HEV::PersistenciaPedidoVenda pedido("arquivoPedidosVendas.txt");
//        pedidovenda = pedido.criarLista();
//        gerarListaDePedido();
//        ui->frMostrarLista->setVisible(true);
    }
    catch (QString erro)
    {
        QMessageBox::information(this,"Erro",erro);  
    }
}

void AdicionarPedido::on_btnMostrarPedido_clicked()
{
    try {
//        int linha = ui->twListarPedido->currentRow();
//        QString id = ui->twListarPedido->item(linha, 0)->text();
//        HEV::PersistenciaPedidoVenda pedido("arquivoPedidosVendas.txt");
//        HEV::PedidoVenda pesquisa;
//        pesquisa.montarDados(pedido.pesquisar(id).toStdString());
//        HEV::Cliente busca;
//        HEV::PersistenciaCliente aux("ArquivoCliente.txt");
//        busca.montarDados(aux.pesquisar(pesquisa.getIDCliente()).toStdString());
//        ui->frClienteMostrar->setVisible(true);
//        ui->frMostrarLista->setVisible(true);

//        ui->lblIdPedidoMostrar->setText(pesquisa.getKey());
//        ui->lblIdClienteMostrar->setText(pesquisa.getIDCliente());
//        ui->lblNomeMostrar->setText(busca.getNome());
//        ui->lblEnderecoMostrar->setText(busca.getEndereco());
//        ui->lblTelefoneMostrar->setText(busca.getTelefone());
//        ui->lblCPFMostrar->setText(busca.getCPF());
//        ui->lblDataMostrar->setText(pesquisa.getDataCompra());
//        ui->lblValorTotalMostrar->setText(pesquisa.getValorTotal());

//        mostrar = pesquisa.getListaCurso();
//        gerarListaDeMostrar();

    }
    catch (QString erro)
    {
        QMessageBox::information(this,"Erro",erro);
    }
}

void AdicionarPedido::on_btnMostrarPesqC_clicked()
{

    try
    {
//        int linha = ui->twPedidoPesqC->currentRow();
//        QString id = ui->twPedidoPesqC->item(linha, 0)->text();
//        HEV::PersistenciaPedidoVenda pedido("arquivoPedidosVendas.txt");
//        HEV::PedidoVenda pesquisa;
//        pesquisa.montarDados(pedido.pesquisar(id).toStdString());

//        ui->frMostrarListaPesqC->setVisible(true);
//        ui->lblIdPedidoPesqC->setText(pesquisa.getKey());
//        ui->lblDataPesqC->setText(pesquisa.getDataCompra());
//        ui->lblValorTotalPesqC->setText(pesquisa.getValorTotal());
//        mostrar = pesquisa.getListaCurso();
//        gerarListaMostrarPorCliente();

    }
    catch (QString erro)
    {
        QMessageBox::information(this,"Erro",erro);
    }
}

void AdicionarPedido::on_btnPesquisarPesqC_clicked()
{
    try {
//        QString id = ui->txtIdClientePesqC->text();
//        HEV::PersistenciaPedidoVenda pedido("arquivoPedidosVendas.txt");
//        pedidoporcliente = pedido.criarListaporCliente(id);
//        HEV::PersistenciaCliente aux("ArquivoCliente.txt");
//        HEV::Cliente busca;
//        busca.montarDados(aux.pesquisar(id).toStdString());
//        ui->lblIdClientePesqC->setText(busca.getKey());
//        ui->lblNomePesqC->setText(busca.getNome());
//        ui->lblEnderecoPesqC->setText(busca.getEndereco());
//        ui->lblTelefonePesqC->setText(busca.getTelefone());
//        ui->lblCPFPesqC->setText(busca.getCPF());
//        ui->frPedidoClientePesqC->setVisible(true);
//        ui->frMostrarPesqC->setVisible(true);
//        ui->frMostrarListaPesqC->setVisible(false);
//        gerarListaDePedidoPorCliente();
    }
    catch (QString erro)
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

        list<HEV::Produto> aux;

        QSqlQuery list = produt.criarLista("order by id");
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

            aux.push_back(HEV::Produto(cod, nome, quant, prec, ""));
            linha++;
        }

        comprarProduto = aux;

        ui->twProdutos->setRowCount(linha);
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

            HEV::Produto n = *IT;
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

void AdicionarPedido::gerarListaDePesquisa()
{
    try {
//        int n = ui->twProdutosPedido->rowCount();
//        for (int i = n; i >= 0; i--){
//            ui->twProdutosPedido->removeRow(i);
//        }
//        int linha = 0;
//        double total = 0;
//        mostrar.definirIT();
//        int tam = mostrar.size();
//        for (int i = 0; i < tam; i++, linha++){
//            ui->twProdutosPedido->insertRow(linha);
//            HEV::Produto n = mostrar.pegarPrimeiro();
//            ui->twProdutosPedido->setItem(linha,0,new QTableWidgetItem(n.getKey()));
//            ui->twProdutosPedido->setItem(linha,1,new QTableWidgetItem(n.getDescricao()));
//            ui->twProdutosPedido->setItem(linha,2,new QTableWidgetItem(n.getQuantidade()));
//            ui->twProdutosPedido->setItem(linha,3,new QTableWidgetItem(n.getPreco()));
//            double valor = n.getQuantidade().toDouble() * n.getPreco().toDouble();
//            total += valor;
//            QString v = valorDuasCasa(QString::number(valor));
//            ui->twProdutosPedido->setItem(linha,4,new QTableWidgetItem(v));
//        }
//        ui->twProdutosPedido->setRowCount(linha);
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

        QSqlQuery list = persistPedido.tabelaCompleta(order);

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
            ui->twListarPedidos->setItem(linha,1,new QTableWidgetItem(list.value(iDat).toString()));
            ui->twListarPedidos->setItem(linha,2,new QTableWidgetItem(valorDuasCasa(list.value(iValorTotal).toString())));
            //ui->twListarPedidos->setItem(linha,3,new QTableWidgetItem(list.value(iIdCliente).toString()));
            linha++;
        }

        ui->twListarPedidos->setRowCount(linha);
    }
    catch (QString erro)
    {
        QMessageBox::information(this,"Erro",erro);
    }
}

void AdicionarPedido::gerarListaDePedidoPorCliente()
{
    try {
//        int n = ui->twPedidoPesqC->rowCount();
//        for (int i = n; i >= 0; i--){
//            ui->twPedidoPesqC->removeRow(i);
//        }
//        int linha = 0;
//        pedidoporcliente.definirIT();
//        int tam = pedidoporcliente.size();
//        for (int i = 0; i < tam; i++, linha++){
//            ui->twPedidoPesqC->insertRow(linha);
//            HEV::PedidoVenda n = pedidoporcliente.pegarPrimeiro();
//            ui->twPedidoPesqC->setItem(linha,0,new QTableWidgetItem(n.getKey()));
//            ui->twPedidoPesqC->setItem(linha,1,new QTableWidgetItem(n.getIDCliente()));
//            ui->twPedidoPesqC->setItem(linha,2,new QTableWidgetItem(n.getDataCompra()));
//            ui->twPedidoPesqC->setItem(linha,3,new QTableWidgetItem(n.getValorTotal()));
//            ui->twPedidoPesqC->setCurrentCell(0,0);
//        }
//        ui->twPedidoPesqC->setRowCount(linha);
//        while (!pedidoporcliente.isEmpty()){
//            pedidoporcliente.pegarPrimeiro();
//        }
    }
    catch (QString erro)
    {
        QMessageBox::information(this,"Erro",erro);
    }
}

void AdicionarPedido::gerarListaMostrarPorCliente()
{
    try {
//        int n = ui->twMostrarPesqC->rowCount();
//        for (int i = n; i >= 0; i--){
//            ui->twMostrarPesqC->removeRow(i);
//        }
//        int linha = 0;
//        double total = 0;
//        mostrar.definirIT();
//        int tam = mostrar.size();
//        for (int i = 0; i < tam; i++, linha++){
//            ui->twMostrarPesqC->insertRow(linha);
//            HEV::Produto n = mostrar.pegarPrimeiro();
//            ui->twMostrarPesqC->setItem(linha,0,new QTableWidgetItem(n.getKey()));
//            ui->twMostrarPesqC->setItem(linha,1,new QTableWidgetItem(n.getDescricao()));
//            ui->twMostrarPesqC->setItem(linha,2,new QTableWidgetItem(n.getQuantidade()));
//            ui->twMostrarPesqC->setItem(linha,3,new QTableWidgetItem(n.getPreco()));
//            double valor = n.getQuantidade().toDouble() * n.getPreco().toDouble();
//            total += valor;
//            QString v = valorDuasCasa(QString::number(valor));
//            ui->twMostrarPesqC->setItem(linha,4,new QTableWidgetItem(v));
//        }
//        ui->twMostrarPesqC->setRowCount(linha);
    }
    catch (QString erro)
    {
        QMessageBox::information(this,"Erro",erro);
    }

}

void AdicionarPedido::limparListsSTL()
{
    comprarProduto.clear();
    escolhidos.clear();
}

void AdicionarPedido::limparIncluirPedido()
{
     ui->lineEditSearchProduto->clear();
     ui->lblNomeNovo->clear();
     ui->lblEnderecoNovo->clear();
     ui->lblTelefoneNovo->clear();
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

void AdicionarPedido::limparListaPorCliente()
{
    ui->frPedidoClientePesqC->setVisible(false);
    ui->frMostrarPesqC->setVisible(false);
    ui->frMostrarListaPesqC->setVisible(false);

    ui->txtIdClientePesqC->clear();
    ui->lblIdClientePesqC->clear();
    ui->lblNomePesqC->clear();
    ui->lblEnderecoPesqC->clear();
    ui->lblTelefonePesqC->clear();
    ui->lblIdPedidoPesqC->clear();
    ui->lblDataPesqC->clear();
    ui->lblValorTotalPesqC->clear();

    int n = ui->twPedidoPesqC->rowCount();
    for (int i = n; i >= 0; i--)ui->twPedidoPesqC->removeRow(i);
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
            ui->quadradim_2->setVisible(false);
        }else if(index==1)
        {
            ui->txtSearchCliente->clear();          
            ui->frBuscaCliente->setVisible(true);
            ui->frCadastroCliente->setVisible(false);
            ui->quadradim_2->setVisible(true);
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
        }else if (index == 1)limparListaPorCliente();
         else if (index == 2)
        {
            limparListaMestre();           
            organizeOrder();
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
        ui->widgetPesquisaOneLine->setVisible(true);
        ui->lineEditSearchPedido->clear();
        ui->lineEditSearchPedido->setPlaceholderText("Digite a Data");
    }else  if(index==1)
    {
        ui->widgetPesquisaTwoLines->setVisible(false);
        ui->widgetPesquisaOneLine->setVisible(true);
        ui->lineEditSearchPedido->clear();
        ui->lineEditSearchPedido->setPlaceholderText("Digite o valor");
    }else  if(index==2)
    {
        ui->widgetPesquisaTwoLines->setVisible(false);
        ui->widgetPesquisaOneLine->setVisible(true);
        ui->lineEditSearchPedido->clear();
        ui->lineEditSearchPedido->setPlaceholderText("Digite o valor");
    }else  if(index==3)
    {
        ui->widgetPesquisaOneLine->setVisible(false);
        ui->widgetPesquisaTwoLines->setVisible(true);
        ui->lineEditValorX->clear();
        ui->lineEditValorY->clear();
    }
    else  if(index==4)
    {
        ui->widgetPesquisaOneLine->setVisible(true);
        ui->widgetPesquisaTwoLines->setVisible(false);
        ui->lineEditSearchPedido->setPlaceholderText("Código ou Nome");
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
    QStringList cabecalhos = {"Código", "Nome", "Quantidade", "Preço Unit."};
    ui->twProdutos->setHorizontalHeaderLabels(cabecalhos);
    ui->twProdutos->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->twProdutos->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->twProdutos->verticalHeader()->setVisible(false);
    for(int i=0;i<4;i++)ui->twProdutos->setColumnWidth(i,100);


    //Lista Carrinho de compras
    ui->twPedido->setColumnCount(5);
    QStringList cabecalho = {"Código", "Nome", "Qtde", "Preço Unit.", "Total"};
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

    //Lista de Pedidos do cliente X
    ui->twMostrarPesqC->setColumnCount(5);
    ui->twMostrarPesqC->setHorizontalHeaderLabels(cabecalho);
    ui->twMostrarPesqC->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->twMostrarPesqC->setSelectionBehavior(QAbstractItemView::SelectRows);
    //definir tamanho das colunas
    ui->twMostrarPesqC->setColumnWidth(0,70);
    ui->twMostrarPesqC->setColumnWidth(1,170);
    ui->twMostrarPesqC->setColumnWidth(2,140);
    ui->twMostrarPesqC->setColumnWidth(3,110);
    ui->twMostrarPesqC->setColumnWidth(4,110);

    //Lista de mostrar Pedidos por cliente
    ui->twPedidoPesqC->setColumnCount(4);
    ui->twPedidoPesqC->setHorizontalHeaderLabels(cabecalho);
    ui->twPedidoPesqC->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->twPedidoPesqC->setSelectionBehavior(QAbstractItemView::SelectRows);
    //definir tamanho das colunas
    ui->twPedidoPesqC->setColumnWidth(0,80);
    ui->twPedidoPesqC->setColumnWidth(1,80);
    ui->twPedidoPesqC->setColumnWidth(2,120);
    ui->twPedidoPesqC->setColumnWidth(3,100);

    //Lista Mestre de Pedidos
    ui->twListarPedidos->setColumnCount(3);
    cabecalho.clear();
    cabecalho = {"Código", "Data", "Valor Total"};
    ui->twListarPedidos->setHorizontalHeaderLabels(cabecalho);
    ui->twListarPedidos->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->twListarPedidos->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->twListarPedidos->verticalHeader()->setVisible(false);
    //definir tamanho das colunas
    for(int i=0;i<3;i++)ui->twListarPedidos->setColumnWidth(i,127);
}

void AdicionarPedido::criarLista()
{
    try {
//        HEV::PersistenciaProduto comprarp("arquivoProdutos.txt");
//        comprarProduto = comprarp.criarLista();
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

        QSqlQuery tabela = persistPedido.searchForSalesRelatedInformation(cod, currentOrder);

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


        linha=0;
        tabela.next();
        ui->labelIDPedido->setText(tabela.value(idPedido).toString());
        ui->labelIDCliente->setText(tabela.value(idCliente).toString());
        ui->labelNomeCliente->setText(tabela.value(nomeCliente).toString());
        ui->labelEnderecoCliente->setText(tabela.value(endereco).toString());
        ui->labelTelefoneCliente->setText(tabela.value(telefone).toString());
        ui->labelEmailCliente->setText(tabela.value(email).toString());
        ui->labelDataCompra->setText(tabela.value(Dat).toString());
        ui->labelValorTotalCompra->setText(tabela.value(iValorTotal).toString());


        ui->twProdutosLista->insertRow(linha);
        ui->twProdutosLista->setItem(linha,0,new QTableWidgetItem(tabela.value(idProd).toString()));
        ui->twProdutosLista->setItem(linha,1,new QTableWidgetItem(tabela.value(nomeProduto).toString()));
        ui->twProdutosLista->setItem(linha,2,new QTableWidgetItem(tabela.value(quantidadeComprada).toString()));
        ui->twProdutosLista->setItem(linha,3,new QTableWidgetItem(valorDuasCasa(tabela.value(preco).toString())));
        ui->twProdutosLista->setItem(linha,4,new QTableWidgetItem(valorDuasCasa(tabela.value(iValorTotal).toString())));
        linha++;

        while (tabela.next())
        {
            ui->twProdutosLista->insertRow(linha);
            ui->twProdutosLista->setItem(linha,0,new QTableWidgetItem(tabela.value(idProd).toString()));
            ui->twProdutosLista->setItem(linha,1,new QTableWidgetItem(tabela.value(nomeProduto).toString()));
            ui->twProdutosLista->setItem(linha,2,new QTableWidgetItem(tabela.value(quantidadeComprada).toString()));
            ui->twProdutosLista->setItem(linha,3,new QTableWidgetItem(valorDuasCasa(tabela.value(preco).toString())));
            ui->twProdutosLista->setItem(linha,4,new QTableWidgetItem(valorDuasCasa(tabela.value(iValorTotal).toString())));
            linha++;
        }

        ui->twProdutosLista->setRowCount(linha);

    }
    catch (QString erro)
    {
        QMessageBox::information(this,"Erro",erro);
    }
}
