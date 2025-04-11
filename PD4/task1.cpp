#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates); 
}
main()
{
    system("cls");
    int centerX =40;
    int centerY = 12;
    gotoxy(centerX,centerY);  
    cout<<"UMER";

}