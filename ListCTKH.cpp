#include "ListCTKH.h"

template <typename T>
ListCTKH<T>::ListCTKH()
{
}
template <typename T>
ListCTKH<T>::~ListCTKH()
{
    delete[] CTKHs;
}
template <typename T>
void ListCTKH<T>::addCTKHHead()
{
    int type;
    CongTrinhKhoaHoc<T> *CTKH;
    cout << "Loai Nghien Cuu Khoa Hoc:\n";
    cout << "1. Sach\n";
    cout << "2. Bai Bao\n";
    try
    {
        cout << "Nhap Lua Chon: ";
        cin >> type;
        switch (type)
        {
        case 1:
        {
            CTKH = new Sach<T>;
            (*CTKH).input();
            (this->CTKHs).addHead(*CTKH);
            break;
        }
        case 2:
        {
            CTKH = new BaiBao<T>;
            (*CTKH).input();
            (this->CTKHs).addHead(*CTKH);
            break;
        }
        default:
            cout << "choice dose not exist" << endl;
            break;
        }
    }
    catch (...)
    {
        cout << "Invalid choice\n";
        this->addCTKHHead();
    }
}
template <typename T>
void ListCTKH<T>::addCTKHTail()
{
    int type;
    CongTrinhKhoaHoc<T> *CTKH;
    cout << "Loai Nghien Cuu Khoa Hoc:\n";
    cout << "1. Sach\n";
    cout << "2. Bai Bao\n";
    try
    {
        cout << "Nhap Lua Chon: ";
        cin >> type;
        switch (type)
        {
        case 1:
        {
            CTKH = new Sach<T>;
            (*CTKH).input();
            (this->CTKHs).addTail(*CTKH);
            break;
        }
        case 2:
        {
            CTKH = new BaiBao<T>;
            (*CTKH).input();
            (this->CTKHs).addTail(*CTKH);
            break;
        }
        default:
            cout << "Lua Chon Khong Ton Tai" << endl;
            break;
        }
    }
    catch (...)
    {
        cout << "Lua Chon Khong Hop Le\n";
        this->addCTKHTail();
    }
}
template <typename T>
void ListCTKH<T>::addCTKH(int k)
{
    CongTrinhKhoaHoc<T> CTKH;
    int type;
    cout << "Loai Nghien Cuu Khoa Hoc:\n";
    cout << "1. Sach\n";
    cout << "2. Bai Bao\n";
    try
    {
        cout << "Nhap Lua Chon: ";
        cin >> type;
        switch (type)
        {
        case 1:
        {
            CTKH = new Sach<T>;
            break;
        }
        case 2:
        {
            CTKH = new BaiBao<T>;
            break;
        }
        default:
            cout << "Lua Chon Khong Ton Tai";
            break;
        }
        CTKH.input();
        (this->CTKHs).addAtK(k, CTKH);
    }
    catch (...)
    {
        cout << "Lua Chon Khong Hop Le\n";
    }
}
template <typename T>
void ListCTKH<T>::removeCTKH()
{
    cout << "Lua Chon Vi Tri Xoa\n";
    cout << "1. Xoa Vi Tri Dau\n";
    cout << "2. Xoa Vi Tri Cuoi\n";
    cout << "3. Xoa Vi Tri Bat Ki\n";
    int type;
    try
    {
        cout << "Nhap Lua Chon: ";
        cin >> type;
        switch (type)
        {
        case 1:
        {
            (this->CTKHs).removeHead();
            this->Number = (this->CTKHs)._size();
            break;
        }
        case 2:
        {
            (this->CTKHs).removeTail();
            this->Number = (this->CTKHs)._size();
            break;
        }
        case 3:
        {
            T cmt;
            cout << "Nhap Vi Tri Can Xoa: ";
            cin >> cmt;
            (*(this->CTKHs)).removeAtK(cmt);
            this->Number = (this->CTKHs)._size();
            break;
        }
        default:
            cout << "Lua Chon Khong Ton Tai!!" << endl;
            break;
        }
    }
    catch (...)
    {
        cout << "Lua Chon Khong Hop Le!\n";
    }
}
template <typename T>
CongTrinhKhoaHoc<T> ListCTKH<T>::findCTKH(int year)
{
    (this->CTKHs).interpolationSearch(year);
}
template <typename T>
void ListCTKH<T>::displayCTKH()
{
    for (int i = 0; i < ((this->CTKHs).size()); i++)
    {
        (*(this->CTKHs + i)).output();
    }
}
template <typename T>
void ListCTKH<T>::sortCTKH()
{
    cout << "1. Sap Xep Giam Dan\n";
    cout << "2. Sap Xep Tang Dan\n";
    int type;
    try
    {
        cout << "Nhap Lua Chon: ";
        cin >> type;
        switch (type)
        {
        case 1:
        {
            (this->CTKHs).sort(Desc);
            (this->CTKHs).displayCTKH();
            break;
        }
        case 2:
        {
            (this->CTKHs).sort(Asc);
            (this->CTKHs).displayCTKH();
            break;
        }
        default:
        {
            cout << "Lua Chon Khong Ton Tai!!" << endl;
            break;
        }
        }
    }
    catch(...)
    {
        cout << "Lua Chon Khong Hop Le!\n";
    }
}