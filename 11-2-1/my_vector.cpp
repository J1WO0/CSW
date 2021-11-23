#include "my_vector.h"
using namespace std;
MyVector::MyVector(int length): length(length), a(new double[length]) {}
MyVector::MyVector()
{}
MyVector::~MyVector()
{
    delete[] a;
}
ostream& operator<< (ostream& out, MyVector& b)
{
    for (int i=0;i<b.length;i++)
        out << b.a[i] << " ";
    return out;
}
istream& operator>> (istream& in, MyVector& b)
{
    for (int i=0;i<b.length;i++)
        in >> b.a[i];
    return in;
}
MyVector& MyVector::operator=(const MyVector& b)
{
    delete[] a;
    length=b.length;
    a=new double[length];
    for (int i=0;i<length;i++)
        a[i]=b.a[i];
    return *this;
}
MyVector MyVector::operator+(const MyVector& b)
{
    MyVector vv(length);
    for (int i=0;i<length;i++)
        vv.a[i]=b.a[i]+a[i];
    return vv;
}
MyVector MyVector::operator-(const MyVector& b)
{
    MyVector vv(length);
    for (int i=0;i<10;i++)
        vv.a[i]=a[i]-b.a[i];
    return vv;
}
MyVector MyVector::operator+(const int b)
{
    MyVector vv(length);
    for (int i=0;i<length;i++)
        vv.a[i]=a[i]+b;
    return vv;
}
MyVector MyVector::operator-(const int b)
{
    MyVector vv(length);
    for (int i=0;i<length;i++)
        vv.a[i]=a[i]-b;
    return vv;
}   