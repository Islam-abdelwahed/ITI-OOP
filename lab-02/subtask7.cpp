// reverse number
int z=0,r=0;
cout<<"enter a number: ";
cin>>z;

while(z!=0)
{
    r*=10;
    r+=z%10;
    z/=10;
}

cout<<"the reverse is: "<<r;
