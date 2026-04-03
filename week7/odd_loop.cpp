#include<iostream>
using namespace std;
int main(){
    
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int odd_sum=0;
    for(int i = 0;i<=n;i++){
        if (n%2 !=0){
            odd_sum  += i;
        }
    }
    cout<<"Odd sum: "<<odd_sum<<endl;
    return 0;
}