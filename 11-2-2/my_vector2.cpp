#include "my_vector2.h"
using namespace std;
MyVector2::MyVector2(int length)
{
    this->length=length;
    a=new double[length];
}
MyVector2::MyVector2()
{
    length=length;
    a=NULL;
}
MyVector2::~MyVector2()
{
    delete[] a;
}
MyVector2::MyVector2(const MyVector2& mv)
{
    this->length=mv.length;
    a=new double[length];
    for (int i=0;i<length;i++)
    {
        a[i]=mv.a[i];
    }
}
ostream& operator<< (ostream& out, MyVector2& b)
{
    for (int i=0;i<b.length;i++)
        out << b.a[i] << " ";
    return out;
}
istream& operator>> (istream& in, MyVector2& b)
{
    for (int i=0;i<b.length;i++)
        in >> b.a[i];
    return in;
}
MyVector2 MyVector2::operator+(const MyVector2& b)
{
    MyVector2 vv(length);
    for (int i=0;i<length;i++)
        vv.a[i]=b.a[i]+a[i];
    return vv;
}
MyVector2 MyVector2::operator-(const MyVector2& b)
{
    MyVector2 vv(length);
    for (int i=0;i<length;i++)
        vv.a[i]=a[i]-b.a[i];
    return vv;
}
MyVector2 MyVector2::operator+(const int b)
{
    MyVector2 vv(length);
    for (int i=0;i<length;i++)
        vv.a[i]=a[i]+b;
    return vv;
}
MyVector2 MyVector2::operator-(const int b)
{
    MyVector2 vv(length);
    for (int i=0;i<length;i++)
        vv.a[i]=a[i]-b;
    return vv;
}   