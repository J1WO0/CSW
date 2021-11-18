#include "my_string.h"
using namespace std;
ostream& operator<<(ostream& out, MyString& my_string)
{
    out << my_string.str;
    return out;
}
istream& operator>>(istream& in, MyString& my_string)
{
    in >> my_string.str;
    return in;
}
MyString& MyString::operator=(const MyString& b)
{
    str=b.str;
    return *this;
}
MyString MyString::operator+(const MyString& b)
{
    MyString ss;
    ss.str=str+b.str;
    return ss;
}
MyString MyString::operator*(const int b)
{
    MyString ss;
    for (int i=0;i<b;i++)
        ss.str+=str;
    return ss;
}