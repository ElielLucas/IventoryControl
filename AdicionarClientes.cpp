#include "AdicionarClientes.h"
#include "ui_AdicionarClientes.h"
#include<QMessageBox>

AdicionarClientes::AdicionarClientes(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdicionarClientes)
{
    ui->setupUi(this);

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
        QString nome, endereco, telefone, email;

        nome = ui->lineEditNomeIncluir->text();
        endereco = ui->lineEditEnderecoIncluir->text();
        telefone = ui->lineEditTelefoneIncluir->text();
        email = ui->lineEditEmail->text();

        HEV::Cliente obj(nome,endereco,telefone,email);
        client.incluir(obj);

        QMessageBox::information(this,"Incluir Cliente","O cliente foi incluido.");

    } catch (QString erro)
    {
        QMessageBox::information(this,"Erro",erro);
    }
}

void AdicionarClientes::on_lineEditSearchCliente_textEdited(const QString &arg1)
{
    try
    {
        QStringList key = ui->lineEditSearchCliente->text().split(' ');

        int n = ui->twCliente->rowCount();
        for (int i = n; i >= 0; i--)ui->twCliente->removeRow(i);

        QString x="";
        for(int i=0;i<key.size();i++)x+=key[i];

        QSqlQuery list = client.currentPosition(x);
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

    } catch (QString erro)
    {
        QMessageBox::information(this,"Erro",erro);
    }
}


void AdicionarClientes::on_pushButtonEdit_clicked()
{
    try
    {
        QString id, nome, endereco, telefone, email;

        id = ui->labelID->text();
        nome = ui->lineEditNomeEdit->text();
        endereco = ui->lineEditEnderecoEdit->text();
        telefone = ui->lineEditTelefoneEdit->text();
        email = ui->lineEditEmailEdit->text();

        HEV::Cliente obj(id, nome, endereco, telefone, email);
        client.alterar(obj);
        mostrarLista(currentOrder);

        QMessageBox::information(this,"Editar Cliente","O dados do cliente foram alterados.");

    } catch (QString erro)
    {
        QMessageBox::information(this,"Erro",erro);
    }
}

void AdicionarClientes::on_pushButtonExcluir_clicked()
{
    try
    {
        QMessageBox::StandardButton confirmacao;

        confirmacao = QMessageBox::question(this,"Confirmação!","Deseja excluir o cliente?",QMessageBox::Yes|QMessageBox::No);

        if (confirmacao == QMessageBox::Yes)
        {
            QString key="";

            key = ui->labelID->text();

            client.excluir(key);
            mostrarLista(currentOrder);
            limparDadosLista();

            QMessageBox::information(this,"Excluir Cliente","O cliente foi excluido!");
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

    QSqlQuery list = client.criarLista(order);
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
}

void AdicionarClientes::on_twCliente_itemDoubleClicked(QTableWidgetItem *item)
{
    try
    {
        int linha = item->row();
        QString cod = ui->twCliente->item(linha,0)->text();

        HEV::Cliente obj = client.pesquisarCliente(cod);

        ui->fr_DadosCliente->setVisible(true);
        ui->quadradim->setVisible(true);

        ui->labelID->setText(obj.getID());
        ui->lineEditNomeEdit->setText(obj.getNome());
        ui->lineEditEnderecoEdit->setText(obj.getEndereco());
        ui->lineEditTelefoneEdit->setText(obj.getTelefone());
        ui->lineEditEmailEdit->setText(obj.getEmail());

    }  catch (QString erro) {
        QMessageBox::information(this,"Erro",erro);
    }
}


void AdicionarClientes::iniciarLista()
{
    ui->twCliente->clear();
    ui->twCliente->clearContents();
    ui->twCliente->setColumnCount(5);

    //definir o cabecalho da tabela
    QStringList cabecalhos = {"ID Cliente", "Nome", "Endereco", "Telefone", "Email"};
    ui->twCliente->setHorizontalHeaderLabels(cabecalhos);
    //nao poder editar os itens da tabela
    ui->twCliente->setEditTriggers(QAbstractItemView::NoEditTriggers);
    //selecionar a linha toda
    ui->twCliente->setSelectionBehavior(QAbstractItemView::SelectRows);
    //sumir com a linha ao lado
    ui->twCliente->verticalHeader()->setVisible(false);
    for(int i=0;i<4;i++)ui->twCliente->setColumnWidth(i,100);
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
    ui->quadradim->setVisible(false);
}
