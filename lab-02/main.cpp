#include <iostream>
#include <cmath>
#include <conio.h>
#include <windows.h>

void gotoxy( int column, int line )
  {
  COORD coord;
  coord.X = column;
  coord.Y = line;
  SetConsoleCursorPosition(
    GetStdHandle( STD_OUTPUT_HANDLE ),
    coord
    );
  }

using namespace std;

int main()
{
     //#include "subtask1.cpp"
    // #include "subtask2.cpp"
    // #include "subtask3.cpp"
    // #include "subtask4.cpp"
     //#include "subtask5.cpp"
   // #include "subtask6.cpp"
   //  #include "subtask7.cpp"
    // #include "subtask8.cpp"
     //#include "subtask9.cpp"
     #include "subtask10.cpp"
    return 0;
}
