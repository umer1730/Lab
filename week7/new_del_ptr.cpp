#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    
    Student(string n){
        name = n;
    }

    void display(){
        cout<<"Name: "<<name<<endl;
    }
};
int main(){
    Student *s = new Student("Ali");
    s->display();

    delete s;
    return 0;
}