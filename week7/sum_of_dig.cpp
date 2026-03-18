#include<iostream>
using namespace std;
int digit_sum(int n){
    int sum = 0;
    
    while(n > 0){
        int lastDig = n % 10;
        n /= 10;
        sum  += lastDig;
    }
    return sum;
}
int main(){
    cout<<"Sum: "<<digit_sum(2356)<<endl;
}