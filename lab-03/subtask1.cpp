#define SIZE 10

int arr[SIZE]= {0};

// enter the array
for(int i=0; i<SIZE; i++)
{
    cout<<"enter the "<<i+1<<((i==1)?"st":((i==2)?"nd":((i==3)?"rd":"th")))<<" number: ";
    cin>>arr[i];
}

// print the array
for(int i=0; i<SIZE; i++)
    cout<<((i==0)?"[ ":" ")<<arr[i]<<((i==SIZE-1)?" ]":"");

// max value in the array
int max=arr[0];
for(int i=0; i<SIZE; i++)
    max=(arr[i]>max)? arr[i]:max;

cout<<"\n\nMax value is: "<<max;

// min value in the array
int min=arr[0];
for(int i=0; i<SIZE; i++)
    min=(arr[i]<min)? arr[i]:min;

cout<<"\n\Min value is: "<<min;


// Sum of the array
int sum=0;
for(int i=0; i<SIZE; i++)
    sum+=arr[i];

cout<<"\n\nsum is:"<<sum;


// Linear search
cout<<"\n\nenter a value to search for: ";
int val=0;
bool f=false;
cin>>val;
for(int i=0; i<SIZE; i++)
{
    if(val==arr[i])
    {
        f=true;
        break;
    }
}
cout<<(f?"\nfound\n\n":"\nnot found\n\n");


// Bubble Sort
for(int i=0;i<SIZE-1;i++)
{
    for(int j=0;j<(SIZE-1-i);j++)
    {
        if(arr[j]>arr[j+1])
        {
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}

for(int i=0; i<SIZE; i++)
    cout<<((i==0)?"[ ":" ")<<arr[i]<<((i==SIZE-1)?" ]":"");

