#include <iostream>
#include <string>
#include "include.h"

using namespace std;
// template <typename T>
void ShowMenu()
{
    cout << "====================================" << endl;
        cout << "select option :" << endl;
        cout << "1: Insert At Head" << endl;
        cout << "2: Insert At Tail" << endl;
        cout << "3: Insert At Index" << endl;
        cout << "4: Display " << endl;
        cout << "5: Remove" << endl;
        cout << "6: Sort" << endl;
        cout << "7: Seach" << endl;
        cout << "Other. Exit" << endl;
        cout << "====================================" << endl;
}
int main()
{
    ListCTKH<string> list;
    ShowMenu();
    int ch;
    while(true)
    {
        try
        {
            cout << "Input choice: ";
            if (cin >> ch)
            {
                switch (ch)
                {
                    case 1:
                    {
                        list.addCTKHHead();
                        break;
                    }
                    case 2:
                    {
                        list.addCTKHTail();
                        break;
                    }
                    case 3:
                    {
                        int k;
                        cout << "Nhap Vi Tri Can Chen: ";
                        cin >> k;
                        list.addCTKH(k);
                        break;
                    }
                    case 4:
                    {
                        list.displayCTKH();
                        break;
                    }
                    case 5:
                    {
                        list.removeCTKH();
                        break;
                    }
                    case 6:
                    {
                        list.sortCTKH();
                        break;
                    }
                    case 7:
                    {
                        int year;
                        cout << "Nhap Nam XB  Can Tim: ";
                        cin >> year;
                        list.findCTKH(year);
                        break;
                    }
                    default:
                    {
                        break;
                    }
                }
            }
            else throw("error input");
        }
        catch(...)
        {
            cout << "Lua Chon Khong Hop Le!!\n";
            break;
        }
    }
     list.displayCTKH();   
    return 0;
}