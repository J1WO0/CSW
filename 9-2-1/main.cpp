#include <iostream>
#include <string>
#include "animal.h"
#include <vector>
using namespace std;
int main()
{
    string ss;
    vector <Animal*> animals;
    while (1)
    {
        cin >> ss;
        if (ss=="0")
        {
            for (int i=0;i<animals.size();i++)
                animals[i]->printInfo();
            break;
        }
        else if (ss=="z")
        {
            string na;
            int ag;
            int nn;
            cin >> na >> ag >> nn;
            animals.push_back(new Zebra(na,ag,nn));
        }
        else if (ss=="c")
        {
            string na;
            int ag;
            string ft;
            cin >> na >> ag >> ft;
            animals.push_back(new Cat(na,ag,ft));
        }
    }
    for (int i=0;i<animals.size();i++)
        delete animals[i];
    return 0;
}