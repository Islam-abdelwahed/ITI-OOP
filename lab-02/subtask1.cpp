//Check prime
int x=0;
bool prime =true;
cout<<"enter a number: ";
cin>>x;
if(x<=1) cout<<"enter a number greater than 1";
else
{
    for (int i=x-1; i>1; i--)
    {
        if(!(x%i))
        {
            prime=false;
        }
    }
        cout<<x<<(prime ? " is a prime number\n" : " is not a prime number\n")<<endl;
}
