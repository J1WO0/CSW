#include "animal.h"
#include <string>
#include <iostream>
using namespace std;
Animal::Animal(string a, int b)
{
    name=a;
    age=b;
}
void Animal::printInfo()
{
}
Zebra::Zebra(string a, int b, int c)
:Animal(a,b)
{
    numStripes=c;
}
void Zebra::printInfo()
{
    cout << "Zebra, Name: " << name << ", Age: " << age << ", Number of stripes: " << numStripes << endl;
}
Cat::Cat(string a, int b, string c)
:Animal(a,b)
{
    favoriteToy=c;
}
void Cat::printInfo()
{
    cout << "Cat, Name: " << name << ", Age: " << age << ", Favorite toy: " << favoriteToy << endl;
}