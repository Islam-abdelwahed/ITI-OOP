

void disp(emp ptr[],int s)
{
    For(s)
    if(ptr[i].id != -1)
        cout << "id = " << ptr[i].id << " :: Name = " << ptr[i].name << " :: Age = " << ptr[i].age << endl;
    getch();
}

void insertEmp(emp ptr[],int i)
{
    cout << "Enter id: ";
    cin >>  ptr[i].id;
    cout << "Enter name: ";
    cin >>  ptr[i].name;
    cout << "Enter age: ";
    cin >>  ptr[i].age;
}

int findByName(emp arr[],int s,char n[])
{
    For(s)
    if(strcmp(n,arr[i].name)==0)
        return i;
    return -1;
}
int findById(emp arr[],int s,int id)
{
    For(s)
    {if(id == arr[i].id)
        return i;}
    return -1;
}

void newEmployee(emp arr[])
{
    int i = -1;
    while(i<0 || i>=si)
    {
        cout << "Enter index (0-" << si-1 << "): ";
        cin >> i;
    }
    if(arr[i].id != -1)
    {
        bool o;
        cout << "Index used, overwrite? (1 Yes / 0 No): ";
        cin >> o;
        if(!o)
        {
            getch();
            return;
        }
    }
    insertEmp(arr,i);
    getch();
}

void deleteMenu(emp arr[])
{
    char sub[2][20] = {"Delete By Id","Delete By Name"};
    int sp = 0;
    bool k = true;
    do
    {
        textattr(7,0);
        system("cls");
        For(2)
        {
            if(sp==i) textattr(7,2);
            cout << sub[i] << endl;
            textattr(7,0);
        }
        char t = getch();
        switch(t)
        {
        case -32:
        {
            char e = getch();
            switch(e)
            {
            case 72:
                sp--;
                if(sp<0) sp=1;
                break;
            case 80:
                sp++;
                if(sp>1) sp=0;
                break;
            case 75:
                k = false;
                break;
            }
        }
        break;
        case 13:
            system("cls");
            if(sp==0)
            {
                int idd;
                cout << "Enter id: ";
                cin.ignore();
                cin >> idd;
                int m = findById(arr,si,idd);
                if(m!=-1) {arr[m].id = -1;
                }

            }
            else
            {
                char j[20];
                cout << "Enter name: ";
                cin.ignore();
                cin.getline(j,20);
                int m = findByName(arr,si,j);
                if(m!=-1) arr[m].id = -1;
            }
            getch();
            k = false;
            break;
        }
    }
    while(k);
}

void menu()
{
    emp arr[si];
    bool flag = true;
    int cp = 0;
    char Menu[row][col] = {"New","Display","Delete","Exit"};

    while(flag)
    {
        textattr(7,0);
        system("cls");
        For(row)
        {
            if(cp==i)textattr(7,2);
            cout << Menu[i] << endl;
            textattr(7,0);
        }

        char ch = getch();
        switch(ch)
        {
        case -32:
        {
            char e = getch();
            switch(e)
            {
            case 72:
                cp--;
                if(cp<0) cp=3;
                break;
            case 80:
                cp++;
                if(cp>3) cp=0;
                break;
            case 71:
                cp = 0;
                break;
            case 79:
                cp = 3;
                break;
            }
        }
        break;

        case 'n':
        case 'N':
            cp = 0;
            break;
        case 'd':
        case 'D':
            cp = 1;
            break;
        case 'e':
        case 'E':
            cp = 3;
            break;

        case 13:
            system("cls");
            switch(cp)
            {
            case 0:
                newEmployee(arr);
                break;
            case 1:
                disp(arr,si);
                break;
            case 2:
                deleteMenu(arr);
                break;
            case 3:
                flag = false;
                break;
            }
            break;
        }
    }
}
