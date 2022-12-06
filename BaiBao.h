#pragma once
#include <iostream>
#include <string>
#include "CongTrinhKhoaHoc.h"
using namespace std;

template <typename T>
class BaiBao : public CongTrinhKhoaHoc
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
    T getTenCT() ;
    void setSLTacGia(T);
    T getSLTacGia() ;
    template <typename T>
    friend istream &operator>>(istream &, BaiBao<T> &);
    template <typename T>
    friend ostream &operator<<(ostream &, const BaiBao<T> &);
    void input();
    void display();
};