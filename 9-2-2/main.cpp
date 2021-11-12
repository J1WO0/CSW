#include <iostream>
#include <vector>
#include "canvas.h"
#include <string>
using namespace std;

int main()
{
    size_t sw,sh;
    int a,b,c,d;
    char bb;
    string ss;
    string sha;
    vector<Shape *> vv;
    vector<string> dum;
    cin >> sw >> sh;
    Canvas can(sw,sh);
    can.Print();
    while(1)
    {
        cin >> ss;
        if (ss=="quit")
            return 0;
        else if (ss=="add")
        {
            cin >> sha;
            if (sha=="rect")
            {
                cin >> a >> b >> c >> d >> bb;
                vv.push_back(new Rectangle(a,b,c,d,bb));
                string inf="rect ";
                string num=to_string(a);
                inf=inf+num+" ";
                num=to_string(b);
                inf=inf+num+" ";
                num=to_string(c);
                inf=inf+num+" ";
                num=to_string(d);
                inf=inf+num+" ";
                inf=inf+bb;
                dum.push_back(inf);
                vv[vv.size()-1]->Draw(&can);
            }
            else if (sha=="diamond")
            {
                cin >> a >> b >> c >> bb;
                vv.push_back(new Diamond(a,b,c,bb));
                string inf="diamond ";
                string num=to_string(a);
                inf=inf+num+" ";
                num=to_string(b);
                inf=inf+num+" ";
                num=to_string(c);
                inf=inf+num+" ";
                inf=inf+bb;
                dum.push_back(inf);
                vv[vv.size()-1]->Draw(&can);
            }
            else if (sha=="tri_up")
            {
                cin >> a >> b >> c >> bb;
                vv.push_back(new UpTriangle(a,b,c,bb));
                string inf="tri_up ";
                string num=to_string(a);
                inf=inf+num+" ";
                num=to_string(b);
                inf=inf+num+" ";
                num=to_string(c);
                inf=inf+num+" ";
                inf=inf+bb;
                dum.push_back(inf);
                vv[vv.size()-1]->Draw(&can);
            }
            else if (sha=="tri_down")
            {
                cin >> a >> b >> c >> bb;
                vv.push_back(new DownTriangle(a,b,c,bb));
                string inf="tri_down ";
                string num=to_string(a);
                inf=inf+num+" ";
                num=to_string(b);
                inf=inf+num+" ";
                num=to_string(c);
                inf=inf+num+" ";
                inf=inf+bb;
                dum.push_back(inf);
                vv[vv.size()-1]->Draw(&can);
            }
        }
        else if (ss=="delete")
        {
            cin >> a;
            dum.erase(dum.begin()+a);
            vv.erase(vv.begin()+a);
            can.Clear();
            for (int i=0;i<vv.size();i++)
                vv[i]->Draw(&can);
        }
        else if (ss=="draw")
        {
            can.Print();
        }
        else if (ss=="dump")
        {
            for (int i=0;i<dum.size();i++)
                cout << i << " " << dum[i] << endl;
        }
        else if (ss=="resize")
        {
            cin >> a >> b;
            can.Resize(a,b);
            for (int i=0;i<vv.size();i++)
                vv[i]->Draw(&can);
        }
    }
    for (int i=0;i<vv.size();i++)
        delete vv[i];
    return 0;
}