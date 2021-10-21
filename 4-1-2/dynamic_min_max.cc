#include <iostream>
using namespace std;
int main()
{
	int N,min,max;
	cin >> N;
	int* array=new int[N];
	for (int i=0; i<N; i++)
	{
		int ele;
		cin >> ele;
		array[i]=ele;
	}
	min=array[0];
	max=array[0];
	for (int i=0; i<N; i++)
	{
		if (min>array[i])
			min=array[i];
		else if (max<array[i])
			max=array[i];
	}
	cout << "min: " << min << endl << "max: " << max << endl;
	delete[] array;
	return 0;
}



