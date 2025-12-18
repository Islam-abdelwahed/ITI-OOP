
void excu(int x, int y, char ope){
    switch(ope){
case '+':
    {
        cout<<x<<" + "<<y<<" = "<<x+y<<endl;
        break;
    }
    case '-':
    {
        cout<<x<<" + "<<y<<" = "<<x-y<<endl;
        break;
    }
    case '*':
    {
        cout<<x<<" + "<<y<<" = "<<x*y<<endl;
        break;
    }
    case '/':
    {
        cout<<x<<" + "<<y<<" = "<<x/y<<endl;
        break;
    }

    default:
        cout<<"enter a valid operation"<<endl;

        break;}
}
void task2(){
int x,y;
char ope;
cout<<"enter the first number: ";
cin>>x;
cout<<"enter the second number: ";
cin>>y;
cout<<"enter the operation you need: ";
cin>>ope;
excu(x,y,ope);
}
