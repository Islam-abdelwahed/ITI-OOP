// menu
bool menu = true, display = true, exit= true;
char choice=0;

do
{
    system("cls");
    cout<<"===Menu===\n"<<(menu?"1.Menu\n":"")<<(display?"2.Display\n":"")<<(exit?"3.Exit":"")<< "\nPress a key: ";
    choice = getch();

    if(choice=='1' && menu)
    {
        system("cls");
        cout << "You selected MENU\n";
        menu = false;
        _sleep(1000);
    }
    else if(choice=='2' && display)
    {
        system("cls");
        cout << "You selected DISPLAY\n";
        display = false;
        _sleep(1000);
    }
    else if(choice=='3' && exit)
    {
        system("cls");
        cout << "Exiting program...\n";
        break;
    }
    else
    {
        system("cls");
        cout << "Incorrect number\n";
        _sleep(1000);
    }

}
while(1);
