#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include "message.h"
using namespace std;
int main()
{
    MessageBook M;
    string S;
    while (1)
    {
        cin >> S;
        if (S=="add")
        {
            cin.ignore();
            int num;
            string m;
            string mes;
            getline(cin, m);
            for (int i=0;i<m.length();i++)
            {
                if(m[i]==' ')
                {
                    for (int k=i+1; k<m.length();k++)
                        mes=mes+m[k];
                    m.erase(i,m.length()-2);
                    break;
                }
            }
            num=stoi(m);
            string& rm=mes;
            M.MessageBook::AddMessage(num,rm);
        }
        else if (S=="delete")
        {
            int num;
            cin >> num;
            M.MessageBook::DeleteMessage(num);
        }
        else if (S=="print")
        {
            int num;
            cin >> num;
            cout << M.MessageBook::GetMessage(num) << endl;
        }
        else if (S=="list")
        {
            for (int i=0;i<M.MessageBook::GetNumbers().size();i++)   
                cout << M.MessageBook::GetNumbers()[i] << ": " << M.MessageBook::GetMessage( M.MessageBook::GetNumbers()[i]) << endl;
        }
        else if (S=="quit")
            return 0;
    }
}