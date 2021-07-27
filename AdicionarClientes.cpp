#include "AdicionarClientes.h"
#include "ui_AdicionarClientes.h"
#include<QMessageBox>

AdicionarClientes::AdicionarClientes(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdicionarClientes)
{
    ui->setupUi(this);
    setWindowIcon(QIcon(":/imgs/images/icone.png"));
    currentOrder="";
    ui->labelID->setVisible(false);
    ui->labelID->clear();
    iniciarLista();
}

AdicionarClientes::~AdicionarClientes()
{
    delete ui;
}

void AdicionarClientes::on_pushButtonIncluir_clicked()
{
    try
    {
        QMessageBox::StandardButton confirmacao;
        confirmacao = QMessageBox::question(this,"Confirmação!","Deseja cadastrar o cliente?",QMessageBox::Yes|QMessageBox::No);

        if (confirmacao == QMessageBox::Yes)
        {
            QString nome, endereco, telefone, email;

            nome = ui->lineEditNomeIncluir->text();
            endereco = ui->lineEditEnderecoIncluir->text();
            telefone = ui->lineEditTelefoneIncluir->text();
            email = ui->lineEditEmail->text();

            persistencia = new PersistenciaCliente;
            Cliente obj(nome,endereco,telefone,email);
            persistencia->incluir(obj);

            QMessageBox::information(this,"Incluir Cliente","O cliente foi incluido.");
            delete persistencia;
        }

    } catch (QString erro)
    {
        QMessageBox::information(this,"Erro",erro);
    }
}

void AdicionarClientes::on_lineEditSearchCliente_textEdited()
{
    try
    {
        QString key = ui->lineEditSearchCliente->text();

        int n = ui->twCliente->rowCount();
        for (int i = n; i >= 0; i--)ui->twCliente->removeRow(i);

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
            ui->twCliente->insertRow(linha);
            ui->twCliente->setItem(linha,0,new QTableWidgetItem(list.value(iCod).toString()));
            ui->twCliente->setItem(linha,1,new QTableWidgetItem(list.value(iNome).toString()));
            ui->twCliente->setItem(linha,2,new QTableWidgetItem(list.value(iEndereco).toString()));
            ui->twCliente->setItem(linha,3,new QTableWidgetItem(list.value(iTelefone).toString()));
            ui->twCliente->setItem(linha,4,new QTableWidgetItem(list.value(iEmail).toString()));
            linha++;
        }

        ui->twCliente->setRowCount(linha);
        delete persistencia;

    } catch (QString erro)
    {
        QMessageBox::information(this,"Erro",erro);
    }
}


void AdicionarClientes::on_pushButtonEdit_clicked()
{
    try
    {
        QMessageBox::StandardButton confirmacao;
        confirmacao = QMessageBox::question(this,"Confirmação!","Deseja editar o cliente?",QMessageBox::Yes|QMessageBox::No);

        if (confirmacao == QMessageBox::Yes)
        {
            QString id, nome, endereco, telefone, email;

            id = ui->labelID->text();
            nome = ui->lineEditNomeEdit->text();
            endereco = ui->lineEditEnderecoEdit->text();
            telefone = ui->lineEditTelefoneEdit->text();
            email = ui->lineEditEmailEdit->text();

            persistencia = new PersistenciaCliente;
            Cliente obj(id, nome, endereco, telefone, email);
            persistencia->alterar(obj);
            mostrarLista(currentOrder);

            QMessageBox::information(this,"Editar Cliente","O dados do cliente foram alterados.");
            delete persistencia;
        }

    } catch (QString erro)
    {
        QMessageBox::information(this,"Erro",erro);
    }
}

