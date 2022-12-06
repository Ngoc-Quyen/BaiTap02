#pragma once
#include <iostream>
using namespace std;
#include "Node.h"

template <typename T>
class Node;
template <typename T>
class LinkedList
{
    protected:
        int size;
        Node<T> *head;
        Node<T> *tail;
        bool check;
        Node<T> *findEndOfSortedString(Node<T> , bool(*)(T&, T&) );
    public:
        LinkedList(T&); //khoi tao list rong
        LinkedList();
        ~LinkedList();
        T size();
        T isEmpty(); //Kiem tra xem lieu LinkedList co rong hay ko
        void addHead( T); //chen vao dau
        void addTail( T); //chen vao cuoi
        void addAtK( T, T); //chen vao vi tri k
        T Len(); //do dai List
        void removeHead(); //xoa vi tri dau
        void removeTail(); //xoa vi tri cuoi
        void removeAtK(T); //xoa vi tri k
        void  display();

};