// #pragma once
// #include <iostream>
// #include "LinkedList.h"
// using namespace std;

// template<typename T>
// class LinkedList;
// template <typename T>
// class Node
// {
// private:
//     T data;
//     Node<T> *next; //chua dia chi node tiep theo
//     template <typename U>
//     friend class LinkedList;
// public:
//     Node();
//     Node(T); // tao thong tin cho node
//     ~Node();
// };
#pragma once
#include <iostream>
using namespace std;
template <class T>
struct Node
{
    T data;
    struct Node *next;
};