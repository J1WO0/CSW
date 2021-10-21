#include <stdio.h>
typedef struct
{
	int xpos;
	int ypos;
} Point;

Point getScale2xPoint(const Point* p)
{
	Point a;
	a.xpos=p->xpos*2;
	a.ypos=p->ypos*2;
	return a;
}
void swapPoints(Point* p1, Point* p2)
{
	Point p3;
	p3.xpos=p1->xpos;
	p3.ypos=p1->ypos;
	p1->xpos=p2->xpos;
	p1->ypos=p2->ypos;
	p2->xpos=p3.xpos;
	p2->ypos=p3.ypos;
}
int main(void)
{
	Point p1;
	Point p2;
	scanf("%d %d",&p1.xpos,&p1.ypos);
	p2=getScale2xPoint(&p1);
	printf("Calling getScale2xPoint()\nP1 : %d %d \nP2 : %d %d\n",p1.xpos,p1.ypos,p2.xpos,p2.ypos);
	printf("Calling swapPoint()\n");
	swapPoints(&p1,&p2);
	printf("P1 : %d %d\nP2 : %d %d\n",p1.xpos,p1.ypos,p2.xpos,p2.ypos);
	return 0;
}	

