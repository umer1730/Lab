#include<iostream>
using namespace std;
class Demo{
    public:
    Demo(){
        cout<<"No parameter constructor"<<endl;

    }
    Demo(int x){
        cout<<"One parameter: "<<x<<endl;
    }
    Demo(int x,int y){
        cout <<"Two parameters: "<<x<<","<<y<<endl;
    }
};

int main(){
    Demo d1;
    Demo d2(10);
    Demo d3(3,4);
    return 0;
}
