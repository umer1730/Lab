#include<iostream>
using namespace std;
class Rectangle{
    public:
    int length;
    int width;
    Rectangle(int l,int w){
        length = l;
        width = w;
    }
    void area(){
        cout << "Area: "<<length * width<<endl;
    }
};

int main(){
    Rectangle r1(3,4);
    r1.area();
}