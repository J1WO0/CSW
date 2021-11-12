#include <iostream>
#include <vector>
#include "canvas.h"
using namespace std;
Canvas::Canvas(size_t row, size_t col)
{
    wid=row;
    hei=col;
    vec.resize(hei+1,vector<char>(wid+1,'.'));
    char k='0';
    for(int i=1;i<wid+1;i++)
    {
        if(i==11)
            k='0';
        vec[0][i]=k;
        k=k+1;
    }
    k='0';
    for(int i=1;i<hei+1;i++)
    {
        if(i==11)
            k='0';
        vec[i][0]=k;
        k=k+1;
    }
    vec[0][0]=' ';
}
Canvas::~Canvas()
{
}
void Canvas::Resize(size_t w, size_t h)
{
    wid=w;
    hei=h;
    vec.resize(hei+1,vector<char>(wid+1,'.'));
    for(int i=0;i<hei+1;i++)
    {
        for(int k=0;k<wid+1;k++)
            vec[i][k]='.';
    }
    char k='0';
    for(int i=1;i<wid+1;i++)
    {
        if(i==11)
            k='0';
        vec[0][i]=k;
        k=k+1;
    }
    k='0';
    for(int i=1;i<hei+1;i++)
    {
        if(i==11)
            k='0';
        vec[i][0]=k;
        k=k+1;
    }
    vec[0][0]=' ';
}
bool Canvas::DrawPixel(int x, int y, char brush)
{
    if(x>wid-1 || y>hei-1)
        return false;
    vec[y+1][x+1]=brush;
    return true;
}
void Canvas::Print()
{
    for(int i=0;i<hei+1;i++)
    {
        for(int k=0; k<wid+1;k++)
            cout << vec[i][k];
        cout << endl;
    }
}
void Canvas::Clear()
{
    for(int i=1;i<hei+1;i++)
    {
        for (int k=1;k<hei+1;k++)
            vec[i][k]='.';
    }
}
Rectangle::Rectangle(int x, int y, int w, int h, char b)
:Shape(x,y,b)
{
    rwid=w;
    rhei=h;
}
void Rectangle::Draw(Canvas* cc)
{
    for(int i=0;i<rhei;i++)
    {
        for(int k=0;k<rwid;k++)
            cc->DrawPixel(xpos+k,ypos+i,bru);
    }
}
UpTriangle::UpTriangle(int x, int y, int d, char b)
:Shape(x,y,b)
{
    udis=d;
}
void UpTriangle::Draw(Canvas* cc)
{
    for(int i=0;i<udis;i++)
    {
        for(int k=0;k<i+1;k++)
        {    
            cc->DrawPixel(xpos-k,ypos+i,bru);
            cc->DrawPixel(xpos+k,ypos+i,bru);
        }
    }
}
DownTriangle::DownTriangle(int x, int y, int d, char b)
:Shape(x,y,b)
{
    odis=d;
}
void DownTriangle::Draw(Canvas* cc)
{
    for(int i=0;i<odis;i++)
    {
        for(int k=0;k<i+1;k++)
        {
            cc->DrawPixel(xpos-k,ypos-i,bru);
            cc->DrawPixel(xpos+k,ypos-i,bru);
        }
    }
}
Diamond::Diamond(int x, int y, int d, char b)
:Shape(x,y,b)
{
    ddis=d;
}
void Diamond::Draw(Canvas* cc)
{
    for(int i=0;i<ddis+1;i++)
    {
        for (int k=0;k<=i;k++)
        {    
            cc->DrawPixel(xpos-k,ypos+i,bru);
            cc->DrawPixel(xpos+k,ypos+i,bru);
        }   
    }
    for(int i=1;i<ddis+1;i++)
    {
        for (int k=ddis-i;k>=0;k--)
        {
            cc->DrawPixel(xpos-k,ypos+i+ddis,bru);
            cc->DrawPixel(xpos+k,ypos+i+ddis,bru);
        }
    }
}