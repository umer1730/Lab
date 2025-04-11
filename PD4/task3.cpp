#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x, int y);
void printMaze();
void playerMove(int x, int y);

main()
{
    int x = 1, y = 1; 
    bool movingDown = true; 
    system("cls");
    printMaze();

    while (true)
    {
        playerMove(x,y);
        if (y == 10)
        {
            movingDown = false; 
        }
        if (y == 1)
        {
            movingDown = true; 
        }
        if (movingDown)
        {
            y = y + 1;
        }
        else
        {
            y = y - 1;
        }

        Sleep(100); 
    }
}

void playerMove(int x, int y)
{
    gotoxy(x, y);
    cout << "P"; 
    Sleep(100);
    gotoxy(x, y);
    cout << " "; 
}

void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void printMaze()
{
    cout << "#######################################" << endl;
    cout << "#                                     #" << endl;
    cout << "#                                     #" << endl;
    cout << "#                                     #" << endl;
    cout << "#                                     #" << endl;
    cout << "#                                     #" << endl;
    cout << "#                                     #" << endl;
    cout << "#                                     #" << endl;
    cout << "#                                     #" << endl;
    cout << "#                                     #" << endl;
    cout << "#######################################" << endl;
}