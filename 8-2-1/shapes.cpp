#include "shapes.h"
#include <iostream>
#include <string>

using namespace std;

Square::Square(int x_,int y_,int len_,string ss,int cch,int ccw):
    Shape(x_,y_,ss,cch,ccw)
{
    len=len_;
}
int Square::GetArea()
{
    return len*len;
}
int Square::GetPerimeter()
{
    return len*4;
}
void Square::Draw()
{
    cout << " ";
    for (int i=0; i<canw; i++)
        cout << i;
    cout << endl;
    for (int i=0; i<canh; i++)
    {
        cout << i;
        if(i>=ypos && i<ypos+len)
        {
            int k=0;
            for (k=0; k<xpos; k++)
                cout << ".";
            int ll=k+len;
            if (ll>canw)
                ll=canw;
            for (k=k; k<ll; k++)
                cout << bru;
            for (k=k; k<canw; k++)
                cout << ".";
        }
        else
        {
            for (int k=0;k<canw; k++)
                cout << ".";
        }
        cout << endl;
    }
}
Rectangle::Rectangle(int x_,int y_,int wid_,int hei_,string ss,int cch,int ccw):
    Shape(x_,y_,ss,cch,ccw)
{
    wid=wid_;
    hei=hei_;
}
int Rectangle::GetArea()
{
    return wid*hei;
}
int Rectangle::GetPerimeter()
{
    return 2*(wid+hei);
}
void Rectangle::Draw()
{
    cout << " ";
    for (int i=0; i<canw; i++)
        cout << i;
    cout << endl;
    for (int i=0; i<canh; i++)
    {
        cout << i;
        if(i>=ypos && i<ypos+hei)
        {
            int k=0;
            for (k=0; k<xpos; k++)
                cout << ".";
            int ll=k+wid;
            if (ll>canw)
                ll=canw;
            for (k=k; k<ll; k++)
                cout << bru;
            for (k=k; k<canw; k++)
                cout << ".";
        }
        else
        {
            for (int k=0;k<canw; k++)
                cout << ".";
        }
        cout << endl;
    }
}
Diamond::Diamond(int x_,int y_,int dis_,string ss,int cch,int ccw):
    Shape(x_,y_,ss,cch,ccw)
{
    dis=dis_;
}
double Diamond::GetArea()
{
    return (double)(dis+dis+1)*(dis+dis+1)/2;
}
int Diamond::GetPerimeter()
{
    return 4*(dis+1);
}
void Diamond::Draw()
{
    cout << " ";
    for (int i=0; i<canw; i++)
        cout << i;
    cout << endl;
    int num=0;
    int ch=50;
    for (int i=0; i<canh; i++)
    {
        cout << i;
        if(i>=ypos && i<ypos+dis+dis+1)
        {
            if(num!=dis+1 && ch==50)
            {
                int LL=xpos-num;
                int ll=xpos+num;
                if (ll>canw-1)
                    ll=canw-1;
                int k=0;
                for (k=0; k<LL; k++)
                    cout << ".";
                for (k=k; k<=ll; k++)
                    cout << bru;
                for (k=k; k<canw; k++)
                    cout << ".";
                num=num+1;
            }
            else if (num!=-1 && ch==100)
            {
                int LL=xpos-num;
                int ll=xpos+num;
                if (ll>canw-1)
                    ll=canw-1;
                int k=0;
                for (k=0; k<LL; k++)
                    cout << ".";
                for (k=k; k<=ll; k++)
                    cout << bru;
                for (k=k; k<canw;k++)
                    cout << ".";
                num=num-1;
            }
            if (num==dis+1)
            {  
                ch=100;
                num=num-2;
            }
            
        }
        else
        {
            for (int k=0;k<canw; k++)
                cout << ".";
        }
        cout << endl;
    }
}