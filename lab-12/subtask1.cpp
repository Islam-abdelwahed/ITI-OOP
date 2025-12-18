
class Fraction
{
    int num;
    int den;
    int gcd(int a, int b)
    {
        return (b==0)? a : gcd(b,a%b);
    }
    int lcm(int a, int b)
    {
        return (a*b)/gcd(a,b);
    }
public:
    int getNum()
    {
        return num;
    }
    int getDen()
    {
        return den;
    }
    Fraction()
    {
        num=0;
        den=1;
    }
    Fraction(int _num)
    {
        num=_num;
        den=1;
    }
    Fraction(int _num, int _den)
    {
        num=_num;
        den=_den;
    }
    ~Fraction() {}
    void print()
    {
        cout<<"\t "<<num<<"\n\t---\n\t "<<den;
    }
    Fraction& simpl()
    {
        int g= gcd(num,den);
        num/=g;
        den/=g;
        if (den < 0)
        {
            den = -den;
            num = -num;
        }
        return *this;
    }

    Fraction& operator+ (Fraction& f)
    {
        int com = lcm(den,f.den);
        num = num * (com/den);
        f.num = f.num * (com/f.den);

        num+=f.num;
        den=com;

        this->simpl();

        return *this;
    }
    Fraction& operator+(int x)
    {
        num = num + x * den;
        return this->simpl();
    }
    friend Fraction operator+(int x, Fraction& f)
    {
        f+3;
        return f.simpl();
    }
    bool operator==(Fraction f)
    {
        this->simpl();
        f.simpl();
        return (num == f.num && den == f.den);
    }
    bool operator!=(Fraction f)
    {
        return !(*this == f);
    }
    bool operator<(Fraction f)
    {
        return (num * f.den) < (f.num * den);
    }
    bool operator>(Fraction f)
    {
        return (num * f.den) > (f.num * den);
    }
    Fraction operator++(int)
    {
        Fraction temp = *this;
        num += den;
        this->simpl();
        return temp;
    }
    Fraction& operator++()
    {
        num += den;
        return this->simpl();
    }
    operator float()
    {
        return (float)num / den;
    }
};



void task1()
{

    Fraction f1(1,4),f2(1,3);

    cout << "f1\n";
    f1.print();
    cout << "\n";

    cout << "f2\n";
    f2.print();
    cout << "\n\n";

    // Fraction + Fraction
    f1 + f2;
    cout << "f1 + f2\n";
    f1.print();
    cout << "\n";

    // Fraction + int
    f1 + 2;
    cout << "f1 + 2\n";
    f1.print();
    cout << "\n";

    // int + Fraction
    3 + f2;
    cout << "3 + f2\n";
    f2.print();
    cout << "\n\n";

    // Comparisons
    cout<<"f1 == f2 ? "<<(f1==f2? "true":"false")<<"\n";
    cout<<"f1 != f2 ? "<<(f1!=f2? "true":"false")<<"\n";
    cout<<"f1 < f2 ?  "<<(f1<f2? "true":"false")<<"\n";
    cout<<"f1 > f2 ?  "<<(f1>f2? "true":"false")<<"\n\n";

    // Prefix
    cout << "++f1=\n";
    (++f1).print();
    cout << "\n\n";

    // Postfix
    cout << "F2++=\n";
    f2++;
    f2.print();
    cout << "\n\n";

    // Float cast
    cout << "ff=";
    f1.print();
    cout << "\x1b[1A\x1b[6C = "<<float(f1)<<"\n\n\n\n";

};
