// #include "Node.h"
// template <typename T>
// Node<T>::Node()
// {
//     this->next = NULL;
// }
// template <typename T>
// Node<T>::Node(T x)
// {
//     Node<T> *p = new Node<T>;
//     if(p == NULL) exit(1);
//     p->next = NULL;
//     p->data = x;
//     return p;
// }
#include "Node.h"
template <class T>
struct Node<T> *addToEmpty(struct Node<T> *last, const T &data)
{
    if (last != NULL)
        return last;
    struct Node<T> *newNode = (struct Node<T> *)malloc(sizeof(struct Node<T>));
    newNode->data = data;
    last = newNode;
    last->next = last;
    return last;
}

template <class T>
struct Node<T> *addFront(struct Node<T> *last, const T &data)
{
    if (last == NULL)
        return addToEmpty(last, data);
    struct Node<T> *newNode = (struct Node<T> *)malloc(sizeof(struct Node<T>));
    newNode->data = data;
    newNode->next = last->next;
    last->next = newNode;
    return last;
}

template <class T>
struct Node<T> *addEnd(struct Node<T> *last, const T &data)
{
    if (last == NULL)
        return addToEmpty(last, data);
    struct Node<T> *newNode = (struct Node<T> *)malloc(sizeof(struct Node<T>));
    newNode->data = data;
    newNode->next = last->next;
    last->next = newNode;
    last = newNode;
    return last;
}

template <class T>
struct Node<T> *addAfter(struct Node<T> *last, const T &data, const T &item)
{
    if (last == NULL)
        return NULL;
    struct Node<T> *newNode, *p;
    p = last->next;
    do
    {
        if (p->data == item)
        {
            newNode = (struct Node<T> *)malloc(sizeof(struct Node<T>));
            newNode->data = data;
            newNode->next = p->next;
            p->next = newNode;
            if (p == last)
                last = newNode;
            return last;
        }
        p = p->next;
    } while (p != last->next);
    throw string("\nThe given node is not present in the list.\n");
    return last;
}

template <class T>
void deleteNode(Node<T> **last, const T &key)
{
    if (*last == NULL)
        return;
    if ((*last)->data == key && (*last)->next == *last)
    {
        free(*last);
        *last = NULL;
        return;
    }
    Node<T> *tmp = *last, *d;
    if ((*last)->data == key)
    {
        while (tmp->next != *last)
            tmp = tmp->next;
        tmp->next = (*last)->next;
        free(*last);
        *last = tmp->next;
    }
    while (tmp->next != *last && tmp->next->data != key)
        tmp = tmp->next;
    if (tmp->next->data == key)
    {
        d = tmp->next;
        tmp->next = d->next;
        free(d);
    }
}
