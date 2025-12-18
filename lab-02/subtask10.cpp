//Magic box
int m=0;

cout<<"please enter the size of the box(>2): ";
cin>>m;
int cur_row=1,cur_col=(m+1)/2;

for(int i=1; i<=m*m; i++)
{
    gotoxy(cur_col*4,cur_row*2);
    cout<<i;

    if(i%m==0)
    {
        cur_row+=1;
    }
    else
    {
        cur_row-=1;
        cur_col+=1;
    }
    if(cur_row==0) cur_row=m;
    if(cur_col>m) cur_col=1;
}
gotoxy(0, m*2 + 2);

