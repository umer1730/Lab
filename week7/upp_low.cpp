#include<iostream>
using namespace std;
int main(){
    char character;
    cout<<"Enter character: ";
    cin>> character;
    if (character>='a' && character <='z'){
        cout<<"lowercase letters";
    }
    else{
        cout<<"Upper case letters";
    }
}