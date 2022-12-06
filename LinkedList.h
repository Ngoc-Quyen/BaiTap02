#pragma once
#include <iostream>
using namespace std;
#include "Node.h"

template <typename T>
class LinkedList
{
protected:
    int size;
    Node<T> *head;
    Node<T> *tail;
    Node<T> *last;
    bool check;
    Node<T> *findEndOfSortedString(Node<T>, bool (*)(T &, T &));

public:
    LinkedList(T &); // khoi tao list rong
    LinkedList();
    ~LinkedList();
    T _size();
    T isEmpty();       // Kiem tra xem lieu LinkedList co rong hay ko
    void addHead(T);   // chen vao dau
    void addTail(T);   // chen vao cuoi
    void addAtK(T, T); // chen vao vi tri k
    T Len();           // do dai List
    void removeHead(); // xoa vi tri dau
    void removeTail(); // xoa vi tri cuoi
    void removeAtK(T); // xoa vi tri k
    void display();
    template <class U>
    friend bool Desc(U &, U &);
    template <class U>
    friend bool Asc(U &, U &);
    void sort(int (*)(T &, T &));
    T &operator[](int);
    T &operator[](int) const;
    T interpolationSearch(const T&);
};