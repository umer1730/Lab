#include<iostream>
#include<string>
using namespace std;
int getColorIndex(string color) 
{
    if (color == "Red") 
    {
        return 0;
    }
    else if (color == "Black") 
    {
        return 1;
    }
    else if (color == "Brown")
    { 
        return 2;
    }
    else if (color == "Blue") 
    {
        return 3;
    }
    else if (color == "Gray") 
    {
        return 4;
    }
    else 
    {
        return -1;
    }
}
int converter(int carData[5][5], string color) {
    int colorIndex = getColorIndex(color);
    if (colorIndex == -1) {
        cout << "Invalid color!" << endl;
        return 0;
    }
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += carData[i][colorIndex];
    }
    return sum;
}

int main() {
    int carData[5][5] = {
        {10, 7, 12, 10, 4},   
        {18, 11, 15, 17, 2},  
        {23, 19, 12, 16, 14}, 
        {7, 12, 16, 0, 2},    
        {3, 5, 6, 2, 1}       
    };

    string color;
    cout << "Enter car color (Red, Black, Brown, Blue, Gray): ";
    cin >> color;

    int total = converter(carData, color);
    cout << "Total number of " << color << " cars: " << total << endl;

    return 0;
}







