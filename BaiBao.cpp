#include "BaiBao.h"
template <typename T>
BaiBao<T>::BaiBao(T ten, T sl) : TenCT(ten), SLTacGia(sl) {}
template <typename T>
BaiBao<T>::BaiBao(const T& bb)
{
    this->TenCT = bb.TenCT;
    this->SLTacGia = bb.SLTacGia;
}
template <typename T>
BaiBao<T>::~BaiBao() {}
template <typename T>
void BaiBao<T>::setTenCT(T ten)
{
    this->TenCT = ten;
}
template <typename T>
T BaiBao<T>::getTenCT() 
{
    return this->TenCT;
}
template <typename T>
void BaiBao<T>::setSLTacGia(T sl)
{
    this->SLTacGia = sl;
}
template <typename T>
T BaiBao<T>::getSLTacGia()
{
    return this->SLTacGia;
}
template <typename T>
istream &operator>>(istream &in, BaiBao<T> &bai)
{
    cout << "Nhap Ten Cong Trinh: ";
    getline(in, bai.TenCT);
    cout << "Nhap So Luong Tac Gia: ";
    in >> bai.SLTacGia;
    in.ignore();
    return in;
}
template <typename T>
ostream &operator<<(ostream & out, const BaiBao<T> &bai)
{
    out << "Bai Bao Ve Cong Trinh: " << bai.getTenCT() << endl;
    out << "So Luong Tac Gia: " << bai.getSLTacGia() << endl;
    return out;
}
template <typename T>
void BaiBao<T>::input()
{
    CongTrinhKhoaHoc<T>::input();
    cout << "Nhap Ten Cong Trinh: ";
    getline(cin, this->TenCT);
    cout << "Nhap So Luong Tac Gia: ";
    cin >> this->SLTacGia;
    cin.ignore();
}
template <typename T>
void BaiBao<T>::display() 
{
    CongTrinhKhoaHoc<T>::display();
    cout << "Bai Bao Ve Cong Trinh: " << this->getTenCT() << endl;
    cout << "So Luong Tac Gia: " << this->getSLTacGia() << endl;
}