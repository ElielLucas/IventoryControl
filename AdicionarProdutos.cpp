#include "AdicionarProdutos.h"
#include "ui_AdicionarProdutos.h"

AdicionarProdutos::AdicionarProdutos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdicionarProdutos)
{
    ui->setupUi(this);

    try
    {      
        setWindowIcon(QIcon(":/imgs/images/icone.png"));
        currentOrder="";    
        iniciarLista();
    }  catch (QString erro)
    {
        QMessageBox::information(this,"Erro",erro);
    }
}

AdicionarProdutos::~AdicionarProdutos()
{
    delete ui;
}

void AdicionarProdutos::on_btnIncluir_clicked()
{
    try
    {
        QMessageBox::StandardButton confirmacao;
        confirmacao = QMessageBox::question(this,"Confirmação!","Deseja cadastrar o produto?",QMessageBox::Yes|QMessageBox::No);

        if (confirmacao == QMessageBox::Yes)
        {
            QString nome=ui->txtNomeIncluir->text();
            QString quant=ui->txtQtdeIncluir->text();
            QString preco=ui->txtPrecoIncluir->text();
            QString desc=ui->textEditCadastroDescricao->toPlainText();

            Produto x(nome,quant,preco, desc);

            persistencia = new PersistenciaProduto;
            persistencia->incluir(x);
            QMessageBox::information(this,"Incluir Produto","O produto foi incluído!");
            delete persistencia;
       }
    } catch(QString erro)
    {
        QMessageBox::information(this,"Erro",erro);
    }
}

void AdicionarProdutos::on_txtKeySearch_3_textEdited()
{
    try
    {
        QString key = ui->txtKeySearch_3->text();

        int n = ui->twProdutos->rowCount();
        for (int i = n; i >= 0; i--)ui->twProdutos->removeRow(i);

        persistencia = new PersistenciaProduto;
        QSqlQuery list = persistencia->filteredSearch(key);
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
        delete persistencia;

    } catch (QString erro)
    {
        QMessageBox::information(this,"Erro",erro);
    }
}


void AdicionarProdutos::on_btnEdit_clicked()
{
    try
    {
        QMessageBox::StandardButton confirmacao;
        confirmacao = QMessageBox::question(this,"Confirmação!","Deseja editar o produto?",QMessageBox::Yes|QMessageBox::No);

        if (confirmacao == QMessageBox::Yes)
        {
            QString cod, nome, quant, preco, desc;
            cod = ui->lineEditCodigo->text();
            nome = ui->txtEditNome->text();
            quant = ui->txtQtdeEdit->text();
            preco = ui->txtPrecoEdit->text();
            desc = ui->textEditDescricaoBusca_2->toPlainText();;

            persistencia = new PersistenciaProduto;
            Produto aux(cod, nome, quant, preco, desc);
            persistencia->alterar(aux);
            mostrarLista(currentOrder);

            QMessageBox::information(this,"Editar Produto","O dados do produto foram alterados.");
            delete persistencia;
        }

    } catch (QString erro)
    {
        QMessageBox::information(this,"Erro",erro);
    }
}

void AdicionarProdutos::iniciarLista()
{
    ui->twProdutos->clear();
    ui->twProdutos->clearContents();
    ui->twProdutos->setColumnCount(4);

    //definir o cabecalho da tabela
    QStringList cabecalhos = {"ID Produto", "Nome", "Qtde Estoque", "Preço Unitário"};
    ui->twProdutos->setHorizontalHeaderLabels(cabecalhos);
    //nao poder editar os itens da tabela
    ui->twProdutos->setEditTriggers(QAbstractItemView::NoEditTriggers);
    //selecionar a linha toda
    ui->twProdutos->setSelectionBehavior(QAbstractItemView::SelectRows);
    //sumir com a linha ao lado
    ui->twProdutos->verticalHeader()->setVisible(false);

    for(int i=0;i<4;i++)ui->twProdutos->setColumnWidth(i,112);

    ui->lineEditCodigo->setDisabled(1);
    mostrarLista(currentOrder);
}

void AdicionarProdutos::mostrarLista(QString order)
{
    limparDadosPesquisar();
    for(int i=0;i<4;i++)ui->twProdutos->setColumnWidth(i,112);
    int n = ui->twProdutos->rowCount();
    for (int i = n; i >= 0; i--){
        ui->twProdutos->removeRow(i);
    }

    persistencia = new PersistenciaProduto;
    QSqlQuery list = persistencia->criarListaCadastrados(order);
    int linha = 0;

    int iCod, iNome, iQuant, iPrec;
    iCod = list.record().indexOf("id");
    iNome = list.record().indexOf("nome");
    iQuant = list.record().indexOf("quantidade");
    iPrec = list.record().indexOf("preco");
    while (list.next())
    {
        ui->twProdutos->insertRow(linha);
        ui->twProdutos->setItem(linha,0,new QTableWidgetItem(list.value(iCod).toString()));
        ui->twProdutos->setItem(linha,1,new QTableWidgetItem(list.value(iNome).toString()));
        ui->twProdutos->setItem(linha,2,new QTableWidgetItem(list.value(iQuant).toString()));
        ui->twProdutos->setItem(linha,3,new QTableWidgetItem(list.value(iPrec).toString()));
        linha++;
    }

    ui->twProdutos->setRowCount(linha);
    delete persistencia;
}

void AdicionarProdutos::on_twProdutos_itemDoubleClicked(QTableWidgetItem *item)
{
    try
    {
        int linha = item->row();
        QString cod = ui->twProdutos->item(linha,0)->text();

        persistencia = new PersistenciaProduto;
        Thing obj = persistencia->pesquisarThing(cod, 0, currentOrder);

        ui->frDadosEdit->setVisible(true);
        ui->quadradim->setVisible(true);
        ui->lineEditCodigo->setText(obj.getCodigo());
        ui->txtEditNome->setText(obj.getNome());
        ui->txtQtdeEdit->setText(obj.getQuantidade());
        ui->txtPrecoEdit->setText(obj.getPreco());
        ui->textEditDescricaoBusca_2->setText(obj.getDescricao());

        delete persistencia;

    }  catch (QString erro) {
        QMessageBox::information(this,"Erro",erro);
    }
}

void AdicionarProdutos::limparDadosIncluir()
{
    ui->txtNomeIncluir->setText("");
    ui->txtQtdeIncluir->setText("");
    ui->txtPrecoIncluir->setText("");
    ui->textEditCadastroDescricao->clear();
}

void AdicionarProdutos::limparDadosPesquisar()
{
    ui->lineEditCodigo->setText("");
    ui->txtKeySearch_3->setText("");
    ui->txtEditNome->setText("");
    ui->txtQtdeEdit->setText("");
    ui->txtPrecoEdit->setText("");
    ui->frDadosEdit->setVisible(false);
    ui->quadradim->setVisible(false);
}

void AdicionarProdutos::on_tabProdutos_currentChanged(int index)
{
    if (index == 0)limparDadosIncluir();
    else if (index == 1)
    {
        limparDadosPesquisar();
        organizeOrder();
    }
}

void AdicionarProdutos::organizeOrder()
{
    if(ui->comboBoxOrdem->currentIndex()==0)currentOrder="order by id";
    else if(ui->comboBoxOrdem->currentIndex()==1)currentOrder="order by nome";
    else if(ui->comboBoxOrdem->currentIndex()==2)currentOrder="order by id desc";
    else if(ui->comboBoxOrdem->currentIndex()==3)currentOrder="order by nome desc";
    mostrarLista(currentOrder);
}
