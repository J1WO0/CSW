#include "my_vector2.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string ss;
    int num;
    MyVector2 a;
    MyVector2 b;
    while (1)
    {
        cin >> ss;
        if (ss=="quit")
            return 0;
        else if (ss=="new")
        {
            cin >> num;
            MyVector2 a1(num);
            MyVector2 b1(num);
            cout << "enter a" << endl;
            cin >> a1;
            a=a1;
            cout << "enter b" << endl;
            cin >> b1;
            b=b1;
        }
        else if (ss=="a")
        {
            cin >> ss;
            if (ss=="+")
            {
                cin >> ss;
                if (ss=="a")
                {
                    MyVector2 MV(a+a);
                    cout << MV << endl;
                }
                else if (ss=="b")
                {
                    MyVector2 MV(a+b);
                    cout << MV << endl;
                }
                else
                {
                    MyVector2 MV(a+stoi(ss));
                    cout << MV << endl;
                }
            }
            else if (ss=="-")
            {
                cin >> ss;
                if (ss=="a")
                {
                    MyVector2 MV(a-a);
                    cout << MV << endl;
                }
                else if (ss=="b")
                {
                    MyVector2 MV(a-b);
                    cout << MV << endl;
                }
                else
                {
                    MyVector2 MV(a-stoi(ss));
                    cout << MV << endl;
                }
            }
        }
        else if (ss=="b")
        {
            cin >> ss;
            if (ss=="+")
            {
                cin >> ss;
                if (ss=="a")
                {
                    MyVector2 MV(b+a);
                    cout << MV << endl;
                }
                else if (ss=="b")
                {
                    MyVector2 MV(b+b);
                    cout << MV << endl;
                }
                else
                {
                    MyVector2 MV(b+stoi(ss));
                    cout << MV << endl;
                }
            }
            else if (ss=="-")
            {
                cin >> ss;
                if (ss=="a")
                {
                    MyVector2 MV(b-a);
                    cout << MV << endl;
                }
                else if (ss=="b")
                {
                    MyVector2 MV(b-b);
                    cout << MV << endl;
                }
                else
                {
                    MyVector2 MV(b-stoi(ss));
                    cout << MV << endl;
                }
            }
        }
    }
}