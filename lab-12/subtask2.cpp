
class Stack
{
    int tos;
    int size;
    int* arr;
    static int counter;
public:
    Stack(int s)
    {
        cout<<"Parameterized COTR"<<endl;
        size=s;
        counter++;
        tos=-1;
        arr=new int[size];
    };
    Stack()
    {
        cout<<"Default COTR"<<endl;
        size=5;
        counter++;
        tos=-1;
        arr= new int[5];
    };
    Stack(const Stack& s)
    {
        cout<<"Copy COTR"<<endl;
        size=s.size;
        tos=s.tos;
        counter++;
        arr= new int[size];
        for(int i=0; i<size; i++)
            arr[i]=s.arr[i];
    };
    ~Stack()
    {
        counter--;
        cout<<"DTOR"<<endl;
        delete[] arr;
    }
    static int getCounter()
    {
        return counter;
    }
    void push(int x)
    {
        if(tos<size-1)
        {
            arr[++tos]=x;
        }
        else
            cout<<"Stack is FUll"<<endl;
    }
    int pop(int& x)
    {
        if(tos>=0)
        {
            x=arr[tos--];
            return 1;
        }
        else return 0;
    }
    void popStack()
    {
        int x;
        for(int i=0; i<size; i++)
        {
            if(pop(x)) cout<<x<<endl;
            else cout<<"Stack is empty"<<endl;
        }
    }
    int getSize()
    {
        return size;
    }
    Stack& operator=(const Stack& s)
    {
        if (this!=&s)
        {
            delete[] arr;

            size=s.size;
            tos=s.tos;

            arr=new int[size];
            for (int i=0;i<size;i++)
                arr[i]=s.arr[i];
        }
        return *this;
    }
    Stack operator+(const Stack& s)
    {
        Stack result(size + s.size);


        for (int i=0;i<=tos;i++)
            result.push(arr[i]);


        for (int i=0;i<=s.tos;i++)
            result.push(s.arr[i]);

        return result;
    }
    friend ostream& operator<<(ostream& out, const Stack& s)
    {
        out<<"[ ";
        for (int i=0;i<=s.tos;i++)
        {
            out<<s.arr[i];
            if (i!=s.tos) out << ", ";
        }
        out<<" ]";
        return out;
    }
};

int Stack::counter=0;

void task2()
{

Stack a(3);
a.push(1);
a.push(2);
a.push(3);
Stack b(2);
b.push(10);
b.push(20);
cout<<Stack::getCounter()<<endl;

Stack c = a + b;
cout << c << endl;
}
