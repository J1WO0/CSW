#include <iostream>
#include "rect.h"
#include <string>
using namespace std;

int main()
{
    int a;
    int b;
    string ss;
    while (1)
    {
        cin >> ss;
        if (ss=="quit")
            return 0;
        else if (ss=="nonsquare")
        {
            cin >> a >> b;
            NonSquare nsq(a,b);
            nsq.print();
        }
        else if (ss=="square")
        {
            cin >> a;
            Square sq(a);
            sq.print();
        }
    }
}