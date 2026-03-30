#include<iostream>
using namespace std;

void intersection(int arr1[],int size1,int arr2[],int size2){
    for(int i=0;i<size1;i++){
        for(int j=0;j<size2;j++){
            if (arr1[i] == arr2[i]){
                cout<<arr1[i];
                break;

            }
        }
    }
}
int main(){
    int arr1[] = {1,2,3,4};
    int arr2[] = {1,4,3,4};
    int size1 =4;
    int size2 =4;
    cout<<"Intersection: ";
    intersection(arr1,size1,arr2,size2);
}