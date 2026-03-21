#include<iostream>
using namespace std;
class Demo{
    public:
    int num=50;

    void display(){
        cout<<"Number: "<<num<<endl;
    }
};
int main(){
    Demo *d = new Demo();
    d->display();

    delete d;

    return 0;
}