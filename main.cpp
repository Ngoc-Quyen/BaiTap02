#include <iostream>
#include <string>
#include "LinkedList.h"
#include "Node.h"

using namespace std;
template <typename T>
int main()
{
    LinkedList<int> list;

    int ch, item, index;
    bool quit = false;
    do
    {
        cout << "====================================" << endl;
        cout << "select option :" << endl;
        cout << "1: insert back" << endl;
        cout << "2: insert front" << endl;
        cout << "3: insert at index" << endl;
        cout << "4: display items" << endl;
        cout << "5: get item at index" << endl;
        cout << "6: delete back" << endl;
        cout << "7: delete front" << endl;
        cout << "8: delete at index" << endl;
        cout << "9: exit" << endl;
        cin >> ch;
        cout << "====================================" << endl;
        switch (ch)
        {
        case 1:
            cout << "enter item to insert:" << endl;
            cin >> item;
            list.addTail(item);
            break;
        case 2:
            cout << "enter item to insert:" << endl;
            cin >> item;
            list.addHead(item);
            break;
        case 3:
            cout << "enter item to insert:" << endl;
            cin >> item;
            cout << "enter index:" << endl;
            cin >> index;
            list.addAtK(index, item);
            break;
        case 4:
            list.display();
            break;

        case 5:
            // cout << "enter index:" << endl;
            // cin >> index;
            // cout << "item at index " << index << ": " << list.get(index) << endl;
            cout << "KHONG CO GI CA\n";
            break;
        case 6:
            list.removeHead();
            break;
        case 7:
            list.removeTail();
            break;
        case 8:
            cout << "enter index:" << endl;
            cin >> index;
            list.removeAtK(index);
            break;
        case 9:
            quit = true;
            break;
        default:
            cout << "invalid selection" << endl;
            break;
        }
    } while (!quit);
    return 0;
}