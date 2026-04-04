#include<iostream>
using namespace std;

int main(){
 
    int n;
    cout<<"Enter no: ";
    cin>>n;
    int odd_sum=0;
    int i=1;
    while(i<=n){
        if (n%2 != 0){
            odd_sum += i;
        }
        i++;
    }
    cout<<"ODD sum is: "<<odd_sum;
    return 0;
}