#include<iostream>
using namespace std;
bool isAlreadyEntered(int arr[],int size,int number)
{
    for (int i = 0; i < size; i++) 
    {
        if (arr[i] == number) 
        {
            return true;
        }
    }
    return false;
} 
int main() 
{
    int n;
    cout<<"Enter the number of elements: ";
    cin >> n;
    int arr[n]; 
    int count = 0; 
    for (int i = 0; i < n; i++) 
    {
        int num;
        cout << "Enter "<<n<<" number,one per line: ";
        cin >> num;
        if (isAlreadyEntered(arr, count, num)) 
        {
            cout << "Already Entered: "<<num << endl;
        } 
        else 
        {
            arr[count++] = num; 
        }
    }
    cout << "Unique numbers entered: ";
    for (int i = 0; i < count; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}