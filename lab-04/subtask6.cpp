
void copy_str(char arr1[],char arr2[])
{

    int i=0;
    while (arr2[i]!='\0')
    {
        arr1[i]=arr2[i];
        i++;
    }
    arr1[i]='\0';
}

void task6()
{
    char src[100];
    char dest[100];

    cout << "Enter a string: ";
    cin.getline(src, 100);

    copy_str(dest, src);
    cout<<dest;
}
