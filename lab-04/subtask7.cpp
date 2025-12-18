int getfib(int x){
   if(x<=1)
        return x;
    int a=0,b=1,next=0;
    for(int i=2;i<=x;i++){
        next=a+b;
        a=b;
        b=next;
    }
    return b;
}

void task7(){
int x;
cout<<"enter a number: ";
cin>>x;
cout<<"fib is: "<< getfib(x);
}
