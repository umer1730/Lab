#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y)
{
    COORD coordinates;
    coordinates.X=x;
    coordinates.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates); 
}
main()
{
    system("cls");
    int X=0;
    int Y=1;
    gotoxy(X,Y);
    cout<<"H"<<endl;
    cout<<"A"<<endl;
    cout<<"S"<<endl;
    cout<<"S"<<endl;
    cout<<"A"<<endl;
    cout<<"N"<<endl;
}