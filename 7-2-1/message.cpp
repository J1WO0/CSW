#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include "message.h"
using namespace std;
MessageBook::MessageBook()
{
}
MessageBook::~MessageBook()
{}
void MessageBook::AddMessage(int number, const string& message)
{
    messages_[number]=message;
}
void MessageBook::DeleteMessage(int number)
{
    messages_.erase(number);
}
std::vector<int> MessageBook::GetNumbers()
{
    vector<int> v;
    for (map<int,string>::iterator it=messages_.begin(); it !=messages_.end();it++)
        v.push_back(it->first);
    sort(v.begin(),v.end());
    return v;
}
const std::string& MessageBook::GetMessage(int number)
{
    map<int,string>::iterator it;
    it=messages_.find(number);
    if (it==messages_.end())
    {
        string ss="";
        string& rs=ss;
        return rs;
    }
    string& ss=it->second;
    return ss;
}