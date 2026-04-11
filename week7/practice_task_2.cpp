#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int roll_no;

    Student(string n,int r){
        name = n;
        roll_no = r;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll No: "<<roll_no<<endl;

    }
};
int main(){
    Student s1("Ali",2123);
    s1.display();
    return 0;

}