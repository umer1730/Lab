#include<iostream>
using namespace std;

int totalRedCars(int carData[5][5]) {
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += carData[i][0];
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

    int total = totalRedCars(carData);
    cout << "Total number of Red cars in company: " << total << endl;

    return 0;
}
