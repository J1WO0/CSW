#ifndef __canvas__
#define __canvas__
using namespace std;
class Canvas {
public:
Canvas(size_t row, size_t col);
virtual ~Canvas();
 
void Resize(size_t w, size_t h);
 
bool DrawPixel(int x, int y, char brush);

void Print();

void Clear();
private:
size_t wid;
size_t hei;
vector<vector<char>> vec;
};
class Shape  {
public:
Shape(int x, int y, char b)
{
    xpos=x;
    ypos=y;
    bru=b;
}
virtual ~Shape() {};
virtual void Draw(Canvas* canvas) {};
protected:
char bru;
int xpos;
int ypos;
};
class Rectangle : public Shape
{
public:
Rectangle(int x, int y, int w, int h, char b);
virtual ~Rectangle() {};
void Draw(Canvas* cc);
private:
int rwid;
int rhei;
};
class UpTriangle : public Shape
{
public:
UpTriangle(int x, int y, int d, char b);
virtual ~UpTriangle() {};
void Draw(Canvas* cc);
private:
int udis;
};
class DownTriangle : public Shape
{
public:
DownTriangle(int x, int y, int d, char b);
virtual ~DownTriangle() {};
void Draw(Canvas* cc);
private:
int odis;
};
class Diamond : public Shape
{
public:
Diamond(int x, int y, int d, char b);
virtual ~Diamond() {};
void Draw(Canvas* cc);
private:
int ddis;
};

#endif