

class Stack
{
    int tos;
    int size;
    int* arr;

public:
    Stack(int s)
    {
        cout<<"Parameterized COTR"<<endl;
        size=s;
        tos=-1;
        arr=new int[size];
    };
    Stack()
    {
           cout<<"Default COTR"<<endl;
        size=5;
        tos=-1;
        arr= new int[5];
    };
    Stack(Stack& s)
    {
           cout<<"Copy COTR"<<endl;
        size=s.size;
        tos=s.tos;
        arr= new int[size];
        for(int i=0; i<size; i++)
            arr[i]=s.arr[i];
    };
    ~Stack()
    {
           cout<<"DTOR"<<endl;
        delete[] arr;
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
    void popStack(){
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
    friend void pop_fun(Stack s);
    friend void pop_funs(Stack& s);
    friend void pop_fun(Stack* s);
};
// Friend Functions
void pop_fun(Stack s)
{
    cout<<"Friend Func by value"<<endl;
        s.popStack();
    };
void pop_fun(Stack* s)
{
    cout<<"Friend Func by address"<<endl;
    s->popStack();
};
void pop_funs(Stack& s)
{
    cout<<"Friend Func by refrence"<<endl;
    s.popStack();
};

void task1()
{
    int si;
    cout<<"Enter Stack size: ";
    cin>>si;


    Stack s(si);
    for(int i=0; i<(si+1); i++)
        s.push(i+1);

    pop_fun(s);

    pop_fun(&s);

    for(int i=0; i<(si+1); i++)
        s.push(i+1);

    pop_funs(s);

    /*int x;
    for(int i=0; i<si+1; i++)
    {
        if(s.pop(x)) cout<<x<<endl;
        else cout<<"Stack is empty"<<endl;
    }*/
}
