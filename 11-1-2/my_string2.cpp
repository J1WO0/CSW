#include "my_string2.h"
using namespace std;
MyString2::MyString2(string ss)
{
    str=ss;
}
MyString2::MyString2(const MyString2& SS)
{
    str=SS.str;
}
ostream& operator<<(ostream& out, MyString2& my_string)
{
    out << my_string.str;
    return out;
}
istream& operator>>(istream& in, MyString2& my_string)
{
    in >> my_string.str;
    return in;
}

MyString2 MyString2::operator+(const MyString2& b)
{
    MyString2 ss;
    ss.str=str+b.str;
    return ss;
}
MyString2 MyString2::operator*(const int b)
{
    MyString2 ss;
    for (int i=0;i<b;i++)
        ss.str+=str;
    return ss;
}