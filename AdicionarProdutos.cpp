#include "AdicionarProdutos.h"
#include "ui_AdicionarProdutos.h"

AdicionarProdutos::AdicionarProdutos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdicionarProdutos)
{
    ui->setupUi(this);
    try
    {
        produt = new HEV::PersistenciaProduto();
        iniciarLista();
    }  catch (QString erro) {
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
        QString cod=ui->txtCodigoIncluir->text();
        QString desc=ui->txtNomeIncluir->text();
        QString quant=ui->txtQtdeIncluir->text();
        QString preco=ui->txtPrecoIncluir->text();

        HEV::Produto x(cod,desc,quant,preco);

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
        QString key = ui->txtKeySearch->text();

        int escolhaComboBox = ui->comboBox->currentIndex();
        produt->excluir(key, escolhaComboBox);
        on_btnMostrarLista_clicked();
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
        HEV::Produto obj=produt->pesquisar(key,escolhaComboBox);

        int row;
        if(escolhaComboBox==0)row = produt->currentPosition(obj.getCodigo(),"id", escolhaComboBox);
        else row = produt->currentPosition(obj.getCodigo(),"nome", escolhaComboBox);

        ui->twProdutos->selectRow(row);

//        ui->frDadosEdit->setVisible(true);
//        ui->lineEditCodigo->setText(obj.getCodigo());
//        ui->txtEditNome->setText(obj.getDescricao());
//        ui->txtQtdeEdit->setText(obj.getQuantidade());
//        ui->txtPrecoEdit->setText(obj.getPreco());

    } catch (QString erro)
    {
        QMessageBox::information(this,"Erro",erro);
    }
}

void AdicionarProdutos::on_btnEdit_clicked()
{
    try
    {
        QString cod, desc, quant, preco;
        cod = ui->lineEditCodigo->text();
        desc = ui->txtEditNome->text();
        quant = ui->txtQtdeEdit->text();
        preco = ui->txtPrecoEdit->text();

        HEV::Produto aux(cod, desc, quant, preco);
        produt->alterar(aux);
        on_btnMostrarLista_clicked();

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
    ui->twProdutos->setStyleSheet("QTableView {selection-background-color:blue}");
}

void AdicionarProdutos::mostrarLista()
{
    int n = ui->twProdutos->rowCount();
    for (int i = n; i >= 0; i--){
        ui->twProdutos->removeRow(i);
    }
}

void AdicionarProdutos::on_btnMostrarLista_clicked()
{
    mostrarLista();
    listaBuffer = produt->criarLista("id");
    int linha = 0;
    listaBuffer.definirIT();
    while (!listaBuffer.isEmpty())
    {
        ui->twProdutos->insertRow(linha);
        HEV::Produto n = listaBuffer.pegarPrimeiro();
        ui->twProdutos->setItem(linha,0,new QTableWidgetItem(n.getKey()));
        ui->twProdutos->setItem(linha,1,new QTableWidgetItem(n.getDescricao()));
        ui->twProdutos->setItem(linha,2,new QTableWidgetItem(n.getQuantidade()));
        ui->twProdutos->setItem(linha,3,new QTableWidgetItem(n.getPreco()));
        linha++;
    }
    ui->twProdutos->setRowCount(linha);
}

void AdicionarProdutos::on_twProdutos_itemDoubleClicked(QTableWidgetItem *item)
{
    try
    {
        int linha = item->row();
        int cod = ui->twProdutos->item(linha,0)->text().toInt();

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
        on_btnMostrarLista_clicked();
    }
}


