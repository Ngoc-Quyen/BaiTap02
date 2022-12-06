#pragma once
#include <iostream>
#include <string>
#include "CongTrinhKhoaHoc.h"
using namespace std;

template <typename T>
class Sach : public CongTrinhKhoaHoc<T>
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
    template <typename U>
    friend istream &operator>>(istream &, Sach<U> &);
    template<typename U>
    friend ostream &operator<<(ostream &, const Sach<U> &);
    void input();
    void display();
};