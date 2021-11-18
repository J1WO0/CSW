#include "clocks.h"
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<Clock *> arr;
    arr.push_back(new SundialClock(0,0,0));
    arr.push_back(new CuckooClock(0,0,0));
    arr.push_back(new GrandFatherClock(0,0,0));
    arr.push_back(new WristClock(0,0,0));
    arr.push_back(new AtomicClock(0,0,0));
    int a;
    for (int i=0;i<arr.size();i++)
        arr[i]->reset();
    cin >> a;
    cout << "Reported clock times after resetting:" << endl;
    for (int i=0;i<arr.size();i++)
        arr[i]->displayTime();
    cout << endl << "Running the clocks..." << endl;
    cout << endl;
    
    for (int i=0;i<a;i++)
    {
        for (int j=0;j<arr.size();j++)
            arr[j]->tick();
    }
    cout << "Reported clock times after running:" << endl;
    for (int i=0;i<arr.size();i++)
        arr[i]->displayTime();
    for (int i=0;i<arr.size();i++)
        delete arr[i];
}