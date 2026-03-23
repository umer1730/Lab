#include<iostream>
using namespace std;
class Car{
    public:
    string brand;
    int price;

};
int main(){
    Car c1;
    c1.brand = "Toyota";
    c1.price = 34567;

    cout<<c1.brand<<endl;
    cout<<c1.price<<endl;
}