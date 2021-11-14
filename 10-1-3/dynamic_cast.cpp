#include <iostream>
#include <vector>
#include <string>
using namespace std;
class B
{
public:
 virtual ~B() {}
};
class C : public B
{
public:
 void test_C() { cout << "C::test_C()" << endl; }
};
class D : public B
{
public:
 void test_D() { cout << "D::test_D()" << endl; }
};
int main()
{
    string ss;
    vector<B *> arr;
    while (1)
    {
        cin >> ss;
        if (ss=="B")
            arr.push_back(new B);
        else if (ss=="C")
            arr.push_back(new C);
        else if (ss=="D")
            arr.push_back(new D);
        else if (ss=="0")
            break;
    }
    for (int i=0;i<arr.size();i++)
    {
        C* cc=dynamic_cast<C*>(arr[i]);
        if(cc)
            cc->test_C();
        else
        {
            D* dd=dynamic_cast<D*>(arr[i]);
            if(dd)
                dd->test_D();
            else
                continue;
        }
        
    }
    for (int i=0;i<arr.size();i++)
        delete arr[i];
    return 0;
}