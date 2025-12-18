#define SIZE 3

char students[SIZE][15];

for(int i=0;i<SIZE;i++)
{
    cout<<"enter "<<i+1<<((i==0)?"st":((i==1)?"nd":((i==2)?"rd":"th")))<<" student name: ";
    cin.getline(students[i],15);
}
cout<<"\n\n";
for(int i=0;i<SIZE;i++)
{
    cout<<"Student "<<i+1<<": ";
    cout<<students[i]<<endl;
}
