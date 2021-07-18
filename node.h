#ifndef NODE_H
#define NODE_H
namespace HEV
{
    template <class Thing>
    class Node
    {
        public:
        Thing D;
        Node<Thing> *left;
        Node<Thing> *right;
        int fb;
        Node();
        static Node<Thing>* montaNode(Thing *Dat);
        static Thing desmontaNode(Node<Thing>* P);
    };

    template <class Thing>
    Node<Thing>::Node()
    {
        left=0;
        right=0;
        fb=0;
    }
    template <class Thing>
    Node<Thing>* Node<Thing>::montaNode(Thing *Dat)
    {
        Node*P=new Node;
        if(P)P->D=*Dat;
        return P;
    }
    template <class Thing>
    Thing Node<Thing>::desmontaNode(Node* P)
    {
        Thing aux=P->D;
        delete P;
        return aux;
    }
}
#endif // NODE_H
