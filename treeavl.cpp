#include<treeavl.h>
namespace HEV
{
    Tree::Tree()
    {
        root=nullptr;
        lins=0;
        cols=0;
    }

    Tree::Tree(int lins,int cols)
    {
        root=nullptr;
        this->lins=lins;
        this->cols=cols;

    }

    void Tree::swap(Node<Produto>*R1, Node<Produto>*R2)
    {
        Produto x=R2->D;
        R2->D=R1->D;
        R1->D=x;
    }

    bool Tree::push(Produto *Dat)
    {
       Node<Produto>* P=Node<Produto>::montaNode(Dat);
       if(!P)return false;
       return insert(&root,P);
    }

    bool Tree::pop(QString key, Produto*Dat)
    {
        remove(key,&root,Dat);
        return true;
    }

    bool Tree::search(QString key, Produto*Dat)
    {
        Node<Produto>*P=root;
        while(P && key!=P->D.getCodigo())
        {
            if(key<P->D.getCodigo())
            {
                P=P->left;
            }else
            {
                P=P->right;
            }
        }
        if(!P)return false;
        *Dat=P->D;
        return true;
    }

    bool Tree::insert(Node<Produto>**R, Node<Produto>*aux)
    {
        if(!*R)
        {
            *R=aux;
            return true;
        }else
        {
           if(aux->D.getCodigo() < (*R)->D.getCodigo())
           {
                if(Tree::insert(&((*R)->left),aux))
                {
                    if((*R)->fb==0)
                    {
                        (*R)->fb=-1;
                        return true;
                    }
                    if((*R)->fb==1)
                    {
                        (*R)->fb=0;
                        return false;
                    }
                    if((*R)->left->fb==-1)
                    {
                        Tree::RSD(R);
                        return false;
                    }
                    Tree::RDD(R);
                    return false;
                }
                return false;
            }
           if(aux->D.getCodigo() > ((*R)->D.getCodigo()))
           {
               if(Tree::insert(&((*R)->right),aux))
               {
                   if((*R)->fb==0)
                   {
                       (*R)->fb=1;
                       return true;
                   }
                   if((*R)->fb==-1)
                   {
                       (*R)->fb=0;
                       return false;
                   }
                   if((*R)->right->fb==1)
                   {
                       Tree::RSE(R);
                       return false;
                   }
                   Tree::RDE(R);
                   return false;
               }
               return false;
           }
        }
        return true;
    }

    bool Tree::remove(QString key,Node<Produto>**R, Produto*Dat)
    {
        if(!*R)return false;
        if(key<(*R)->D.getCodigo())
        {
            if(Tree::remove(key,&((*R)->left),Dat))
            {
                if((*R)->fb==0)
                {
                    (*R)->fb=1;
                    return false;
                }
                if((*R)->fb==-1)
                {
                    (*R)->fb=0;
                    return true;
                }
                if((*R)->right->fb==1)
                {
                    Tree::RSE(R);
                    return true;
                }
                if((*R)->right->fb==0)
                {
                    Tree::RSE(R);
                    return false;
                }
                Tree::RDE(R);
                return true;
            }
            return false;
        }
        if(key>(*R)->D.getCodigo())
        {
            if(Tree::remove(key,&((*R)->right),Dat))
            {
                if((*R)->fb==0)
                {
                    (*R)->fb=-1;
                    return false;
                }
                if((*R)->fb==1)
                {
                    (*R)->fb=0;
                    return true;
                }
                if((*R)->left->fb==-1)
                {
                    Tree::RSD(R);
                    return true;
                }
                if((*R)->left->fb==0)
                {
                    Tree::RSD(R);
                    return false;
                }
                Tree::RDD(R);
                return true;
            }
            return false;
        }
        if(!(*R)->left)
        {
            Node<Produto>*aux=(*R);
            *R=aux->right;
            *Dat=Node<Produto>::desmontaNode(aux);
            return true;
        }
        if(!(*R)->right)
        {
            Node<Produto>*aux=*R;
            *R=aux->left;
            *Dat=Node<Produto>::desmontaNode(aux);
            return true;
        }
        Node<Produto>*aux=Tree::maximus((*R)->left);
        swap((*R),aux);
        if(Tree::remove(key,&((*R)->left),Dat))
        {
            if((*R)->fb==0)
            {
                (*R)->fb=1;
                return false;
            }
            if((*R)->fb==-1)
            {
                (*R)->fb=0;
                return true;
            }
            if((*R)->right->fb==1)
            {
                Tree::RSE(R);
                return true;
            }
            if((*R)->right->fb==0)
            {
                Tree::RSE(R);
                return false;
            }
            Tree::RDE(R);
            return true;
        }
        return false;
    }

    Node<Produto>* Tree::maximus(Node<Produto>*R)
    {
        if(!R)return nullptr;
        if(!R->right)return R;
        return maximus(R->right);
    }

    void Tree::RSD(Node<Produto>**R)
    {
        Node<Produto>*A=*R;
        Node<Produto>*B=A->left;
        A->left=B->right;
        B->right=A;
        *R=B;
        if(B->fb==-1)
        {
            A->fb=B->fb=0;
        }else
        {
            A->fb=-1;
            B->fb=+1;
        }
    }

    void Tree::RSE(Node<Produto>**R)
    {
        Node<Produto>*A= *R;
        Node<Produto>*B=A->right;
        A->right=B->left;
        B->left=A;
        *R=B;
        if(B->fb==1)
        {
            A->fb=B->fb=0;
        }else
        {
            A->fb=1;
            B->fb=-1;
        }
    }

    void Tree::RDD(Node<Produto>**R)
    {
        Node<Produto>*A=*R;
        Node<Produto>*B=A->left;
        Node<Produto>*C=B->right;
        A->left=C->right;
        B->right=C->left;
        C->left=B;
        C->right=A;
        *R=C;
        if(C->fb==1)
        {
            A->fb=0;
            B->fb=-1;
        }else
        {
            if(C->fb==-1)
            {
                A->fb=1;
                B->fb=0;
            }else
            {
                A->fb=0;
                B->fb=0;
            }
        }
        C->fb=0;
    }

    void Tree::RDE(Node<Produto>**R)
    {
        Node<Produto>*A=*R;
        Node<Produto>*B=A->right;
        Node<Produto>*C=B->left;
        A->right=C->left;
        B->left=C->right;
        C->left=A;
        C->right=B;
        *R=C;
        if(C->fb==1)
        {
            A->fb=-1;
            B->fb=0;
        }else
        {
            if(C->fb==-1)
            {
                A->fb=0;
                B->fb=1;
            }else
            {
                A->fb=0;
                B->fb=0;
            }
        }
        C->fb=0;
    }

    int Tree::inorder(QString key)
    {
        int index=0;
        inorderR(root,key,index);
        return index;
    }
    void Tree::inorderR(Node<Produto>*R, QString key,int &index)
    {
        if(R)
        {
           inorderR(R->left, key, index);
           index++;
           if(R->D.getCodigo()==key)return;
           inorderR(R->right, key, index);
        }

    }

}
