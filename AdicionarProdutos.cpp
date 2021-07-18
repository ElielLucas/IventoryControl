#include "AdicionarProdutos.h"
#include "ui_AdicionarProdutos.h"

AdicionarProdutos::AdicionarProdutos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdicionarProdutos)
{
    ui->setupUi(this);
    try
    {      
        currentOrder="";
        produt = new HEV::PersistenciaProduto();
        iniciarLista();
    }  catch (QString erro) {
        QMessageBox::information(this,"Erro",erro);
    }
    ui->twProdutos->setStyleSheet("QTableView {selection-background-color: red");
}

AdicionarProdutos::~AdicionarProdutos()
{
    delete ui;
}

void AdicionarProdutos::on_btnIncluir_clicked()
{
    try
    {
        QString cod=ui->txtCodigoIncluir->text();
        QString nome=ui->txtNomeIncluir->text();
        QString quant=ui->txtQtdeIncluir->text();
        QString preco=ui->txtPrecoIncluir->text();
        QString desc=ui->textEditCadastroDescricao->toPlainText();

        HEV::Produto x(cod,nome,quant,preco, desc);

        produt->incluir(x);
        QMessageBox::information(this,"Incluir Produto","O produto foi incluído!");
    } catch(QString erro)
    {
            QMessageBox::information(this,"Erro",erro);
    }
}

void AdicionarProdutos::on_btnExcluir_clicked()
{
    try
    {   
        QString key="";
        int escolhaComboBox = ui->comboBox->currentIndex();

        if(escolhaComboBox==0)key = ui->lineEditCodigo->text();
        else key = ui->txtEditNome->text();

        produt->excluir(key, escolhaComboBox);
        mostrarLista(currentOrder);
        limparDadosPesquisar();

        QMessageBox::information(this,"Excluir Produto","O produto foi excluido!");

    } catch (QString erro)
    {
        QMessageBox::information(this,"Erro",erro);
    }
}

void AdicionarProdutos::on_btnPesquisar_clicked()
{
    try
    {
        QString key = ui->txtKeySearch->text();

        int escolhaComboBox = ui->comboBox->currentIndex();
        int row=produt->pesquisarIndex(key,escolhaComboBox, currentOrder);

        ui->twProdutos->selectRow(row-1);

    } catch (QString erro)
    {
        QMessageBox::information(this,"Erro",erro);
    }
}

void AdicionarProdutos::on_btnEdit_clicked()
{
    try
    {
        QString cod, nome, quant, preco, desc;
        cod = ui->lineEditCodigo->text();
        nome = ui->txtEditNome->text();
        quant = ui->txtQtdeEdit->text();
        preco = ui->txtPrecoEdit->text();
        desc = ui->textEditDescricaoBusca->toPlainText();;

        HEV::Produto aux(cod, nome, quant, preco, desc);
        produt->alterar(aux);
        mostrarLista(currentOrder);

        QMessageBox::information(this,"Editar Produto","O dados do produto foram alterados.");

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
    QStringList cabecalhos = {"Código", "Nome", "Qtde Estoque", "Preço Unitário"};
    ui->twProdutos->setHorizontalHeaderLabels(cabecalhos);
    //nao poder editar os itens da tabela
    ui->twProdutos->setEditTriggers(QAbstractItemView::NoEditTriggers);
    //selecionar a linha toda
    ui->twProdutos->setSelectionBehavior(QAbstractItemView::SelectRows);
    //sumir com a linha ao lado
    ui->twProdutos->verticalHeader()->setVisible(false);
    //cor da seleçao
    ui->twProdutos->setStyleSheet("QTableView {selection-background-color: red");
}

void AdicionarProdutos::mostrarLista(QString order)
{
    int n = ui->twProdutos->rowCount();
    for (int i = n; i >= 0; i--){
        ui->twProdutos->removeRow(i);
    }

    QSqlQuery list = produt->criarLista(order);
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
}

void AdicionarProdutos::on_twProdutos_itemDoubleClicked(QTableWidgetItem *item)
{
    try
    {
        int linha = item->row();
        QString cod = ui->twProdutos->item(linha,0)->text();

        HEV::Produto obj = produt->pesquisarProduto(cod, 0, currentOrder);

        ui->frDadosEdit->setVisible(true);
        ui->lineEditCodigo->setText(obj.getCodigo());
        ui->txtEditNome->setText(obj.getNome());
        ui->txtQtdeEdit->setText(obj.getQuantidade());
        ui->txtPrecoEdit->setText(obj.getPreco());
        ui->textEditDescricaoBusca->setText(obj.getDescricao());

    }  catch (QString erro) {
        QMessageBox::information(this,"Erro",erro);
    }
}

void AdicionarProdutos::limparDadosIncluir()
{
    ui->txtCodigoIncluir->setText("");
    ui->txtNomeIncluir->setText("");
    ui->txtQtdeIncluir->setText("");
    ui->txtPrecoIncluir->setText("");
    ui->textEditCadastroDescricao->clear();
}

void AdicionarProdutos::limparDadosPesquisar()
{
    ui->lineEditCodigo->setText("");
    ui->txtKeySearch->setText("");
    ui->txtEditNome->setText("");
    ui->txtQtdeEdit->setText("");
    ui->txtPrecoEdit->setText("");
    ui->frDadosEdit->setVisible(false);
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
