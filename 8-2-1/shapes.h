#include <string>
#include <iostream>
using namespace std;

class Shape {
public:
Shape()
{
};
Shape(int x_, int y_,string ss,int cch,int ccw)
{
   canh=cch;
   canw=ccw; 
   bru=ss;
   xpos=x_;
   ypos=y_;
};
double GetArea() {
    return 0;
};
int GetPerimeter() {
    return 0;
};
void Draw(int canvas_width, int canvas_height) {
    for (int i=0; i<canvas_width; i++)
    {
        for (int k=0; k<canvas_height; k++)
            cout << ".";
        cout << endl;
    }
};
protected:
int canh;
int canw;
string bru;
int xpos;
int ypos;

};

class Square: public Shape
{
    private:
    int len;
    public:
    Square(int x_,int y_,int len_,string ss,int cch,int ccw);
    int GetArea();
    int GetPerimeter();
    void Draw();
};

class Rectangle: public Shape
{
    private:
    int wid;
    int hei;
    public:
    Rectangle(int x_,int y_,int wid_,int hei_,string ss,int cch,int ccw);
    int GetArea();
    int GetPerimeter();
    void Draw();
};

class Diamond: public Shape
{
    private:
    int dis;
    public:
    Diamond(int x_,int y_,int dis_,string ss,int cch,int ccw);
    double GetArea();
    int GetPerimeter();
    void Draw();
};
