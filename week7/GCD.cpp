#include<iostream>
using namespace std;

int gcd(int a,int b){
    while(b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main(){
    int num1,num2;
    cout<<"Enter number: ";
    cin>>num1>>num2;
    int resultgcd = gcd(num1,num2);
    cout<<"GCD of "<<num1 <<" and "<< num2 <<" is "<<resultgcd<<endl;
}