
int power(int x,int y)
{
    int res=1;
    for(int i=0;i<y;i++)
        res*=x;
    return res;
}

void task4(){
int x,y;
cout<<"enter the first number: ";
cin>>x;
cout<<"enter the second number: ";
cin>>y;

cout<<x<<" ^ "<<y<<" = "<<power(x,y);
}
