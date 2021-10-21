#include <iostream>
#include <string>
#include "shapes.h"
using namespace std;
int main()
{
	string s;
	int a,b,c,d;
	while (1)
	{
		cout << "shape?" << endl;
		cin >> s;
		if (s=="C")
		{
			cin >>	a >> b >> c;
			Circle cir;
			double e,f;
			cir.Circle::val(a,b,c);
			e=cir.Circle::Carea();
			f=cir.Circle::Cperimeter();
			cout << "area: " << e << ", perimeter: " << f << endl;
		        cout << endl;	
		}
		else if (s=="R")
		{
			cin >> a >> b >> c >> d;
			Rectangle Rec;
			int e,f;
			Rec.Rectangle::Rval(a,b,c,d);
			e=Rec.Rectangle::Rarea();
			f=Rec.Rectangle::Rperimeter();
			cout << "area: " << e << ", perimeter: " << f << endl;
			cout << endl;
		}
		else if (s=="Q")
			break;
	}
}
