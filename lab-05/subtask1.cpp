
void swap_nums(int* x, int* y){
    int temp = *x;
    *x= *y;
    *y =temp;
}

void task1(){
    int x=0,y=0;
    cout<<"please enter a number: ";
    cin>>x;
        cout<<"please enter another number: ";
    cin>>y;
    swap_nums(&x,&y);

    cout<<"\nthe first number after swap: "<<x<<endl;
    cout<<"the second number after swap: "<<y<<endl;
    }
