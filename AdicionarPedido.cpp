#include "AdicionarPedido.h"
#include "ui_AdicionarPedido.h"

AdicionarPedido::AdicionarPedido(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdicionarPedido)
{
    ui->setupUi(this);

    iniciarListas();
//    limparIncluir();
//    limparListar();
//    limparPesquisar();
//    limparListaPorCliente();

    on_comboBox_currentIndexChanged(0);
}

AdicionarPedido::~AdicionarPedido()
{
    limparAsLista();
    delete ui;
}

void AdicionarPedido::on_lineEditSearchProduto_textEdited(const QString &arg1)
{
    try
    {
        QStringList key = ui->lineEditSearchProduto->text().split(' ');

        int n = ui->twProdutos->rowCount();
        for (int i = n; i >= 0; i--){
            ui->twProdutos->removeRow(i);
        }

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

        ui->twPedido->setRowCount(linha);

    } catch (QString erro)
    {
        QMessageBox::information(this,"Erro",erro);
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
        limparIncluir();
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

            limparIncluir();
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
        limparPesquisar();
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
        limparListar();
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
        limparListar();
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

void AdicionarPedido::iniciarListas()
{
    //Lista de produtos
    ui->twProdutos->setColumnCount(4);
    //definir o cabecalho da tabela
    QStringList cabecalhos = {"Código", "Nome", "Quantidade", "Preço Unit."};
    ui->twProdutos->setHorizontalHeaderLabels(cabecalhos);
    //nao poder editar os itens da tabela
    ui->twProdutos->setEditTriggers(QAbstractItemView::NoEditTriggers);
    //selecionar a linha toda
    ui->twProdutos->setSelectionBehavior(QAbstractItemView::SelectRows);
    //sumir com a linha ao lado
    ui->twProdutos->verticalHeader()->setVisible(false);

    //definir tamanho das colunas
    for(int i=0;i<4;i++)ui->twProdutos->setColumnWidth(i,100);


    //Lista de inserir produtos
    ui->twPedido->setColumnCount(5);
    QStringList cabecalho = {"Código", "Nome", "Qtde", "Preço Unit.", "Total"};
    ui->twPedido->setHorizontalHeaderLabels(cabecalho);
    //nao poder editar os itens da tabela
    ui->twPedido->setEditTriggers(QAbstractItemView::NoEditTriggers);
    //selecionar a linha toda
    ui->twPedido->setSelectionBehavior(QAbstractItemView::SelectRows);
    //sumir com a linha ao lado
    //ui->twPedido->verticalHeader()->setVisible(false);
    //cor da seleçao
    ui->twPedido->setStyleSheet("QTableView {selection-background-color:blue}");
    //definir tamanho das colunas
    for(int i=0;i<5;i++)ui->twPedido->setColumnWidth(i,80);
    ui->twPedido->setColumnWidth(2,65);
    ui->twPedido->setColumnWidth(3,95);

    //Lista de inserir pesquisar
    ui->twProdutosPedido->setColumnCount(5);
    ui->twProdutosPedido->setHorizontalHeaderLabels(cabecalho);
    //nao poder editar os itens da tabela
    ui->twProdutosPedido->setEditTriggers(QAbstractItemView::NoEditTriggers);
    //selecionar a linha toda
    ui->twProdutosPedido->setSelectionBehavior(QAbstractItemView::SelectRows);
    //sumir com a linha ao lado
    //ui->twProdutosPedido->verticalHeader()->setVisible(false);
    //cor da seleçao
    ui->twProdutosPedido->setStyleSheet("QTableView {selection-background-color:blue}");
    //definir tamanho das colunas
    for(int i=0;i<4;i++)ui->twProdutos->setColumnWidth(i,100);

    //Lista Mostrar pedido marcado
    ui->twProdutosLista->setColumnCount(5);
    ui->twProdutosLista->setHorizontalHeaderLabels(cabecalho);
    //nao poder editar os itens da tabela
    ui->twProdutosLista->setEditTriggers(QAbstractItemView::NoEditTriggers);
    //selecionar a linha toda
    ui->twProdutosLista->setSelectionBehavior(QAbstractItemView::SelectRows);
    //sumir com a linha ao lado
    //ui->twProdutosLista->verticalHeader()->setVisible(false);
    //cor da seleçao
    ui->twProdutosLista->setStyleSheet("QTableView {selection-background-color:blue}");
    //definir tamanho das colunas
    ui->twProdutosLista->setColumnWidth(0,70);
    ui->twProdutosLista->setColumnWidth(1,170);
    ui->twProdutosLista->setColumnWidth(2,140);
    ui->twProdutosLista->setColumnWidth(3,110);
    ui->twProdutosLista->setColumnWidth(4,110);

    //Lista Mostrar pedido marcado por cliente
    ui->twMostrarPesqC->setColumnCount(5);
    ui->twMostrarPesqC->setHorizontalHeaderLabels(cabecalho);
    //nao poder editar os itens da tabela
    ui->twMostrarPesqC->setEditTriggers(QAbstractItemView::NoEditTriggers);
    //selecionar a linha toda
    ui->twMostrarPesqC->setSelectionBehavior(QAbstractItemView::SelectRows);
    //sumir com a linha ao lado
    //ui->twMostrarPesqC->verticalHeader()->setVisible(false);
    //cor da seleçao
    ui->twMostrarPesqC->setStyleSheet("QTableView {selection-background-color:blue}");
    //definir tamanho das colunas
    ui->twMostrarPesqC->setColumnWidth(0,70);
    ui->twMostrarPesqC->setColumnWidth(1,170);
    ui->twMostrarPesqC->setColumnWidth(2,140);
    ui->twMostrarPesqC->setColumnWidth(3,110);
    ui->twMostrarPesqC->setColumnWidth(4,110);

    //Lista de mostrar Pedidos
    ui->twListarPedido->setColumnCount(4);
    QStringList cab = {"ID Pedido", "ID Cliente", "Data do Pedido", "Valor Total"};
    ui->twListarPedido->setHorizontalHeaderLabels(cab);
    //nao poder editar os itens da tabela
    ui->twListarPedido->setEditTriggers(QAbstractItemView::NoEditTriggers);
    //selecionar a linha toda
    ui->twListarPedido->setSelectionBehavior(QAbstractItemView::SelectRows);
    //sumir com a linha ao lado
    //ui->twListarPedido->verticalHeader()->setVisible(false);
    //cor da seleçao
    ui->twListarPedido->setStyleSheet("QTableView {selection-background-color:blue}");
    //definir tamanho das colunas
    ui->twListarPedido->setColumnWidth(0,80);
    ui->twListarPedido->setColumnWidth(1,80);
    ui->twListarPedido->setColumnWidth(2,120);
    ui->twListarPedido->setColumnWidth(3,100);

    //Lista de mostrar Pedidos por cliente
    ui->twPedidoPesqC->setColumnCount(4);
    ui->twPedidoPesqC->setHorizontalHeaderLabels(cab);
    //nao poder editar os itens da tabela
    ui->twPedidoPesqC->setEditTriggers(QAbstractItemView::NoEditTriggers);
    //selecionar a linha toda
    ui->twPedidoPesqC->setSelectionBehavior(QAbstractItemView::SelectRows);
    //sumir com a linha ao lado
    //ui->twPedidoPesqC->verticalHeader()->setVisible(false);
    //cor da seleçao
    ui->twPedidoPesqC->setStyleSheet("QTableView {selection-background-color:blue}");
    //definir tamanho das colunas
    ui->twPedidoPesqC->setColumnWidth(0,80);
    ui->twPedidoPesqC->setColumnWidth(1,80);
    ui->twPedidoPesqC->setColumnWidth(2,120);
    ui->twPedidoPesqC->setColumnWidth(3,100);
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

void AdicionarPedido::gerarListaDePedido()
{
    try {
//        int n = ui->twListarPedido->rowCount();
//        for (int i = n; i >= 0; i--){
//            ui->twListarPedido->removeRow(i);
//        }
//        int linha = 0;
//        pedidovenda.definirIT();
//        int tam = pedidovenda.size();
//        for (int i = 0; i < tam; i++, linha++){
//            ui->twListarPedido->insertRow(linha);
//            HEV::PedidoVenda n = pedidovenda.pegarPrimeiro();
//            ui->twListarPedido->setItem(linha,0,new QTableWidgetItem(n.getKey()));
//            ui->twListarPedido->setItem(linha,1,new QTableWidgetItem(n.getIDCliente()));
//            ui->twListarPedido->setItem(linha,2,new QTableWidgetItem(n.getDataCompra()));
//            ui->twListarPedido->setItem(linha,3,new QTableWidgetItem(n.getValorTotal()));
//            ui->twListarPedido->setCurrentCell(0,0);
//        }
//        ui->twListarPedido->setRowCount(linha);
//        while (!pedidovenda.isEmpty()){
//            pedidovenda.pegarPrimeiro();
//       }
    }
    catch (QString erro)
    {
        QMessageBox::information(this,"Erro",erro);
    }
}

void AdicionarPedido::gerarListaDeMostrar()
{
    try {
//        int n = ui->twProdutosLista->rowCount();
//        for (int i = n; i >= 0; i--){
//            ui->twProdutosLista->removeRow(i);
//        }
//        int linha = 0;
//        double total = 0;
//        mostrar.definirIT();
//        int tam = mostrar.size();
//        for (int i = 0; i < tam; i++, linha++){
//            ui->twProdutosLista->insertRow(linha);
//            HEV::Produto n = mostrar.pegarPrimeiro();
//            ui->twProdutosLista->setItem(linha,0,new QTableWidgetItem(n.getKey()));
//            ui->twProdutosLista->setItem(linha,1,new QTableWidgetItem(n.getDescricao()));
//            ui->twProdutosLista->setItem(linha,2,new QTableWidgetItem(n.getQuantidade()));
//            ui->twProdutosLista->setItem(linha,3,new QTableWidgetItem(n.getPreco()));
//            double valor = n.getQuantidade().toDouble() * n.getPreco().toDouble();
//            total += valor;
//            QString v = valorDuasCasa(QString::number(valor));
//            ui->twProdutosLista->setItem(linha,4,new QTableWidgetItem(v));
//        }
//        ui->twProdutosLista->setRowCount(linha);
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

void AdicionarPedido::limparIncluir()
{
     ui->lineEditSearchProduto->clear();
     ui->lblNomeNovo->clear();
     ui->lblEnderecoNovo->clear();
     ui->lblTelefoneNovo->clear();
     ui->lineEditNome->clear();
     ui->lineEditEndereco->clear();
     ui->lineEditTelefone->clear();
     ui->lblValorTotal->clear();

     int n = ui->twProdutos->rowCount();
     for (int i = n; i >= 0; i--){
         ui->twProdutos->removeRow(i);
     }

     n = ui->twPedido->rowCount();
     for (int i = n; i >= 0; i--){
         ui->twPedido->removeRow(i);
     }
}

void AdicionarPedido::limparPesquisar()
{
    ui->frDadosPedido->setVisible(false);
    ui->frClientePesquisar->setVisible(false);

    ui->txtIdPedido->clear();
    ui->lblIdPedidoPesquisar->clear();
    ui->lblIdClientePesquisar->clear();
    ui->lblNomePesquisar->clear();
    ui->lblEnderecopesquisar->clear();
    ui->lblTelefonePesquisar->clear();
    ui->lblDataPesquisar->clear();
    ui->lblValorTotalPesquisar->clear();

    int n = ui->twProdutosPedido->rowCount();
    for (int i = n; i >= 0; i--)ui->twProdutosPedido->removeRow(i);
}

void AdicionarPedido::limparAsLista()
{
    comprarProduto.clear();
    escolhidos.clear();
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

void AdicionarPedido::limparListar()
{
    ui->frClienteMostrar->setVisible(false);
    ui->frMostrarLista->setVisible(false);

    ui->lblIdPedidoMostrar->setText("");
    ui->lblNomeMostrar->setText("");
    ui->lblEnderecoMostrar->setText("");
    ui->lblTelefoneMostrar->setText("");
    ui->lblDataMostrar->setText("");
    ui->lblValorTotalMostrar->setText("");

    int n = ui->twListarPedido->rowCount();
    for (int i = n; i >= 0; i--)ui->twListarPedido->removeRow(i);

    n = ui->twProdutosLista->rowCount();
    for (int i = n; i >= 0; i--)ui->twProdutosLista->removeRow(i);
}

void AdicionarPedido::on_comboBox_currentIndexChanged(int index)
{
    try
    {
        if(index==0)
        {
            ui->lineEditNome->clear();
            ui->lineEditEndereco->clear();
            ui->lineEditTelefone->clear();
            ui->frBuscaCliente->setVisible(false);
            ui->frCadastroCliente->setVisible(true);
        }else if(index==1)
        {
            ui->txtSearchCliente->clear();
            ui->label_11->setVisible(false);
            ui->label_12->setVisible(false);
            ui->label_13->setVisible(false);
            ui->frBuscaCliente->setVisible(true);
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
            limparAsLista();
            limparIncluir();
            gerarListaProdutosEstoque();
        }else if (index == 1)limparPesquisar();
         else if (index == 2)limparListaPorCliente();
         else if (index == 3)limparListar();

    }  catch (QString erro) {
        QMessageBox::information(this,"Erro", erro);
    }
}

QString AdicionarPedido::valorDuasCasa(QString aux)
{
    int i = 0;
    QString nova ="";
    for (; i < aux.size() && aux[i] != '.'; i++){
        nova+=aux[i];
    }
    nova += ".";
    if (i == aux.size()){
        nova += "00";
    }else{
        nova += aux[i+1];
        if (i+ 2 == aux.size()){
            nova += "0";
        }else{
            nova += aux[i+2];
        }
    }
    return nova;
}
