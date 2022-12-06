#include "Node.h"
template <typename T>
Node<T>::Node()
{
    this->next = NULL;
}
template <typename T>
Node<T>::Node(T x)
{
    Node<T> *p = new Node<T>;
    if(p == NULL) exit(1);
    p->next = NULL;
    p->data = x;
    return p;
}