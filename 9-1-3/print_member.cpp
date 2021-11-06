#include <iostream>
#include <string>
#include <vector>
using namespace std;
class A
{
    private:
    int* memberA;
    public:
    A(int arg)
    {
        memberA =new int;
        *memberA =arg;
        cout << "new memberA" << endl;
    }
    virtual ~A()
    {
        delete memberA;
        cout << "delete memberA" << endl;
    }
    virtual void print()
    {
        cout << "*memberA " << *memberA << endl;
    }
};
class B :public A
{
    private:
    double* memberB;
    public:
    B(double arg)
    :A(1)
    {
        memberB=new double;
        *memberB=arg;
        cout << "new memberB" << endl;
    }
    virtual ~B()
    {
        delete memberB;
        cout << "delete memberB" << endl;
    }
    void print()
    {
        A::print();
        cout << "*memberB " << *memberB << endl;
    }
};
class C :public B
{
    private:
    string* memberC;
    public:
    C(const string& arg)
    :B(1.1)
    {
        memberC=new string;
        *memberC=arg;
        cout << "new memberC" << endl;
    }
    virtual ~C()
    {
        delete memberC;
        cout << "delete memberC" << endl;
    }
    void print()
    {
        B::print();
        cout << "*memberC " << *memberC << endl;
    }
};
int main()
{
    int a;
    double b;
    string c;
    cin >> a >> b >> c;
    vector<A*> arr;
    arr.push_back(new A(a));
    arr.push_back(new B(b));
    arr.push_back(new C(c));
    for (int i=0;i<3;i++)
        arr[i]->print();
    for (int i=0;i<3;i++)
        delete arr[i];
    return 0;
}