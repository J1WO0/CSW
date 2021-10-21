#include <iostream>
#include <string>
using namespace std;
struct Person
{
        string name;
        double score;
};
int main(int n,char** s)
{
        Person* array=new Person[n/2];
        for (int i=0;i<n/2;i++)
        {
                array[i].name=s[2*i+1];
                array[i].score=atof(s[2*i+2]);
        }
        for (int i=0;i<n/2;i++)
                cout << "Name:" << array[i].name << ", Score:" << array[i].score << endl;
	delete[] array;
       	return 0;
}
