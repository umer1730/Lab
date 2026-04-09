#include<iostream>
using namespace std;
class BankAccount{
    private:
    string name;
    int balance;

    public:
    BankAccount(string n,int b){
        name = n;
        balance = b;
    }
    
    void deposit(int amount){
        balance += amount;
    }

    
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Balance after deposit: "<<balance<<endl;
    }
};

int main(){
    BankAccount b("Ali",5000);
    b.deposit(2000);
    b.display();

    return 0;
}