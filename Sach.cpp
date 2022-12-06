#include "Sach.h"
template <typename T>
Sach<T>::Sach() {}
template <typename T>
Sach<T>::Sach(T loai) : Loai(loai) {}
template <typename T>
Sach<T>::Sach(const T &sach)
{
    this->Loai = sach.Loai;
}
template <typename T>
Sach<T>::~Sach() {}
template <typename T>
void Sach<T>::setLoai(T loai)
{
    this->Loai = loai;
}
template <typename T>
T Sach<T>::getLoai()
{
    return this->Loai;
}
template <typename T>
istream &operator>>(istream &in, Sach<T> &s)
{
    cout << "Nhap Loai Sach: ";
    getline(in, s.Loai);
    return in;
}
template <typename T>
ostream &operator<<(ostream &out, const Sach<T> &s)
{
    out << "The Loai: ";
    out << s.Loai << endl;
    return out;
}
template <typename T>
void Sach<T>::input()
{
    CongTrinhKhoaHoc<T>::input();
    cout << "Nhap Loai Sach: ";
    getline(cin, this->Loai);
}
template <typename T>
void Sach<T>::display()
{
    CongTrinhKhoaHoc<T>::display();
    cout << "The Loai: ";
    cout << this->Loai << endl;

}