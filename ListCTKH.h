#pragma once
#include <iostream>
#include <string>
#include "CongTrinhKhoaHoc.h" 
using namespace std;

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
        void addCTKH(int/*, CongTrinhKhoaHoc<T>*/);
        void removeCTKH();
        CongTrinhKhoaHoc<T> findCTKH(int);
        void displayCTKH();
        void sortCTKH();
        // void clearCTKH();
        T getNumber();

        
};