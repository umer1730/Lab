#include<iostream>
using namespace std;

bool prime_no(int n){
    if(n <= 1)
        return false;

    for(int i = 2; i <= n/2; i++){
        if(n % i == 0){
            return false;  
        }
    }
    return true; 
}
int main(){
    int num = 7;

    if(prime_no(num))
        cout << "Prime Number";
    else
        cout << "Not Prime Number";

    return 0;
}
