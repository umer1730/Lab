#include <iostream>
using namespace std;

void swapMinMax(int arr[], int size) {
    if(size <= 1) return;

    int minIndex = 0;
    int maxIndex = 0;

    // Find min and max index
    for(int i = 1; i < size; i++) {
        if(arr[i] < arr[minIndex])
            minIndex = i;

        if(arr[i] > arr[maxIndex])
            maxIndex = i;
    }

    // Swap
    int temp = arr[minIndex];
    arr[minIndex] = arr[maxIndex];
    arr[maxIndex] = temp;
}

int main() {
    int arr[] = {5, 2, 9, 1, 7};
    int size = 5;
    swapMinMax(arr, size);
    cout << "Array after swapping min and max:\n";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
