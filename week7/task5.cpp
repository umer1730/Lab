#include<iostream>
using namespace std;
main()
{
  system("color 80");
  int charge;
  int time;
  cout<<"Enter the charge in coulombs:";
  cin>>charge;
  cout<<"Enter the time in secons:";
  cin>> time;
  float  current;
  current=charge / time;
  cout<<"the current (I) is:" << current;
}