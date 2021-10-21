#include <stdio.h>
void rotateLeft(int* pa, int* pb,int* pc)
{
	int d=*pa;
	*pa=*pb;
	*pb=*pc;
	*pc=d;
}
void rotateRight(int* pa, int* pb, int* pc)
{
	int d=*pc;
	*pc=*pb;
	*pb=*pa;
	*pa=d;
}
int main(void)
{
	int a=10;
	int b=20;
	int c=30;
	int n;
	printf("%d:%d:%d\n",a,b,c);
	while(1)
	{
		scanf("%d",&n);
		if (n==1)
		{	
			rotateLeft(&a,&b,&c);
			printf("%d:%d:%d\n",a,b,c);
		}
		else if (n==2)
		{
			rotateRight(&a,&b,&c);
			printf("%d:%d:%d\n",a,b,c);
		}
		else
			break;
	}
}	

