#define LEFT 75
#define RIGHT 77
#define UP 72
#define DOWN 80
#define DELETE

    int n,i = 0,pos = 0;
    char ch;
    bool f = true;
    char *l = new char[n];

void line(char *l, int n, int pos, int i)
{
    gotoxy(1, 2);
    for (int k = 0; k < n; k++)
    {
        if (k < pos)
            cout << l[k];
        else
            cout << ' ';
    }
    gotoxy(1, 2);
}

char capital(char a)
{
    if (a >= 97 && a <= 122)
        return a - 32;
    return a;
}
char small(char a)
{
    if (a >= 65 && a <= 90)
        return a + 32;
    return a;
}
void down()
{
    if (i < pos)
    {
        l[i] = small(l[i]);
        gotoxy(i+1, 2);
        cout << l[i];
    }
}
void up()
{
    if (i < pos)
    {
        l[i] = capital(l[i]);
        gotoxy(i+1, 2);
        cout << l[i];
    }
}
void moveRight()
{
    if (i < pos)
        i++;
    else
        cout << '\a';
}
void moveLeft()
{
    if (i > 0)
        i--;
    else
        cout << '\a';
}

void shift_letters(){
  if (i > 0 && pos > 0)
    {
        for (int k = i - 1; k < pos - 1; k++)
            l[k] = l[k + 1];
        pos--;
        i--;
        l[pos] = ' ';
        line(l, n, pos, i);
    }
    else
        cout << '\a';
}

void drawLine()
{
    for (int k = 0; k < n; k++)
        l[k] = ' ';
    textattr(5, 7);
    gotoxy(1, 2);
    for (int k = 0; k < n; k++)
        cout << l[k];
}

void editor()
{
    cout << "Enter the size of your Line: ";
    cin >> n;
    if (n <= 0)
        return;

    l = new char[n];
    i = 0;
    pos = 0;
    f = true;

    drawLine();
    do
    {
        ch = getch();
        switch (ch)
        {
        case -32:
        {
            char e = getch();
            switch (e)
            {
            case LEFT:
                moveLeft();
                break;
            case RIGHT:
                moveRight();
                break;
            case UP:
                up();
                break;
            case DOWN:
                down();
                break;
            }
            break;
        }
        case 27:
            f = false;
            break;
        case 8:
            shift_letters();
            break;
        default:
            if (ch >= 32 && ch <= 126)
            {
                if (pos < n)
                {
                    if (i < pos)
                    {
                        for (int k = pos; k > i; k--)
                            l[k] = l[k - 1];
                        l[i] = ch;
                        pos++;
                        i++;
                    }
                    else
                    {
                        l[i] = ch;
                        pos++;
                        i++;
                    }
                    line(l, n, pos, i);
                }
                else
                    cout << '\a';
            }
            break;
        }
        gotoxy(i + 1, 2);
    } while (f);

    delete[] l;

}
