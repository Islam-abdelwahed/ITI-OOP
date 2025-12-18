
class H
{
protected:
    int a;
};

class K
{
protected:
    int l;
};

class M: public H, public K
{
    public:
    void setL()
    {
        l=5;
    }
    void setA()
    {
        a=5;
    }
    void print()
    {
        cout << "\na = " << a << ", l = " << l << endl;
    }
};

void task5()
{
    M obj;

    obj.setA();
    obj.setL();

    obj.print();
}
