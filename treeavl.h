#ifndef TREEAVL_H
#define TREEAVL_H
#include<node.h>
#include<produto.h>

namespace HEV
{
    class Tree
    {
        private:
           Node<Produto>* root;
           int lins, cols;
        public:
            Tree();
            Tree(int lins,int cols);

            Node<Produto>* getRoot(){return root;}
            bool push(Produto *Dat);
            bool pop(QString key, Produto*Dat);

            static void RSD(Node<Produto>**R);
            static void RSE(Node<Produto>**R);
            static void RDD(Node<Produto>**R);
            static void RDE(Node<Produto>**R);
            int inorder(QString key);
            void inorderR(Node<Produto>*R, QString key,int &index);
            static bool insert(Node<Produto>**R, Node<Produto>*aux);
            static bool remove(QString key, Node<Produto>**R, Produto*Dat);
            bool search(QString key, Produto*Dat);
            static Node<Produto>* maximus(Node<Produto>*R);
            static void swap(Node<Produto>*R1, Node<Produto>*R2);
            void limparArray();
    };
}
#endif // TREEAVL_H
