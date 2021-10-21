#include <iostream>
using namespace std;
void func(int n,int* arr)
{
	for (int i=n-1;i>0;i--)
	{
		for (int k=0;k<i;k++)
		{
			if (arr[k]>arr[k+1])
			{
				int c=arr[k];
				arr[k]=arr[k+1];
				arr[k+1]=c;
			}
		}
	}
}
int main()
{
	int N;
	cin >> N;
	if (N<=0)
		return 0;
	int* array= new int[N];
	for (int i=0;i<N;i++)
		cin >> array[i];
	func(N,array);
	for (int i=0;i<N;i++)
		cout << array[i] << " " ;
	cout << endl;
	delete[] array;
	return 0;
}
	
