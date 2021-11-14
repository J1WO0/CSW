class Shape
{
    public:
    Shape(double w, double h);
    virtual ~Shape(){};
    virtual double getArea() =0;
    protected:
    double wid;
    double hei;
};
class Triangle :public Shape
{
    public:
    Triangle(double w,double h);
    virtual ~Triangle() {};
    double getArea();
};
class Rectangle :public Shape
{
    public:
    Rectangle(double w,double h);
    virtual ~Rectangle() {};
    double getArea();
};