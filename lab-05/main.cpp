#include <iostream>
#include <windows.h>
#include <conio.h>

void textattr(int i, int j) {
    WORD color = (WORD)i | ((WORD)j << 4);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void gotoxy(int column, int line) {
	COORD coord;
	coord.X = column;
	coord.Y = line;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

#define row 4
#define col 10
#define si 5
#define For(n) for(int i = 0;i<n;i++)
using namespace std;

#include "subtask1.cpp"
#include "subtask2.cpp"
#include "subtask3.cpp"
#include "subtask4.cpp"

int main()
{
    //task1();
    //task2();
    //task3();
    menu();

    return 0;
}
