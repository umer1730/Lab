#include<iostream>
using namespace std;
class Test{
    public:
    Test(){
        cout<<"Costructor called automatically."<<endl;
    }
};
int main(){
    Test t1;
    return 0;
}