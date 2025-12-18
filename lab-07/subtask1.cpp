
class Complex{
    int real;
    int img;

public:
    Complex(int _real, int _img)
    {
        real=_real;
        img=_img;
        cout<<"\n CTOR";
    }

    Complex(int _real){
        real=_real;
        img=0;
        cout<<"\n CTOR";
    }
    Complex(){
        real=0;
        img=0;
        cout<<"\n CTOR";
    }

    void setReal(int _real){
        real=_real;
    }
    void setImg(int _img){
        img=_img;
    }
    int getReal()
    {
        return real;
    }
    int getImg()
    {
        return img;
    }
    void print(){
    cout<<"Real: "<<real<<"\nImg: "<<img<<endl;
    }

};

void task1()
{

        int real,img;
    cout<<"Enter real: ";
    cin>> real;
    cout<<"Enter img: ";
    cin>> img;


    Complex cm(real,img);
    cm.print();
}
