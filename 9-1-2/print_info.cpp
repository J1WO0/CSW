#include <iostream>
#include <string>
#include <vector>
using namespace std;
class A
{
    public:
    A()
    {}
    virtual ~A()
    {}
    virtual string getTypeInfo()
    {
        return "This is an instance of class A.";
    }
};
class B :public A
{
    public:
    B()
    {}
    virtual ~B()
    {}
    string getTypeInfo()
    {
        return "This is an instance of class B.";
    }
};
class C :public B
{
    public:
    C()
    {}
    virtual ~C()
    {}
    string getTypeInfo()
    {
        return "This is an instance of class C.";
    }
};
void printObjectTypeInfo1(A* object)
{
    cout << object->getTypeInfo() << endl;
};
void printObjectTypeInfo2(A& object)
{
    cout << object.getTypeInfo() << endl;
};
int main()
{
    vector<A*> arr;
    arr.push_back(new A);
    arr.push_back(new B);
    arr.push_back(new C);
    for (int i=0;i<3;i++)
    {
        printObjectTypeInfo1(arr[i]);
        printObjectTypeInfo2(*arr[i]);
    }
    for (int i=0;i<3;i++)
        delete arr[i];
    return 0;
}