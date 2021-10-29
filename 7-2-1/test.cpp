#include <string>
#include <iostream>
using namespace std;
int main()
{
    string s="helloworld";
    cout << s << endl;
    s.erase(5,8);
    cout << s << endl;
    return 0;
}