void AdicionarClientes::mostrarLista(QString order)
{
    limparDadosLista();
    for(int i=0;i<4;i++)ui->twCliente->setColumnWidth(i,100);
    int n = ui->twCliente->rowCount();
    for (int i = n; i >= 0; i--)ui->twCliente->removeRow(i);

    persistencia = new PersistenciaCliente;
    QSqlQuery list = persistencia->criarListaCadastrados(order);
    int linha = 0;

    int iCod, iNome, iEndereco, iTelefone, iEmail;
    iCod = list.record().indexOf("id");
    iNome = list.record().indexOf("nome");
    iEndereco = list.record().indexOf("endereco");
    iTelefone = list.record().indexOf("telefone");
    iEmail = list.record().indexOf("email");

    while (list.next())
    {
        ui->twCliente->insertRow(linha);
        ui->twCliente->setItem(linha,0,new QTableWidgetItem(list.value(iCod).toString()));
        ui->twCliente->setItem(linha,1,new QTableWidgetItem(list.value(iNome).toString()));
        ui->twCliente->setItem(linha,2,new QTableWidgetItem(list.value(iEndereco).toString()));
        ui->twCliente->setItem(linha,3,new QTableWidgetItem(list.value(iTelefone).toString()));
        ui->twCliente->setItem(linha,4,new QTableWidgetItem(list.value(iEmail).toString()));
        linha++;
    }

    ui->twCliente->setRowCount(linha);
    delete persistencia;
}

void AdicionarClientes::on_twCliente_itemDoubleClicked(QTableWidgetItem *item)
{
    try
    {
        int linha = item->row();
        QString cod = ui->twCliente->item(linha,0)->text();

        persistencia = new PersistenciaCliente;
        Thing obj = persistencia->pesquisarThing(cod,-1,"order by id");

        ui->fr_DadosCliente->setVisible(true);
        ui->quadradim->setVisible(true);

        ui->labelID->setText(obj.getCodigo());
        ui->lineEditNomeEdit->setText(obj.getNome());
        ui->lineEditEnderecoEdit->setText(obj.getEndereco());
        ui->lineEditTelefoneEdit->setText(obj.getTelefone());
        ui->lineEditEmailEdit->setText(obj.getEmail());

        delete persistencia;

    }  catch (QString erro) {
        QMessageBox::information(this,"Erro",erro);
    }
}

void AdicionarClientes::on_twPedidosCliente_itemDoubleClicked(QTableWidgetItem *item)
{
    try
    {
        int linha = item->row();
        QString cod = ui->twPedidosCliente->item(linha,0)->text();

        persistencia = new PersistenciaCliente;
        QSqlQuery tabela = persistencia->searchForSalesRelatedInformation(cod, currentOrder);

        int n = ui->twProdutosCliente->rowCount();
        for (int i = n; i >= 0; i--)ui->twProdutosCliente->removeRow(i);

        int idProd = tabela.record().indexOf("id_produto");
        int nomeProduto = tabela.record().indexOf("nome_produto");
        int preco = tabela.record().indexOf("preco");
        int quantidadeComprada = tabela.record().indexOf("quantidade_comprada");


        linha=0;
        int qnt;
        float valorUnitario;

        while (tabela.next())
        {
            qnt = tabela.value(quantidadeComprada).toInt();
            valorUnitario = tabela.value(preco).toFloat();
            ui->twProdutosCliente->insertRow(linha);
            ui->twProdutosCliente->setItem(linha,0,new QTableWidgetItem(tabela.value(idProd).toString()));
            ui->twProdutosCliente->setItem(linha,1,new QTableWidgetItem(tabela.value(nomeProduto).toString()));
            ui->twProdutosCliente->setItem(linha,2,new QTableWidgetItem(QString::number(qnt)));
            ui->twProdutosCliente->setItem(linha,3,new QTableWidgetItem(valorDuasCasa(QString::number(valorUnitario))));
            linha++;
        }
        ui->twProdutosCliente->setRowCount(linha);
        delete persistencia;
    } catch (QString erro) {
        QMessageBox::information(this,"Erro",erro);
    }
}

