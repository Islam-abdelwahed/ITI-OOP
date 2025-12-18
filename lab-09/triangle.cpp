
class Triangle
{
    Point head;
    Point b1;
    Point b2;

public:
    Triangle()
    {
     cout<<"\n Triangle Default CTOR";
    }
    Triangle(int x1,int y1, int x2, int y2, int x3, int y3):head(x1,y1),b1(x2,y2),b2(x3,y3)
    {
        cout<<"\n Triangle 6 params CTOR";
        // head.setPoint(x1,y1);
        // b1.setPoint(x2,y2);
        // b2.setPoint(x3,y3);
    }
    ~Triangle()
    {
        cout<<"\n Triangle DTOR\n";
    }
    void setHead(int x, int y)
    {
        head.setPoint(x,y);
    }
    void setB1(int x, int y)
    {
        b1.setPoint(x,y);
    }
    void setB2(int x, int y)
    {
        b2.setPoint(x,y);
    }

    void setHead(Point p)
    {
        head = p;
    }
    void setB1(Point p)
    {
        b1 = p;
    }
    void setB2(Point p)
    {
        b2 = p;
    }
    void print()
    {
        cout<<"\n Triangle points";
        head.print();
        b1.print();
        b2.print();
    }
};

class TriangleAgg
{
    Point *h, *b1, *b2;

public:
    TriangleAgg(Point *p1, Point *p2, Point *p3)
    {
        h = p1;
        b1 = p2;
        b2 = p3;
        cout<<"\n TriangleAgg CTOR";
    }

    void print()
    {
        cout<<"\n Aggregation Triangle Points:";
        h->print();
        b1->print();
        b2->print();
    }
};
