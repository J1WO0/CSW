#include <iostream>
#include <string>
using namespace std;
typedef struct
{	
	string name;
	int age;
}Person;
int main()
{
	int N;
	cin >> N;
	Person* array=new Person[N];
	for (int i=0; i<N; i++)
		cin >> array[i].name >> array[i].age;
	for (int i=0; i<N; i++)
		cout << "Name:" << array[i].name << "," << " Age:" << array[i].age << endl;
	delete[] array;
	return 0;
}
