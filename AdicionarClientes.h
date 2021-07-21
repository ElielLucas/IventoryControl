#ifndef ADICIONARCLIENTES_H
#define ADICIONARCLIENTES_H

#include <QDialog>
#include<persistenciacliente.h>
#include<QTableWidgetItem>
#include<QMessageBox>

namespace Ui {
class AdicionarClientes;
}

class AdicionarClientes : public QDialog
{
    Q_OBJECT

public:
    explicit AdicionarClientes(QWidget *parent = nullptr);
    ~AdicionarClientes();

private slots:

    void on_tabCliente_currentChanged(int index);

    void on_pushButtonIncluir_clicked();

    //void on_comboBoxOrdem_currentIndexChanged(){organizeOrder();}

    void on_lineEditSearchCliente_textEdited(const QString &arg1);

    void on_twCliente_itemDoubleClicked(QTableWidgetItem *item);

    void on_pushButtonEdit_clicked();

    void on_pushButtonExcluir_clicked();

private:
    Ui::AdicionarClientes *ui;
    HEV::PersistenciaCliente client;
    QString currentOrder;

    void limparDadosIncluir();
    void limparDadosLista();
    void iniciarLista();
    void mostrarLista(QString order);
    void organizeOrder();
};

#endif // ADICIONARCLIENTES_H
