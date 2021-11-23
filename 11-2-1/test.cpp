#include <iostream>
using namespace std;
class A
{
    public:
    A() {};
    A(int a)
    {
        this->a=a;
    };
    void print()
    {
        cout << a << endl;
    };
    private:
    int a;
};
int main()
{
    A aa;
    aa=A(10);
    aa.print();
    double *a;
    a=new double(10);
    cout << sizeof(*a) << endl;
    for (int i=0;i<10;i++)
        a[i]=1.1*i;
    for (int i=0;i<10;i++)
        cout << a[i] << endl;
    return 0;
}