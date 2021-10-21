#include <iostream>
#include "sorted.h"
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
int main()
{
	string a;
	SortedArray arr;
	while (1)
	{
		cin >> a;
		if (a=="quit")
			return 0;
		else if (a=="ascend")
		{
			for (int i=0;i<(int)arr.SortedArray::GetSortedAscending().size();i++)
				cout << arr.SortedArray::GetSortedAscending()[i] << " ";
			cout << endl;
		}
		else if(a=="descend")
		{
			for (int i=0;i<(int)arr.SortedArray::GetSortedDescending().size();i++)
				cout << arr.SortedArray::GetSortedDescending()[i] << " ";
			cout << endl;
		}
		else if (a=="max")
			cout << arr.GetMax() << endl;
		else if (a=="min")
			cout << arr.GetMin() << endl;
		else
		{
			int anum;
			anum=stoi(a);
			arr.SortedArray::AddNumber(anum);
		}
	}
}

