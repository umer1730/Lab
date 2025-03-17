#include<iostream>
using namespace std;
main()
{
    int a,b,c;
    char op;
    cout<<"Enter num1:";
    cin>>a;
    cout<<"Enter num2:";
    cin>>b;
    cout<<"Enter operator(+,-,/,*):";
    cin >> op;
   }  
    if (op == '+')
{
    c = a + b;
    cout<<"Sum:"<<c ;
}
 if (op == '*')
{
    c = a*b;
    cout<<"Multiplication:"<<c;
}
 if (op == '-')
{
    c = a-b;
    cout<<"Subtraction:"<<c;
}
 if (op ==  '/' );
{
    c = a / b;
    cout<<"Division:"<<c;
}