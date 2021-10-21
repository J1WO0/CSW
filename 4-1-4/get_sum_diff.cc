#include <iostream>
using namespace std;
void getSumDiff(int a, int b, int& sum, int& diff)
{
	sum=a+b;
	diff=a-b;
}
int main()
{
	int a,b,sum,diff;
	int& rsum=sum;
	int& rdiff=diff;
	cin >> a >> b;
	getSumDiff(a,b,rsum,rdiff);
	cout << "sum:" << sum << endl << "diff:" << diff << endl;
	return 0;
}
