
int getlength(char arr[]){
       int i = 0;
    while(arr[i] != '\0')
        i++;
    return i;
}

void task5(){
char arr[]="";
cout<<"enter a text: ";
cin.getline(arr,50);

cout<<"Length is: "<<getlength(arr);
}
