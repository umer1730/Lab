#include<iostream>
using namespace std;
class Test{
    public:
    int x = 10;

    void show(){
        cout<<"Value: "<<x<<endl;
    }
};
int main(){
    Test t1;
    Test *ptr = &t1;

    ptr->show();

    return 0;
}