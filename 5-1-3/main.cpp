#include <iostream>
#include "minmax.h"
using namespace std;
int atoi(const char* ss)
{
	int a=0;
	bool N=false;
	if (*ss=='-')
	{
		N=true;
		ss++;
	}
	while (*ss!='\0')
	{
		char cha =*ss;
		if (cha>='0' && cha<='9')
		{
			a=a*10+cha-'0';
			ss++;
		}
	}
	if (N)
		a=a*(-1);
	return a;
}
int main(int n, char** s)
{
	int* array=new int[n-1];
	for (int i=0;i<n-1;i++)
		array[i]=atoi(s[i+1]);
	int max;
	int min;
	getMinMax(array,n-1,min,max);
	cout << "min: " << min << endl << "max: " << max << endl;
	delete[] array;
	return 0;
}
