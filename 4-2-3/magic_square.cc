#include <iostream>
using namespace std;
void magicSquare(int* arr[],int N)
{
        arr[0][N/2]=1;
        int m=0;
        int n=N/2;
        for (int i=2; i<(N*N)+1; i++)
        {
                int rm=m;
		int rn=n;
                m=m-1;
                n=n+1;
                if (m<0)
                        m=N-1;
                if (n>N-1)
                        n=0;
                if (arr[m][n]>0)
		{     
		       	m=rm+1;
			n=rn;
		}	
                arr[m][n]=i;
        }
}
int main()
{
	int N;
	cin >> N;
	if (N%2==0 || N<3)
		return 0;
	int** array = new int*[N];
	for (int i=0;i<N;i++)
		array[i] = new int[N];
	for (int i=0;i<N;i++)
	{
		for (int k=0; k<N;k++)
			array[i][k]=0;
	}
	magicSquare(array,N);
	for (int i=0;i<N;i++)
	{
		for (int k=0;k<N;k++)
			cout << array[i][k] << " ";
		cout << endl;
	}
	for (int i=0;i<N;i++)
		delete[] array[i];
	delete[] array;
	return 0;
}
		

