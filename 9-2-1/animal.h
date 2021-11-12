#ifndef animal__
#define animal__
#include <string>
using namespace std;
class Animal
{
    protected:
    string name;
    int age;
    public:
    Animal(string a, int b);
    virtual void printInfo();
};
class Zebra :public Animal
{
    protected:
    int numStripes;
    public:
    Zebra(string a, int b, int c);
    void printInfo();
};
class Cat :public Animal
{
    protected:
    string favoriteToy;
    public:
    Cat(string a, int b, string c);
    void printInfo();
};
#endif