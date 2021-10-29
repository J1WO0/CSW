#include <iostream>
#include <string>
#include "number.h"
using namespace std;
int main()
{
    Cube N;
    string ss;
    int nn;
    while (1)
    {
        cin >> ss;
        if (ss=="quit")
            return 0;
        else if (ss=="number")
        {
            cin >> nn;
            N.setNumber(nn);
            cout << "getNumber(): " << N.getNumber() << endl;
        }
        else if (ss=="square")
        {
            cin >> nn;
            N.setNumber(nn);
            cout << "getNumber(): " << N.getNumber() << endl;
            cout << "getSquare(): " << N.getSquare() << endl;
        }
        else if (ss=="cube")
        {
            cin >> nn;
            N.setNumber(nn);
            cout << "getNumber(): " << N.getNumber() << endl;
            cout << "getSquare(): " << N.getSquare() << endl;
            cout << "getCube(): " << N.getCube() << endl;
        }
    }
}