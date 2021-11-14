#include <iostream>
#include <vector>
#include "shape.h"
using namespace std;
int main()
{
    double a;
    double b;
    char ss;
    vector<Shape *> arr;
    while (1)
    {
        cin >> ss;
        if (ss=='r')
        {
            cin >> a >> b;
            arr.push_back(new Rectangle(a,b));
        }
        else if (ss=='t')
        {
            cin >> a >> b;
            arr.push_back(new Triangle(a,b));
        }
        else if (ss=='0')
        {
            for (int i=0;i<arr.size();i++)
            {
                cout << arr[i]->getArea() << endl;
            }
            for (int i=0;i<arr.size();i++)
                delete arr[i];
            return 0;
        }
    }
}