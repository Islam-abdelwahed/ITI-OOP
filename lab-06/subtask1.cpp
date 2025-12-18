#define SIZE 2

void task1()
{

    int ** ptr_arr= new int*[SIZE];
    for(int i=0; i<SIZE; i++)
    {
        ptr_arr[i] = new int[SIZE];
    }

    for(int i=0; i<SIZE; i++)
    {
        for(int j=0; j<SIZE; j++)
        {
            cout<<"enter cell of row "<<i+1<<" col "<<j+1<<": ";
            cin>>ptr_arr[i][j];
        }
    }
    cout<<"\n\n";
    for(int i=0; i<SIZE; i++)
    {
        for(int j=0; j<SIZE; j++)
        {
            cout<<ptr_arr[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int j=0; j<SIZE; j++)
    {
       delete []ptr_arr[j];
    }
    delete []ptr_arr;
}
