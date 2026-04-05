#include<iostream>
using namespace std;
class Student{
    int rollNumber;
    string name;
    float marks;
public:
    void setData(int r,string n,int m){
        rollNumber = r;
        name = n;
        marks = m;
    }

void display(){
    cout<<"Roll number: "<<rollNumber<<endl;
    cout<<"Nmae: "<<name<<endl;
    cout<<"Marks: "<<marks<<endl;
}
};

int main(){
    Student s1,s2;
    s1.setData(1,"Ali",85.5);
    s2.setData(2,"Arslan",95.5);
    cout<< "Student 1 information: "<<endl;
    s1.display();
    cout<< "Student 2 information: "<<endl;
    s2.display();

    return 0;
}