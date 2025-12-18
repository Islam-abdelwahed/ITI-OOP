
char fname[10] = "",lname[10] = "", concat[20] = "";
cout << "enter a text: ";
cin.getline(fname, 10);

cout << "enter another text: ";
cin.getline(lname, 10);

strcat(concat,fname);
strcat(concat," ");
strcat(concat,lname);

cout<<"\n\n"<<concat;
