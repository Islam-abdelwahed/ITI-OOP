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

using namespace std;

#include "subtask1.cpp"
#include "subtask2.cpp"
#include "subtask3.cpp"
#include "subtask4.cpp"


int main()
{
    //task1();
    //task2();
    //editor();
    task4();
    return 0;
}
