#include<iostream>
using namespace std;

// double sum(double a, double b){
//         double s = a+b;
//         return s;
//     }
int min_of_two(int x,int y){
    if (x < y){
        return x;
    }
    else{
        return y;
    }
}
    
int main(){
   // cout<<"Sum: "<<sum(3,4)<<endl;
    cout<<"Minimum num is: "<<min_of_two(3,4);
}