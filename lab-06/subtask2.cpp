#define SIZE 5

void task2()
{
    int arr[SIZE]= {0};
    int* ptr = new int[SIZE];

    for(int i=0; i<SIZE; i++)
    {
        cout<<"enter element #"<<i+1<<": ";
        cin>>*(ptr+i);
    }

    for(int i=0; i<SIZE; i++)
    {
        cout<<ptr[i]<<" ";
    }
    delete []ptr;
}
