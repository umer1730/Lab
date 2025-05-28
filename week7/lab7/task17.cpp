#include<iostream>
using namespace std;
void generatefibonacci(int length)
{
    int n1 = 0;
    int n2 = 1;
    int next;
    for(int x = 0; x < length;x = x + 1)
    {
        cout<<n1<<",";
        next = n1 + n2;
        n1=n2;
        n2=next;
    }
}
main()
{
    int length;
    cout<<"Enter the length of the fibonacci:";
    cin>>length;
    generatefibonacci(length);

}