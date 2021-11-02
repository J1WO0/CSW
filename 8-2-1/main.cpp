#include <iostream>
#include "shapes.h"
#include <string>

using namespace std;
int main()
{
    int a,b,c,d,cw,ch;
    string ss;
    string sh;
    cin >> ch >> cw;
    while (1)
    {
        cin >> ss;
        if (ss=="quit")
        return 0;
        else if (ss=="rect")
        {
            cin >> a >> b >> c >> d >> sh;
            Rectangle rec(a,b,c,d,sh,ch,cw);
            cout << "Area: " << rec.Rectangle::GetArea() << endl;
            cout << "Perimeter: " << rec.Rectangle::GetPerimeter() << endl;
            rec.Rectangle::Draw();
        }
        else if (ss=="diamond")
        {
            cin >> a >> b >> c >> sh;
            Diamond dia(a,b,c,sh,ch,cw);
            cout << "Area: " << dia.Diamond::GetArea() << endl;
            cout << "Perimeter: " << dia.Diamond::GetPerimeter() << endl;
            dia.Diamond::Draw();
        }
        else if (ss=="square")
        {
            cin >> a >> b >> c >>sh;
            Square sq(a,b,c,sh,ch,cw);
            cout << "Area: " << sq.Square::GetArea() << endl;
            cout << "Perimeter: " << sq.Square::GetPerimeter() << endl;
            sq.Square::Draw();
        }
    }
}