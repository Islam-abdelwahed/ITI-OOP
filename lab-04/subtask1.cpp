void wait_return()
{
    cout << "\n\nPress ENTER to return to Main Menu...";
    while (getch()!=ENTER);
}

void show_choice(char msg[])
{
    system("cls");
    cout << "\n\n\tYou selected: " << msg;
    wait_return();
}

void drawMenu()
{
    char main_menu[][20]= {"New   >", "Display", "Exit"};
    char new_menu[][20]= {"Project", "File", "Back"};

    int main_choice = 0, new_choice = 0;
    char ch;
    bool exitFlag = false,r_clicked=false;

    while(!exitFlag)
    {
        system("cls");
        gotoxy(15, 2);
        cout<<"======= MAIN MENU =======\n";

        for(int i=0; i<3; i++)
        {
            if(i==main_choice) textattr(0xf0);
            gotoxy(18, i+4);
            cout<<main_menu[i];
            textattr(0x07);
        }

        ch=getch();
        if(ch==EXTENDED_KEY)
        {
            ch=getch();
            if (ch==UP)
                main_choice=(main_choice==0)? 2:main_choice-1;
            else if (ch==DOWN)
                main_choice=(main_choice==2)? 0:main_choice+1;
            else if
            (ch==HOME) main_choice=0;
            else if(ch==RIGHT)
                if(main_choice==0) r_clicked=true;
        }
        if(ch==ENTER || r_clicked)
        {
            r_clicked=false;
            switch (main_choice)
            {
            case 0:
                while(true)
                {
                    gotoxy(25, 4);
                    cout << "------ NEW MENU ------\n";

                    for(int i=0; i<3; i++)
                    {
                        if(i==new_choice)
                            textattr(0xf2);
                        gotoxy(28,  5+i);
                        cout << new_menu[i];
                        textattr(0x07);
                    }

                    ch=getch();
                    if(ch==EXTENDED_KEY)
                    {
                        ch=getch();
                        if(ch==UP)
                            new_choice=(new_choice==0)?2:new_choice-1;
                        else if (ch==DOWN)
                            new_choice=(new_choice==2)? 0:new_choice+1;
                        else if(ch==LEFT) break;
                    }
                    else if(ch==ENTER)
                    {
                        if (new_choice==2) break;
                        show_choice(new_menu[new_choice]);
                        break;
                    }
                }
                break;

            case 1:
                show_choice("Display");
                break;

            case 2:
                exitFlag=true;
                break;
            }
        }
        else if (ch==ESC)
            exitFlag=true;
    }
    system("cls");
    cout << "\n\n\tGoodbye!\n";
}
