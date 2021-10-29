#include <iostream>
#include "setfunc.h"
#include <set>
#include <string>
using namespace std;
set<int> parseSet(const string& str)
{
    set<int> s;
    int a;
    int b;
    int s1;
    string num;
    for (int i=1; i<str.length()-1;i++)
    {
        if (str[i]==' ')
        {
            for (int j=i+1;j<str.length();j++)
            {
                if (str[j]==' ')
                {
                    b=j;
                    break;
                }          
            }
            a=i+1;
            for (int k=a; k<b; k++)
                num=num+str[k];
            s1=stoi(num);
            s.insert(s1);
            num.clear();
        }

    }
    return s;
}
void printSet(const set<int>& set0)
{
    for (set<int>::iterator it=set0.begin(); it!=set0.end(); it++)
        cout << *it << " "; 
    cout << endl;
}
set<int> getIntersection (const set<int>& set0, const set<int>& set1)
{
    set<int> rset;
    for (set<int>::iterator it=set0.begin(); it!=set0.end(); it++)
    {
        for (set<int>::iterator iit=set1.begin(); iit!=set1.end(); iit++)
        {
            if (*it==*iit)
                rset.insert(*it);
        }
    }
    return rset;
}
set<int> getUnion(const set<int>& set0, const set<int>& set1)
{
    set<int> rset;
    for (set<int>::iterator it=set0.begin(); it!=set0.end(); it++)
        rset.insert(*it);
    for (set<int>::iterator it=set1.begin(); it!=set1.end(); it++)
        rset.insert(*it);
    return rset;
}
set<int> getDifference (const set<int>& set0, const set<int>& set1)
{
    set<int> rset;
    for (set<int>::iterator it=set0.begin(); it!=set0.end(); it++)
        rset.insert(*it);
    for (set<int>::iterator it=rset.begin(); it!=rset.end(); it++)
    {
        for (set<int>::iterator iit=set1.begin(); iit!=set1.end(); iit++)
            rset.erase(*iit);
    }
    return rset;
}