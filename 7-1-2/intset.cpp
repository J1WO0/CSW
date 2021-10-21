#include <iostream>
#include "intset.h"
#include <vector>
#include <algorithm>
using namespace std;

IntegerSet::IntegerSet()
{
}

IntegerSet::~IntegerSet()
{
}

void IntegerSet::AddNumber(int num)
{
	numbers_.push_back(num);
	sort(numbers_.begin(),numbers_.end());
}

void IntegerSet::DeleteNumber(int num)
{
	for (int i=0;i<(int)numbers_.size();i++)
	{
		if (numbers_[i]==num)
			numbers_.erase(numbers_.begin()+i,numbers_.begin()+i+1);
	}
}

int IntegerSet::GetItem(int pos)
{
	if(pos<numbers_.size())
		return numbers_[pos];
	else
		return -1;
}

std::vector<int> IntegerSet::GetAll()
{
	return numbers_;
}
