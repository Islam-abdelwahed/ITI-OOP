
int power(int x, int y)
{
    if(y==0) return 1;
    else if(y>0)
    {
        return x * power(x,y-1);
    }
}

int fib(int x)
{
    if(x==0) return 0;
    else if(x==1) return 1;
    else if(x>1) return fib(x-1)+fib(x-2);
}

void task1()
{
    int x,y;
    cout<<"enter a number: ";
    cin>>x;
    cout<<"enter its power number: ";
    cin>>y;
    cout<<x<<" ^ "<<y<<" = "<<power(x,y);

    cout<<"\n\nenter a number: ";
    cin>>x;
    cout<<"Fib is: "<<fib(x);
}
