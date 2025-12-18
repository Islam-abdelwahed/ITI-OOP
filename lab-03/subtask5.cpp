#define SIZE 10

char fname[SIZE] = "";

cout << "enter a text: ";
cin.getline(fname, SIZE);

cout<<"\n\n";
for(int i=0;i<SIZE;i++)
{
    if(fname[i]>=96 && fname[i]<=123)
    {
        cout<<(char)(fname[i]-32);
    }
    else if(fname[i]>=65 && fname[i]<=91)
    {
        cout<<(char)(fname[i]+32);
    }
}
