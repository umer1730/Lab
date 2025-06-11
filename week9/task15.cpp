#include<iostream>
using namespace std;
void insert_middle(int arr1[], int arr2[], int size2) 
{
    cout << "[ " << arr1[0] << " ";
    for (int i = 0; i < size2; i++) 
    {
        cout << arr2[i] << " ";
    }
    cout << arr1[1] << " ]" << endl;
}
int main() 
{
    int arr1[2], size2;
    cout << "Enter two elements for the first array: ";
    cin >> arr1[0] >> arr1[1];
    cout << "Enter the number of elements in the second array: ";
    cin >> size2;
    int arr2[size2]; 
    cout << "Enter " << size2 << " elements for the second array: ";
    for (int i = 0; i < size2; i++) 
    {
        cin >> arr2[i];
    }
    insert_middle(arr1, arr2, size2);
    return 0;
}