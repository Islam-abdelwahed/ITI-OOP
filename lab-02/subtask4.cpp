// count words and char
string text="";
cout<<"please enter a text: ";
getline(cin, text);

int i=0,w=0,c=0;
while(text[i]!='\0')
{
    if(text[i] != ' ')
        c++;

    if(text[i] != ' ' && (text[i+1] == ' ' || text[i+1] == '\0'))
        w++;

    i++;
}

cout<<"Number of words is: "<<w<<"\nNumber of char is: "<<c<<endl;
