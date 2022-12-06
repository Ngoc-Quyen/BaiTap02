#include "LinkedList.h"
template <typename T>
LinkedList<T>::LinkedList()
{
    head = NULL;
    tail = NULL;
    last = NULL;
    size = 0;
    check = false;
}
template <typename T>
LinkedList<T>::LinkedList(T &ls)
{
    this->head = ls.head;
    this->tail = ls.tail;
    this->last = ls.last;
    size = ls.Len();
    check = true;
}
template <typename T>
LinkedList<T>::~LinkedList()
{
    Node<T> *tmp;
    while (head != NULL)
    {
        tmp = head;
        head = head->next;
        delete tmp;
    }
    tail = NULL;
    size = 0;
    check = false;
}
template <typename T>
T LinkedList<T>::isEmpty()
{
    if (this->head == NULL)
        return true;
    return false;
}
template <typename T>
void LinkedList<T>::addHead(T item)
{
    Node<T> *node = Node<T>(item);
    if (this->isEmpty())
    {
        this->head = this->tail = node;
        this->tail->next = this->head;
    }
    else
    {
        node->next = this->head;
        this->head = node;
        this->tail->next = this->head;
    }
}
template <typename T>
void LinkedList<T>::addTail(T item)
{
    Node<T> *node = Node<T>(item);
    if (this->isEmpty())
        this->addHead(item);
    else
    {
        this->tail->next = node;
        this->tail = node;
        this->tail->next = this->head;
    }
}
template <typename T>
T LinkedList<T>::Len()
{
    Node<T> *node = this->head;
    int len = 1;
    if (this->isEmpty())
        return 0;
    else
    {
        while (node != node->next)
        {
            len++;
            node = node->next;
        }
    }
    return len;
}
template <typename T>
void LinkedList<T>::addAtK(T item, T k)
{
    try
    {
        if (this->isEmpty() || k < 1)
            throw string("invalid index");
        else
        {
            Node<T> *node = new Node<T>;
            node->data = item;
            int count = 0;
            Node<T> *temp = this->head;
            while (count < k)
            {
                if (count == k - 1)
                {
                    node->next = temp->next != this->head ? temp->next : this->head;
                    temp->next = node;
                    cout << "New Node Add At Index " << k << "!\n";
                    break;
                }
                count++;
                temp = temp->next;
            }
        }
    }
    catch (exception &e)
    {
        cout << e.what();
    }
}
template <typename T>
void LinkedList<T>::removeHead()
{
    try
    {
        if (this->isEmpty())
            throw string("Danh Sach Rong!");
        else
        {
            if (this->head != this->tail)
            {
                Node<T> *node = this->head;
                this->head = this->head->next;
                this->tail->next = this->head;
                delete node;
            }
            else
                this->head = NULL;
        }
    }
    catch (exception &e)
    {
        cout << e.what() << endl;
    }
}
template <typename T>
void LinkedList<T>::removeTail()
{
    try
    {
        if (this->isEmpty())
            throw string("Danh Sach Rong!");
        else
        {
            if (this->head != this->tail)
            {
                Node<T> *p = this->head;
                Node<T> *q = new Node<T>;
                while (p->next != this->tail)
                    p = p->next;
                q = p;
                p = p->next;
                this->tail = q;
                this->tail->next = NULL;
                this->tail->next = this->head;
                delete p;
            }
            else
                this->head = NULL;
        }
    }
    catch (exception &e)
    {
        cout << e.what() << endl;
    }
}
template <typename T>
void LinkedList<T>::removeAtK(T k)
{
    try
    {
        if (k < 0 || k >= this->Len())
            throw string("Vi tri xoa khong hop le!");
        else
        {
            T dem = 0;
            if (!this->isEmpty())
            {
                Node<T> *p = this->head;
                Node<T> *q = new Node<T>;
                while (p != NULL) // tim node thu k
                {
                    dem++;
                    q = p;
                    if (dem == k)
                        break; // tim thay thi break
                    else
                        p = p->next; // ko thi tim tiep
                }
                Node<T> *r = this->head;
                while (r->next != q)
                    r = r->next;   // tim node k-1
                r->next = q->next; // cho node next cua node k-1 tro den node k+1
                delete q;
            }
        }
    }
    catch (exception &e)
    {
        cout << e.what() << endl;
    }
}
template <typename T>
void LinkedList<T>::display()
{
    if (this->head != NULL)
    {
        Node<T> *p = this->head;
        do
        {
            cout << p->data << "\t";
            p = p->next;
        } while (p != this->head);
    }
}

template <typename T>
T LinkedList<T>::_size()
{
    return this->size;
}
template <typename T>
bool Desc(T &a, T &b)
{
    if (a.getNamXB() > b.getNamXB())
        return false;
    return true;
}
template <typename T>
bool Asc(T &a, T &b)
{
    if (a.getNamXB() < b.getNamXB())
        return false;
    return true;
}
template <typename T>
void LinkedList<T>::sort(int (*cmp)(T &u1, T &u2))
{
    for (int gap = this->len / 2; gap > 0; gap /= 2)
    {
        for (int i = gap; i < this->len; i++)
        {
            T tmp = (*this)[i];
            int j;
            for (j = i; j >= gap && comp((*this)[j - gap], tmp); j -= gap)
                (*this)[j] = (*this)[j - gap];
            (*this)[j] = tmp;
        }
    }
}
// template <class T>
// T &LinkedList<T>::operator[](int id)
// {
//     struct Node<T> *p;
//     if (last == NULL)
//         throw string("Error!");
//     p = last->next;
//     id = (id + size) % size;
//     for (int i = 0; i < id; i++)
//         p = p->next;
//     return p->data;
// }
// template <class T>
// T &LinkedList<T>::operator[](int id) const
// {
//     struct Node<T> *p;
//     if (last == NULL)
//         throw string("Error!");
//     p = last->next;
//     id = (id + size) % size;
//     for (int i = 0; i < id; i++)
//         p = p->next;
//     return p->data;
// }
template <class T>
T LinkedList<T>::interpolationSearch(const T &_t)
{
    this->sort(Asc);
    int s = 0, e = this->size - 1;
    while (s < e && _t >= (*this)[s] && _t <= (*this)[e])
    {
        if (s == e)
        {
            if (!((*this)[s] != _t))
                return s;
            return -1;
        }
        int pos = s + (((double)(e - s) / ((*this)[e] - (*this)[s])) * -((*this)[s] - _t));
        if (!((*this)[pos] != _t))
            return pos;
        if ((*this)[pos] < _t)
            s = pos + 1;
        else
            e = pos - 1;
    }
    return -1;
}