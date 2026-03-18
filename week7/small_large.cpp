#include<iostream>
using namespace std;
int main(){
    int num[] = {5,15,22,1,-15,24};
    int size = 6;
    int smallest_index;
    int smallest = INT8_MAX;
    for (int i = 0 ;i < size;i++){
        if (num[i] < smallest){
            smallest_index=i ;
            smallest = num[i];
        }
    }
    cout<<"Smallest index: "<<smallest_index<<endl;
    cout<<"Smallest number: "<<smallest;
}    