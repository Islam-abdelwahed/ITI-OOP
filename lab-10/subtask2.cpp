
template <class t1>
void Swap(t1& x, t1& y){
    t1 temp=x;
    x=y;
    y=temp;
}

void task2()
{
    int a, b;
    cout << "\nEnter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    Swap<int>(a, b);

    cout << "\na = " << a << ", b = " << b << endl;

}
