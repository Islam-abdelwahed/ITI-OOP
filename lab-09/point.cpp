
class Point
{
    int x;
    int y;
public:
    Point()
    {
        cout<<"\n Default CTOR";
        x=0;
        y=0;
    }
    Point(int _x, int _y)
    {
        cout<<"\n Two parameter CTOR";
        x=_x;
        y=_y;
    } Point(int _x)
    {
        cout<<"\n One parameter CTOR";
        x=y=_x;
    }
    ~Point()
    {
        cout<<"Point DTOR\n";
    }
    void setX(int _x)
    {
        x=_x;
    }
    void  setY(int _y)
    {
        y=_y;
    }
    void setPoint(int _x,int _y)
    {
        x=_x;
        y=_y;
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
        cout<<"\n{"<<x<<" "<<y<<"}\n";
    }
};

