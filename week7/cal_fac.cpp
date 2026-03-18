#include<iostream>
using namespace std;
int cal_fact(int n){
    int factorial = 1;

    if(n <= 1){
        return 1;
    }

    for(int i = 1; i <= n; i++){
        factorial *= i;
    }

    return factorial;
}
int main(){
    cout << "Factorial is: " << cal_fact(5);
}
