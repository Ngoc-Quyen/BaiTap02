#include "CongTrinhKhoaHoc.h"
template <typename T>
CongTrinhKhoaHoc<T>::CongTrinhKhoaHoc() {}
template <typename T>
CongTrinhKhoaHoc<T>::CongTrinhKhoaHoc(T ma, T nam, T KV) : MaCT(ma), NamXB(nam), KhuVuc(KV) {}
template <typename T>
CongTrinhKhoaHoc<T>::CongTrinhKhoaHoc(T& ctkh)
{
    this->MaCT = ctkh.MaCT;
    this->NamXB = ctkh.NamXB;
    this->KhuVuc = ctkh.KhuVuc;
}
template <typename T>
CongTrinhKhoaHoc<T>::~CongTrinhKhoaHoc() {}
template <typename T>
void CongTrinhKhoaHoc<T>::setMaCT(T ma)
{
    this->MaCT = ma;
}
template <typename T>
T CongTrinhKhoaHoc<T>::getMaCT() const
{
    return this->MaCT;
}
template <typename T>
void CongTrinhKhoaHoc<T>::setNamXB(T nam)
{
    this->NamXB = nam;
}
template <typename T>
T CongTrinhKhoaHoc<T>::getNamXB() 
{
    return this->NamXB;
}
template <typename T>
void CongTrinhKhoaHoc<T>::setKhuVuc(T KV)
{
    this->KhuVuc = KV;
}
template <typename T>
T CongTrinhKhoaHoc<T>::getKhuVuc()  
{
    return this->KhuVuc;
}
template <typename T>
istream& operator>>(istream& in,CongTrinhKhoaHoc<T>& ctkh)
{
    cout << "Nhap Ma CT(Chi Nhap So): ";
    in >> ctkh.MaCT;
    cout << "Nhap Nam XB: ";
    in >> ctkh.NamXB;
    while (ctkh.NamXB < 1900)
    {
        cout << "Nhap lai NamXB: ";
        in >> ctkh.NamXB;
    }
    cout << "Nhap Khu Vuc XB: ";
    in >> ctkh.Khuvuc;
    return in;
}
template <typename T>
ostream &operator<<(ostream &out, const CongTrinhKhoaHoc<T> &p)
{
    cout << p.MaCT << " " << p.NamXB << " ";
    if (p.Khuvuc == 0)
        cout << "trong nuoc" << endl;
    else
        cout << "quoc te" << endl;
    return out;
}
template <typename T>
void CongTrinhKhoaHoc<T>::input()
{
    cout << "Nhap Ma CT(Chi Nhap So): ";
    cin >> this->MaCT;
    cout << "Nhap Nam XB: ";
    cin >> this->NamXB;
    while (this->NamXB < 1900)
    {
        cout << "Nhap lai NamXB: ";
        cin >> this->NamXB;
    }
    cout << "Nhap Khu Vuc XB: ";
    cin >> this->Khuvuc;
}
template <typename T>
void CongTrinhKhoaHoc<T>::display()
{
    cout << this->MaCT << " " << this->NamXB << " ";
    if (this->Khuvuc == 0)
        cout << "trong nuoc" << endl;
    else
        cout << "quoc te" << endl;
}