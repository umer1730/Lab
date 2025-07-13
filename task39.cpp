#include<iostream>
using namespace std;
int totalNissanCars(int carData[5][5]) 
{
    int sum = 0;
    for (int j = 0; j < 5; j++) {
        sum += carData[2][j];
    }
    return sum;
}
int main()
 {
    int carData[5][5] = {
        {10, 7, 12, 10, 4},   
        {18, 11, 15, 17, 2},  
        {23, 19, 12, 16, 14}, 
        {7, 12, 16, 0, 2},    
        {3, 5, 6, 2, 1}       
    };
    int total = totalNissanCars(carData);
    cout << "Total number of Nissan cars: " << total << endl;
    return 0;
}
