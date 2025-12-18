
class Stack
{
    int tos;
    int size;
    int arr[5];

public:
    Stack()
    {
        cout<<"Default COTR"<<endl;
        size=5;
        tos=-1;
    };
    ~Stack()
    {
        cout<<"DTOR"<<endl;
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

};

void task1()
{
    Stack s;
    for(int i=0; i<6; i++)
        s.push(i+1);
    int x;
    for(int i=0; i<6; i++)
    {
        if(s.pop(x)) cout<<x<<endl;
        else cout<<"Stack is empty"<<endl;
    }
}
