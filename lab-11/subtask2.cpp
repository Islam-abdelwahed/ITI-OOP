class Point
{
    int x;
    int y;
public:
    Point(int _x, int _y)
    {
        cout<<"Point 2 Parameters CTOR"<<endl;
        x = _x;
        y = _y;
    }
    Point(int _x)
    {
        cout<<"Point one param CTOR\n";
        x = y = _x;
    }
    Point()
    {
        cout<<"Parameterless Point CTOR\n";
        x = y = 0;
    }
    ~Point()
    {
        cout<<"Point Destructor!!\n";
    }
    void setX(int _x)
    {
        x = _x;
    }
    void setY(int _y)
    {
        y = _y;
    }
    void setPoint(int _x, int _y)
    {
        x = _x;
        y = _y;
    }
    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }

    void print()
    {
        cout<<"("<<x<<","<<y<<")\n";
    }
};

class Geo_shap
{
public:
    virtual void Print()=0;

};

class Rectangle: public Geo_shap
{
    Point ul;
    Point lr;
public:
    Rectangle(Point p){ul = lr = p;}
    Rectangle(int x1,int y1,int x2,int y2):ul(x1,y1),lr(x2,y2){}
    void Print()
    {
        cout<<"Triangle print:\n";
        ul.print();
        lr.print();
    }

};
class Triangle : public Geo_shap
{
    Point head;
    Point b1;
    Point b2;

public:

    Triangle(int x1,int y1,int x2,int y2,int x3, int y3):head(x1,y1),b1(x2,y2),b2(x3,y3){}
    void Print()
    {
        cout<<"Triangle print:\n";
        head.print();
        b1.print();
        b2.print();
    }

};
class Circle : public Geo_shap
{
    Point p;
    int  radius;

public:
    Circle(int x,int y,int r):p(x,y)
    {
        radius = r;
    }
    void Print()
    {
        cout<<"Circle print:\n";
        p.print();
        cout<<"\nRadius : "<<radius;
    }
};

void MyFun(Geo_shap* g)
{
    g->Print();
}

void task2()
{
    Geo_shap* g= new Rectangle(1,2,3,4);
    MyFun(g);
}

