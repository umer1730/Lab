#include <iostream>
using namespace std;

class Employee {
public:
    string name;
    int salary;

    Employee(string n, int s) {
        name = n;
        salary = s;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    // create object using new
    Employee *emp = new Employee("ali", 60000);

    // access using arrow
    emp->display();

    // modify using pointer
    emp->salary = 70000;

    cout << "\nAfter Update:\n";
    emp->display();

    // delete object
    delete emp;

    return 0;
}