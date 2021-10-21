#include <iostream>
#include <vector>
#include "intset.h"
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	IntegerSet IS;
	string s;
	int a;
	while (1)
	{
		cin >> s;
		if (s=="quit")
			break;
		else if (s=="add")
		{
			cin >> a;
			int c=0;
			for (int i=0; i< (int)IS.IntegerSet::GetAll().size();i++)
			{
				if((int)IS.IntegerSet::GetAll()[i]==a)
					c=1;
			}
			if (c==0)	
				IS.IntegerSet::AddNumber(a);
			for (int i=0; i<(int)IS.IntegerSet::GetAll().size();i++)
				cout << IS.IntegerSet::GetAll()[i] << " ";
			cout << endl;
			c=0;
		}
		else if (s=="del")
		{
			cin >> a;
			if (find(IS.IntegerSet::GetAll().begin(), IS.IntegerSet::GetAll().end(), a) != IS.IntegerSet::GetAll().end())
				IS.IntegerSet::DeleteNumber(a);
			for (int i=0; i<(int)IS.IntegerSet::GetAll().size();i++)
                                cout << IS.IntegerSet::GetAll()[i] << " ";
                        cout << endl;
		}
		else if (s=="get")
		{
			cin >> a;
			cout << IS.IntegerSet::GetItem(a) << endl;	
		}
	}
	return 0;
}
