// grade
int grade=0;
cout<<"please enter your grade: ";
cin>>grade;
if(grade<=100 && grade>=85)
    cout<<"your grade is Excellent";
else if(grade<85 && grade>=75)
    cout<<"your grade is Very good";
else if(grade<75 && grade>=65)
    cout<<"your grade is good";
else if(grade<65 && grade>=50)
    cout<<"your grade is accepted";
else if(grade<50 && grade>=0)
    cout<<"your grade is fail";
else
    cout<<"enter an invalid grade number";
