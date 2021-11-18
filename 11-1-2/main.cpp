#include <iostream>
#include <string>
#include "my_string2.h"
using namespace std;
int main()
{
    MyString2 a;
    MyString2 b;
    string ss;
    int num;
    while (1)
    {
        cin >> ss;
        if (ss=="quit")
            return 0;
        else if (ss=="new")
        {
            cout << "enter a" << endl;
            cin >> a;
            cout << "enter b" << endl;
            cin >> b;
        }
        else if (ss=="a")
        {
            cin >> ss;
            if (ss=="*")
            {
                cin >> num;
                MyString2 MS(a*num);
                cout << MS << endl;
            }
            else if (ss=="+")
            {
                cin >> ss;
                if (ss=="a")
                {
                    MyString2 MS(a+a);
                    cout << MS << endl;
                }
                else if (ss=="b")
                {
                    MyString2 MS(a+b);
                    cout << MS << endl;
                }
            }
        }
        else if (ss=="b")
        {
            cin >> ss;
            if (ss=="*")
            {
                cin >> num;
                MyString2 MS(b*num);
                cout << MS << endl;
            }
            else if (ss=="+")
            {
                cin >> ss;
                if (ss=="a")
                {
                    MyString2 MS(b+a);
                    cout << MS << endl;
                }
                else if (ss=="b")
                {
                    MyString2 MS(b+b);
                    cout << MS << endl;
                }
            }
        }
    }
}