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
    virtual string test()
    {
        return "A::test()";
    }
};
class B :public A
{
    public:
    B()
    {}
    virtual ~B()
    {}
    string test()
    {
        return "B::test()";
    }
};
class C :public B
{
    public:
    C()
    {}
    virtual ~C()
    {}
    string test()
    {
        return "C::test()";
    }
};
int main()
{
    vector<A*> arr;
    arr.push_back(new A);
    arr.push_back(new B);
    arr.push_back(new C);
    for (int i=0;i<3;i++)
        cout << arr[i]->test() << endl;
    for (int i=0;i<3;i++)
        delete arr[i];
    return 0;
}