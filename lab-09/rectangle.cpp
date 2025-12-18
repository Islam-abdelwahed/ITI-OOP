
class Rectangle
{
    Point ul;
    Point lr;

public:
    Rectangle()
    {
        cout<<"\n Rectangle default CTOR";
    }
    Rectangle(int x1,int y1, int x2, int y2):ul(x1,y1),lr(x2,y2)
    {
        // ul.setPoint(x1,y1);
        // lr.setPoint(x2,y2);
    }
    ~Rectangle()
    {
        cout<<"\n Rectangle DTOR\n";
    }
    void setUL(int x, int y)
    {
        ul.setPoint(x,y);
    }
    void setLR(int x, int y)
    {
        lr.setPoint(x,y);
    }
    void setUL(Point _ul)
    {
        ul=_ul;
    }
    void setLR(Point _lr)
    {
        lr=_lr;
    }
    void print()
    {
        cout<<"\n Rectangle points";
        ul.print();
        lr.print();
    }
};

class RectangleAgg
{
    Point *ul;
    Point *lr;

public:
    RectangleAgg(Point *p1, Point *p2)
    {
        ul = p1;
        lr = p2;
        cout<<"\n RectangleAgg CTOR";
    }

    void print()
    {
        cout<<"\n Aggregation Rectangle Points:";
        ul->print();
        lr->print();
    }
};
