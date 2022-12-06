#pragma once
#include <iostream>
#include <string>
using namespace std;
template <typename T>
class CongTrinhKhoaHoc
{
    private:    
        T MaCT;
        T NamXB;
        T KhuVuc;
    public: 
        CongTrinhKhoaHoc();
        CongTrinhKhoaHoc(T, T, T);
        CongTrinhKhoaHoc(T&);
        ~CongTrinhKhoaHoc();
        void setMaCT(T);
        T getMaCT() const;
        void setNamXB(T);
        T getNamXB() ;
        void setKhuVuc(T);
        T getKhuVuc();
        template <typename T>
        friend istream& operator>>(istream&,CongTrinhKhoaHoc<T>&);
        template <typename T>
        friend ostream& operator <<(ostream&, const CongTrinhKhoaHoc<T>&);
        void Update(T, T);
        virtual void display();
        virtual void input();
};