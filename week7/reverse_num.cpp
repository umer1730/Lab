#include<iostream>
using namespace std;
int reverseNum(int num){
    int rev = 0;
    while(num != 0){
        int digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }
    return rev;
}
int main(){
    int num;
    cout<<"Enter num: ";
    cin>>num;

    cout<<"Reverse number: "<< reverseNum(num);
}