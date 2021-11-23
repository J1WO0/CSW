#include "my_vector.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string ss;
    string op;
    string ob;
    MyVector a;
    MyVector b;
    int num;
    while (1)
    {
        cin >> ss;
        if (ss=="quit")
            return 0;
        else if (ss=="new")
        {
            cin >> num;
            MyVector a1(num);
            MyVector b1(num);
            cout << "enter a" << endl;
            cin >> a1;
            cout << "enter b" << endl;
            cin >> b1;
            a=a1;
            b=b1;
        }
        else if (ss=="a")
        {
            cin >> op;
            if (op=="+")
            {
                cin >> ob;
                if (ob=="a")
                {
                    MyVector vv(num);
                    vv=a+a;
                    cout << vv << endl;
                }
                else if (ob=="b")
                {
                    MyVector vv(num);
                    vv=a+b;
                    cout << vv << endl;
                }
                else
                {
                    MyVector vv(num);
                    vv=a+stoi(ob);
                    cout << vv << endl;
                }
            }
            else if (op=="-")
            {
                cin >> ob;
                if (ob=="a")
                {
                    MyVector vv(num);
                    vv=a-a;
                    cout << vv << endl;
                }
                else if (ob=="b")
                {
                    MyVector vv(num);
                    vv=a-b;
                    cout << vv << endl;
                }
                else
                {
                    MyVector vv(num);
                    vv=a-stoi(ob);
                    cout << vv << endl;
                }
            }
        }
        else if (ss=="b")
        {
            cin >> op;
            if (op=="+")
            {
                cin >> ob;
                if (ob=="a")
                {
                    MyVector vv(num);
                    vv=b+a;
                    cout << vv << endl;
                }
                else if (ob=="b")
                {
                    MyVector vv(num);
                    vv=b+b;
                    cout << vv << endl;
                }
                else
                {
                    MyVector vv(num);
                    vv=b+stoi(ob);
                    cout << vv << endl;
                }
            }
            else if (op=="-")
            {
                cin >> ob;
                if (ob=="a")
                {
                    MyVector vv(num);
                    vv=b-a;
                    cout << vv << endl;
                }
                else if (ob=="b")
                {
                    MyVector vv(num);
                    vv=b-b;
                    cout << vv << endl;
                }
                else
                {
                    MyVector vv(num);
                    vv=b-stoi(ob);
                    cout << vv << endl;
                }
            }
        }
    }
}