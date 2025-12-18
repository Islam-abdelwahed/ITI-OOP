
int fact(int x)
{
    int res=1;
    for(int i=1;i<=x;i++)
        res*=i;
    return res;
}

void task3(){
int x;
cout<<"enter a number: ";
cin>>x;
cout<<"factorial is: "<< fact(x);
}
