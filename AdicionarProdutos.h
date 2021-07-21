#ifndef ADICIONARPRODUTOS_H
#define ADICIONARPRODUTOS_H

#include <QDialog>
#include<persistenciapedidovenda.h>
#include<persistenciaproduto.h>
#include<QTableWidgetItem>
#include<QMessageBox>

namespace Ui {
class AdicionarProdutos;
}

class AdicionarProdutos : public QDialog
{
    Q_OBJECT

public:
    explicit AdicionarProdutos(QWidget *parent = nullptr);
    ~AdicionarProdutos();

private slots:
    void on_btnIncluir_clicked();

    void on_btnEdit_clicked();

    void on_btnExcluir_clicked();

    void on_tabProdutos_currentChanged(int index);

    void on_twProdutos_itemDoubleClicked(QTableWidgetItem *item);

    void on_comboBoxOrdem_currentIndexChanged(){organizeOrder();}

    void on_txtKeySearch_3_editingFinished();

private:
    Ui::AdicionarProdutos *ui;
    HEV::PersistenciaProduto produt;
    QString currentOrder;

    void limparDadosIncluir();
    void limparDadosPesquisar();
    void iniciarLista();
    void mostrarLista(QString order);
    void organizeOrder();
};

#endif // ADICIONARPRODUTOS_H
