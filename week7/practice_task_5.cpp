#include<iostream>
using namespace std;
class Test{
    public:
    Test(){
        cout<<"COntructor called"<<endl;
    }
    ~Test(){
        cout<<"Destructor"<<endl;
    }
};
int main(){
    Test t1;
    return 0;
}