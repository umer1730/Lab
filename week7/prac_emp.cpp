#include <iostream>
using namespace std;

class Employee {
public:
    string name;
    int id;
    int salary;

    Employee(string n, int i, int s) {
        name = n;
        id = i;
        salary = s;
    }

    Employee(const Employee &e) {
        name = e.name;
        id = e.id;
        salary = e.salary;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
   
    Employee e1("ali", 101, 50000);

    Employee e2 = e1;   

    cout << "Original Employee:" << endl;
    e1.display();

    cout << "\nCopied Employee:" << endl;
    e2.display();

    return 0;
}