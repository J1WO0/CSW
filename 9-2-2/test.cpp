#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    vector<string> vec;
    vec.push_back("asdf0");
    vec.push_back("asdf1");
    vec.push_back("asdf2");
    vec.push_back("asdf3");
    vec.push_back("asdf4");
    cout << vec[vec.size()-1] << endl;
    return 0;

}