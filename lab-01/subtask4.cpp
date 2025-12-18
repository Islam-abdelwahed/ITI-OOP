
    unsigned char c=0;

    cout<<"\nPlease enter a char: ";
    cin>>c;

    if(c>=96 && c<=123)
    {
        cout<<"your char capital is: "<<(char)(c-32)<<endl;
    }
    else if(c>=65 && c<=91)
    {
        cout<<"your char small is: "<<(char)(c+32)<<endl;
    }
    else{
        cout<<"invalid char"<<endl;
    }
