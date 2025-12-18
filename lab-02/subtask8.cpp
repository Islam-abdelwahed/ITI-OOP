// print binary
int b=0;
cout<<"enter a number: ";
cin>>b;

int c=31;
while(c>=0){
        cout<<((b>>c)&1);
        c--;
}
