#include <iostream>
using namespace std;

void printUnique(int arr[], int size) {

    for(int i = 0; i < size; i++) {
        int count = 0;

        for(int j = 0; j < size; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }

        if(count == 1) {            // agr array ka elements aik bar hua to print krdo 
            cout << arr[i] << " ";
        }
    }
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int size = 7;

    cout << "Unique elements: ";
    printUnique(arr, size);

    return 0;
}
