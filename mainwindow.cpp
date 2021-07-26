#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
     ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowIcon(QIcon(":/imgs/images/icone.png"));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnProdutos_clicked()
{
    AdicionarProdutos produtos;
    produtos.exec();
}

void MainWindow::on_btnClientes_clicked()
{
    AdicionarClientes client;
    client.exec();
}

void MainWindow::on_btnPedidos_clicked()
{
    AdicionarPedido pedido;
    pedido.exec();
}


void MainWindow::on_actionExportar_para_Excel_triggered()
{
    try
    {
         QFile local(QFileDialog::getSaveFileName(this,"Salvar Dados",QDir::currentPath(),"Arquivo Excel (*.csv *.txt)"));

         if(!local.open(QIODevice::WriteOnly | QIODevice::Text))
              throw QString("Não foi possível criar o arquivo!");

         HEV::PersistenciaProduto produt;
         HEV::PersistenciaCliente client;
         HEV::PersistenciaPedidoVenda venda;

         //TABELA DE PRODUTOS
         QSqlQuery lista = produt.criarListaCadastrados("order by id");

         int iCod, iNome, iQuant, iPrec, iDesc;

         iCod = lista.record().indexOf("id");
         iNome = lista.record().indexOf("nome");
         iQuant = lista.record().indexOf("quantidade");
         iPrec = lista.record().indexOf("preco");
         iDesc = lista.record().indexOf("descricao");

         QTextStream out(&local);

         QString linha;

         out<<"ID Produto;Nome Produto;Quantidade;Preço Unitário;Descrição\n";
         while(lista.next())
         {
             linha = lista.value(iCod).toString() +";"+ lista.value(iNome).toString() +";"+ lista.value(iQuant).toString() +";"+ lista.value(iPrec).toString() +";"+ lista.value(iDesc).toString();
             out<<linha+"\n";
         }

         //TABELA DE CLIENTES
         lista = client.criarListaCadastrados("order by id");

         int  iEndereco, iTelefone, iEmail;
         iCod = lista.record().indexOf("id");
         iNome = lista.record().indexOf("nome");
         iEndereco = lista.record().indexOf("endereco");
         iTelefone = lista.record().indexOf("telefone");
         iEmail = lista.record().indexOf("email");

         out<<"\nID Cliente;Nome Cliente;Endereço;Telefone;Email\n";

         while (lista.next())
         {
             linha = lista.value(iCod).toString() +";"+ lista.value(iNome).toString() +";"+ lista.value(iEndereco).toString() +";"+ lista.value(iTelefone).toString() +";"+ lista.value(iEmail).toString();
             out<<linha+"\n";
         }

         //TABELA DE VENDAS
         lista = venda.tabelaCompleta("order by id");

         int iDat, iValorTotal, iIdCliente;
         iCod = lista.record().indexOf("id");
         iDat = lista.record().indexOf("dataCompra");
         iValorTotal = lista.record().indexOf("valorTotal");
         iIdCliente = lista.record().indexOf("id_cliente");

         out<<"\nID Venda;Data Venda;Valor da Venda;ID comprador\n";
         while (lista.next())
         {
             linha = lista.value(iCod).toString() +";"+ lista.value(iDat).toString() +";"+ lista.value(iValorTotal).toString() +";"+ lista.value(iIdCliente).toString();
             out<<linha+"\n";
         }

         //TABELA DE RELACIONAMENTO CLIENTE-VENDA
         lista.prepare("select * from cliente_pedido order by id_pedido");
         if(!lista.exec())throw QString("Falha ao acessar o banco de dados!");

         int idVenda, idCliente;
         idVenda= lista.record().indexOf("id_pedido");
         idCliente = lista.record().indexOf("id_cliente");

         out<<"\nID Venda;ID Cliente\n";
         while (lista.next())
         {
             linha = lista.value(idVenda).toString() +";"+ lista.value(idCliente).toString();
             out<<linha+"\n";
         }

         //TABELA Item de Compra
         lista.prepare("select * from item_compra order by id_pedido");
         if(!lista.exec())throw QString("Falha ao acessar o banco de dados!");

         int ordemRecibo, idProduto, quantidade_comprada;
         ordemRecibo = lista.record().indexOf("ordem");
         idVenda= lista.record().indexOf("id_pedido");
         idProduto = lista.record().indexOf("id_produto");
         quantidade_comprada = lista.record().indexOf("quantidade_comprada");

         out<<"\nOrdem do Produto no Recibo;ID Venda; ID Produto; Quantidade Comprada\n";
         while (lista.next())
         {
             linha = lista.value(ordemRecibo).toString() +";"+ lista.value(idVenda).toString() +";"+ lista.value(idProduto).toString() +";"+ lista.value(quantidade_comprada).toString();
             out<<linha+"\n";
         }

         local.close();

    }catch (QString erro) {
        QMessageBox::information(this,"Aviso!", erro);
    }
}

void MainWindow::on_actionDeletar_Dados_triggered()
{
    try
    {
        produt.deleteTabelaProduto();
        client.deleteTabelaCliente();
        venda.deleteTabelaPedidos();
        throw QString("Os dados foram apagados!");
    }  catch (QString erro) {
        QMessageBox::information(this,"Aviso!", erro);
    }
}
