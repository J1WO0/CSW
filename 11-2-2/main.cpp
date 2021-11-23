#include "my_vector2.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string ss;
    int num;
    cin >> ss;
    while (1)
    {
        if (ss=="quit")
            return 0;
        else if (ss=="new")
        {
            cin >> num;
            MyVector2 a(num);
            MyVector2 b(num);
            cout << "enter a" << endl;
            cin >> a;
            cout << "enter b" << endl;
            cin >> b;
            ss="0";
            while(ss!="new")
            {
                cin >> ss;
                if (ss=="a")
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
                else if (ss=="quit")
                    return 0;
            }
        }
        
    }
}