#include "my_string.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string ss;
    int num;
    MyString a;
    MyString b;
    MyString str;
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
                str=a*num;
                cout << str << endl;
            }
            else if (ss=="+")
            {
                cin >> ss;
                if (ss=="a")
                {
                    str=a+a;
                    cout << str << endl;
                }
                else if (ss=="b")
                {
                    str=a+b;
                    cout << str << endl;
                }
            }
        }
        else if (ss=="b")
        {
            cin >> ss;
            if (ss=="*")
            {
                cin >> num;
                str=b*num;
                cout << str << endl;
            }
            else if (ss=="+")
            {
                cin >> ss;
                if (ss=="a")
                {
                    str=b+a;
                    cout << str << endl;
                }
                else if (ss=="b")
                {
                    str=b+b;
                    cout << str << endl;
                }
            }
        }
    }
}