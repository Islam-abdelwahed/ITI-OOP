
int sum=0,s=0,x=0;
cout<<"how many numbers you want to sum: ";
cin>>s;
for(int i=1;i<=s;i++)
{
    cout<<"enter the "<<i<<((i==1)?"st":((i==2)?"nd":((i==3)?"rd":"th")))<<" number: ";
    cin>>x;
    sum+=x;
}

cout<<"\nThe sum is: "<<sum<<endl;
