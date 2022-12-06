#pragma once
#include <iostream>
#include <string>
#include "CongTrinhKhoaHoc.h"
using namespace std;

template <class T>
class BaiBao : public CongTrinhKhoaHoc<T>
{
private:
    T TenCT;
    T SLTacGia;

public:
    BaiBao();
    BaiBao(T, T);
    BaiBao(const T &);
    ~BaiBao();
    void setTenCT(T);
    T getTenCT();
    void setSLTacGia(T);
    T getSLTacGia();
    template <class U>
    friend istream &operator>>(istream &, BaiBao<U> &);
    template <class U>
    friend ostream &operator<<(ostream &, const BaiBao<U> &);
    void input();
    void display();
};