#include<iostream>
using namespace std;
main()
{
    int numbers[5];
    for (int i = 0;i < 5;i++)
   {
    cout<<"Enter number:";
    cin>>numbers[i];
   } 
    cout<<"The first element in array is:"<<numbers[0]<<endl;
    cout<<"The last element in array is:"<<numbers[4]<<endl;
}