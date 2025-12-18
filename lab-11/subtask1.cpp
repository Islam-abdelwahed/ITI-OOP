class Shape
{
protected:
    int dim1;
    int dim2;
    char* _name;
public:

    Shape(){
        _name = new char[20];
    }
    Shape(int x){dim1 = dim2 = x;}
    Shape(int x ,int y){dim1 = x; dim2 = y;}

    virtual void SetDim1(int x){dim1 = x;}
    virtual void SetDim2(int y){dim2 = y;}
    virtual void SetDims(int x , int y){dim1 = x; dim2 = y;}

    virtual float CalcArea()=0;
};

class Rectangle: public Shape
{
public:
    Rectangle(){_name = "Rectangle";};
    Rectangle(int x , int y){dim1 = x; dim2 = y;}

    void SetDim1(int x){dim1 = x;}
    void SetDim2(int y){dim2 = y;}
    void SetDims(int x , int y){dim1 = x; dim2 = y;}
    float CalcArea(){return dim1 * dim2;}

};
class Triangle : public Shape
{
public:
    Triangle(){_name = "Triangle";}
    Triangle(int x , int y){dim1 = x; dim2 = y;}

    void SetDim1(int x){dim1 = x;}
    void SetDim2(int y){dim2 = y;}
    void SetDims(int x , int y){dim1 = x; dim2 = y;}
    float CalcArea(){return 0.5 * dim1 * dim2;}

};
class Square : public Triangle
{
public:
    Square(){_name = "Square";}
    Square(int x , int y){dim1 = dim2 = x;}
    Square(int x){dim1 = dim2 = x;}
    void SetDim1(int x){dim1 = dim2 = x;}
    void SetDim2(int y){dim1 = dim2 = y;}
    float CalcArea(){return dim1 * dim2;}

};
class Circle : public Shape
{
public:
    Circle(){_name = "Circle";}
    Circle(int x){dim1 = dim2 = x;}

    void SetDim1(int x){dim1 = dim2 = x;}
    void SetDim2(int y){dim1 = dim2 = y;}
    float CalcArea(){return 3.14 * dim1 * dim1;}
};

float calc(Shape* s[])
{
    int a=0;
    for(int i=0;i<4;i++){
    a+=s[i]->CalcArea();
    }
    return a;
}
void task1()
{
    Shape* arr [4];
    Square s;
    s.SetDim1(5);
    arr[0]= &s;

//    ptr->SetDim1(2);
//    ptr->SetDim2(3);

    Rectangle r(5,6);
    arr[1]= &r;

    Triangle t(2,5);
    arr[2]=&t;


    Circle c(5);
    arr[3]=&c;

    cout<<"Area of Farm = "<<calc(arr)<<endl;
}

