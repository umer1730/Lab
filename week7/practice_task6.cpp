#include<iostream>
using namespace std;

class Car{
    public:
    string brand;
    int price;
    Car(string b,int p){
        brand = b;
        price = p;
    }
    void function(){
        cout<<"Brand: "<<brand<<endl;
        cout<<"Price: "<<price<<endl;
    }
};
int main(){
    Car c1("toyota",3456);
    c1.function();
}