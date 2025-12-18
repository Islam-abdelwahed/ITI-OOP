template <class t2>
class Stack
{
    int tos;
    int size;
    t2* arr;

public:
    Stack(int s)
    {
        cout<<"Parameterized COTR"<<endl;
        size=s;
        tos=-1;
        arr=new t2[size];
    };
    Stack()
    {
        cout<<"Default COTR"<<endl;
        size=5;
        tos=-1;
        arr= new t2[5];
    };
    Stack(Stack& s)
    {
        cout<<"Copy COTR"<<endl;
        size=s.size;
        tos=s.tos;
        arr= new t2[size];
        for(int i=0; i<size; i++)
            arr[i]=s.arr[i];
    };
    ~Stack()
    {
        cout<<"DTOR"<<endl;
        delete[] arr;
    }
    void push(t2 x)
    {
        if(tos<size-1)
        {
            arr[++tos]=x;
        }
        else
            cout<<"Stack is FUll"<<endl;
    }
    int pop(t2& x)
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
};

void task1()
{
    int si;
    cout<<"Enter Stack size: ";
    cin>>si;


    Stack<float> s(si);
    for(int i=0; i<(si+1); i++)
        s.push(i+1);

    float x;
    for(int i=0; i<si+1; i++)
    {
        if(s.pop(x)) cout<<x<<endl;
        else cout<<"Stack is empty"<<endl;
    }
}
