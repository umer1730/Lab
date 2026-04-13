#include<iostream>
using namespace std;
class Number{
    public:
    int value;
    Number(int v){
        value = v;
    }
    Number(const Number &obj){
        value = obj.value;
    }
    void display(){
        cout<<"Value: "<<value<<endl;
    }
};
int main(){
    Number n1(21);
    Number n2 = n1;

    n1.display();
    n2.display();

    return 0;
}