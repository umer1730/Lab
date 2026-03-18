#include<iostream>
using namespace std;
int main(){
    int n=4;
    int num=1;
    for(int i=0;i<n;i++){
        char ch='A';
        for(int j=0;j<i;j++){    
            ch=ch+1;
            cout<<" ";
        }
        for(int j=0;j<n-i;j++){
            cout<<ch;
        }
        cout<<endl;
    }
}