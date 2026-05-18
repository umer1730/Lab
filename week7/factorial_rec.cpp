#include<iostream>
using namespace std;

int fact(int val){
    if (val == 0 || val == 1){
        return 1;
    } 
    else{
        return val * fact(val-1);
    }
}
int main(){
    cout<<"Facotorial: ";
    cout<<fact(4);
    return 0;
}