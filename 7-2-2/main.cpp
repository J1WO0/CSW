#include <iostream>
#include "setfunc.h"
#include <set>
#include <string>
using namespace std;
int main()
{
    string ss;
    while (1)
    {
        string s1;
        string s2;
        string s3;
        int a;
        getline(cin,ss);
        if (ss=="0")
            return 0;
        else
        {
            for (int i=0; ss[i]!='}'; i++)
            {
                s1=s1+ss[i];
                a=i;
            }
            while (1)
            {
                if (ss[a]=='+' || ss[a]=='*' || ss[a]=='-')
                {
                    s2=s2+ss[a];
                    break;
                }
                a=a+1;
            }
            for (int i=a+2; ss[i]!='}'; i++)
            {
                s3=s3+ss[i];
            }
            if (s2=="+")
            {  
                string& ss1=s1;
                string& ss3=s3;
                set<int> ss=getUnion(parseSet(ss1), parseSet(ss3));
                cout << "{ ";
                for (set<int>::iterator it=ss.begin(); it!=ss.end();it++)
                    cout << *it << " ";
                cout << "}" << endl;
            }
            else if (s2=="-")
            {    
                string& ss1=s1;
                string& ss3=s3;
                set<int> ss=getDifference(parseSet(ss1), parseSet(ss3));
                cout << "{ ";
                for (set<int>::iterator it=ss.begin(); it!=ss.end();it++)
                    cout << *it << " ";
                cout << "}" << endl;
            }
            else if (s2=="*")
            {    
                string& ss1=s1;
                string& ss3=s3;
                set<int> ss=getIntersection(parseSet(ss1), parseSet(ss3));
                cout << "{ ";
                for (set<int>::iterator it=ss.begin(); it!=ss.end();it++)
                    cout << *it << " ";
                cout << "}" << endl;
            }
        }
    }
}