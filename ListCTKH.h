#pragma once
#include <iostream>
#include <string>
#include "CongTrinhKhoaHoc.h" 
using namespace std;

template<typename T>
bool Desc(T& a, T& b)
{
    if (a.getNamXB() > b.getNamXB()) return false;
    return true;
}
template<typename T>
bool Asc(T& a, T& b)
{
    if (a.getNamXB() < b.getNamXB()) return false;
    return true;
}
template<typename T>
class ListCTKH
{
    private:
        T Name;
        T Number;
    protected:
        LinkedList<CongTrinhKhoaHoc<T>> CTKHs;
    public:
        ListCTKH();
        ~ListCTKH();
        void addCTKHHead();
        void addCTKHTail();
        void addCTKH(T/*, CongTrinhKhoaHoc<T>*/);
        void removeCTKH(T);
        void removeCTKH();
        CongTrinhKhoaHoc<T> findCTKH(T);
        void displayCTKH();
        void sortCTKH();
        void clearCTKH();
        T getNumber();
        
};