void AdicionarClientes::on_pushButtonComprasCliente_clicked()
{
    try
    {     
        ui->esconderPedidosCliente->setVisible(true);
        ui->esconderListaClientes->setVisible(false);

        int n = ui->twPedidosCliente->rowCount();
        for (int i = n; i >= 0; i--)ui->twPedidosCliente->removeRow(i);

        QString key = ui->labelID->text();

        persistencia = new PersistenciaCliente;
        QSqlQuery list = persistencia->searchCustomerPurchases(key);
        int linha = 0;

        int iCod, iDat, iValorTotal;
        iCod = list.record().indexOf("id_pedido");
        iDat = list.record().indexOf("dataCompra");
        iValorTotal = list.record().indexOf("valorTotal");

        while (list.next())
        {
            ui->twPedidosCliente->insertRow(linha);
            ui->twPedidosCliente->setItem(linha,0,new QTableWidgetItem(list.value(iCod).toString()));
            ui->twPedidosCliente->setItem(linha,1,new QTableWidgetItem(prepareDate(list.value(iDat).toString())));
            ui->twPedidosCliente->setItem(linha,2,new QTableWidgetItem(valorDuasCasa(list.value(iValorTotal).toString())));
            linha++;
        }

        ui->twPedidosCliente->setRowCount(linha);
        delete persistencia;

    }  catch (QString erro) {
        QMessageBox::information(this,"Erro",erro);
    }
}

QString AdicionarClientes::prepareDate(QString date)
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

QString AdicionarClientes::valorDuasCasa(QString aux)
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

void AdicionarClientes::on_pushButtonVoltar_clicked()
{
    try
    {
        ui->esconderPedidosCliente->setVisible(false);
        ui->esconderListaClientes->setVisible(true);
        int n = ui->twProdutosCliente->rowCount();
        for (int i = n; i >= 0; i--)ui->twProdutosCliente->removeRow(i);
        limparDadosLista();

    }  catch (QString erro) {
        QMessageBox::information(this,"Erro",erro);
    }
}


void AdicionarClientes::iniciarLista()
{
    ui->twCliente->clear();
    ui->twCliente->clearContents();
    ui->twCliente->setColumnCount(5);


    QStringList cabecalhos = {"ID Cliente", "Nome", "Endereco", "Telefone", "Email"};
    ui->twCliente->setHorizontalHeaderLabels(cabecalhos);
    ui->twCliente->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->twCliente->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->twCliente->verticalHeader()->setVisible(false);
    for(int i=0;i<4;i++)ui->twCliente->setColumnWidth(i,100);

    ui->twPedidosCliente->clear();
    ui->twPedidosCliente->clearContents();
    ui->twPedidosCliente->setColumnCount(3);

    cabecalhos = {"ID Pedido", "Data", "Valor Total"};
    ui->twPedidosCliente->setHorizontalHeaderLabels(cabecalhos);
    ui->twPedidosCliente->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->twPedidosCliente->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->twPedidosCliente->verticalHeader()->setVisible(false);
    for(int i=0;i<3;i++)ui->twPedidosCliente->setColumnWidth(i,167);

    ui->twProdutosCliente->setColumnCount(4);
    cabecalhos = {"ID Produto", "Nome", "Qtde Comprada", "Preço Unitário"};
    ui->twProdutosCliente->setHorizontalHeaderLabels(cabecalhos);
    ui->twProdutosCliente->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->twProdutosCliente->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->twProdutosCliente->verticalHeader()->setVisible(false);

    for(int i=0;i<4;i++)ui->twProdutosCliente->setColumnWidth(i,125);
    mostrarLista(currentOrder);
}

void AdicionarClientes::on_tabCliente_currentChanged(int index)
{
    if (index == 0)limparDadosIncluir();
    else if (index == 1)
    {
        limparDadosLista();
        organizeOrder();
    }
}

void AdicionarClientes::organizeOrder()
{
    if(ui->comboBoxOrdem->currentIndex()==0)currentOrder="order by nome";
    else if(ui->comboBoxOrdem->currentIndex()==1)currentOrder="order by nome desc";
    mostrarLista(currentOrder);
}


void AdicionarClientes::limparDadosIncluir()
{
    ui->lineEditNomeIncluir->setText("");
    ui->lineEditEnderecoIncluir->setText("");
    ui->lineEditTelefoneIncluir->setText("");
}

void AdicionarClientes::limparDadosLista()
{
    ui->lineEditNomeEdit->clear();
    ui->lineEditEnderecoEdit->clear();
    ui->lineEditTelefoneEdit->clear();
    ui->lineEditEmailEdit->clear();
    ui->fr_DadosCliente->setVisible(false);
    ui->esconderPedidosCliente->setVisible(false);
    ui->esconderListaClientes->setVisible(true);
    ui->quadradim->setVisible(false);
}
