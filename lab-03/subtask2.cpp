
int nums[3][4];

for(int i=0; i<3; i++)
{
    for(int j=0; j<4; j++)
    {
        cout << "Enter the " << i+1 << ((j==0)?"st":((j==1)?"nd":((j==2)?"rd":"th")))
             << " row, " << j+1 << ((j==0)?"st":((j==1)?"nd":((j==2)?"rd":"th"))) << " column: ";
        cin>>nums[i][j];
    }
}
cout<<"\n\n";
for(int i=0; i<3; i++)
{
    for(int j=0; j<4; j++)
    {
        cout<<nums[i][j]<<((j==3)?"\n\n":", ");
    }
}
cout<<"\n\n";
int sum=0;
for(int i=0; i<3; i++)
{
    for(int j=0; j<4; j++)
    {
        sum+=nums[i][j];
    }
    cout<<"Sum of row "<<i+1<<" : "<<sum<<endl;
    sum=0;
}
cout<<"\n\n";
sum=0;
for(int i=0; i<4; i++)
{
    for(int j=0; j<3; j++)
    {
        sum+=nums[j][i];
    }
    cout<<"Avg of col "<<i+1<<" : "<<sum/4<<endl;
    sum=0;
}
