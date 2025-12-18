#include <iostream>
#include <conio.h>
#include <windows.h>

#define EXTENDED_KEY -32
#define ENTER 13
#define ESC 27
#define UP 72
#define DOWN 80
#define HOME 71
#define LEFT 75
#define RIGHT 77

void gotoxy(int column, int line);
void textattr(int i);
void wait_return();
void show_choice(char msg[]);
using namespace std;

#include "subtask1.cpp"
#include "subtask2.cpp"
#include "subtask3.cpp"
#include "subtask4.cpp"
#include "subtask5.cpp"
#include "subtask6.cpp"
#include "subtask7.cpp"

void textattr(int i) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);
}

void gotoxy(int column, int line) {
    COORD coord;
    coord.X = (SHORT)column;
    coord.Y = (SHORT)line;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}


int main()
{
    drawMenu();
    //task7();
    return 0;
}
