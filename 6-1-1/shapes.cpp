#include "shapes.h"
void Circle::val(int x,int y,int r)
{
	x_=x;
	y_=y;
	r_=r;
	area=r*r*3.14;
	per=2*3.14*r;
}
double Circle::Carea()
{
	return area;
}
double Circle::Cperimeter()
{
	return per;
}
void Rectangle::Rval(int x1,int y1,int x2,int y2)
{
	x1_=x1;
	y1_=y1;
	x2_=x2;
	y2_=y2;
	area=(x2-x1)*(y1-y2);
	per=((x2-x1)+(y1-y2))*2;
}
int Rectangle::Rarea()
{
	return area;
}
int Rectangle::Rperimeter()
{
	return per;
}
