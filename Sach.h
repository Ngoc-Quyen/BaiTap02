#pragma once
#include <iostream>
#include <string>
#include "CongTrinhKhoaHoc.h"
using namespace std;

template <typename T>
class Sach : public CongTrinhKhoaHoc
{
private:
    T Loai;

public:
    Sach();
    Sach(T);
    Sach(const T &);
    ~Sach();
    void setLoai(T);
    T getLoai();
    template <typename T>
    friend istream &operator>>(istream &, Sach<T> &);
    template<typename T>
    friend ostream &operator<<(ostream &, const Sach<T> &);
    void input();
    void display();
};