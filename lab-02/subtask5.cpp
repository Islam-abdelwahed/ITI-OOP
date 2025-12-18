// calculate factorial
int n=0;
cout<<"enter a number: ";
cin>>n;

for(int i=n-1;i>0;i--)
    n*=i;

cout<<"factorial is: "<<n<<endl;
