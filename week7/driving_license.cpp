#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter age: ";
    cin>>age;
    if (age > 18){
        cout<<"Yes, you are eligible for driving license";
    }
    else{
        cout<<"You are not eligible for driving license";
    }
}