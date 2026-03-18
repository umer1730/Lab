#include<iostream>
using namespace std;
main()
{
 system("color 80");
  string name;
  int rollnumber;
  float aggregate;
  char section;
  cout<<"Enter your name:";
  cin>>name;
  cout<<"Enter your rollnumber:";
  cin>>rollnumber;
  cout<<"Enter your aggregate:";
  cin>>aggregate;
  cout<<"Enter your section:";
  cin>>section;
  cout<<"Student Informtion:"<<endl;
  cout<<"Name:"<< name<<endl;
  cout<<"Rollnumber:"<< rollnumber<<endl;
  cout<<"Aggregate:"<< aggregate<<endl;
  cout<<"Section:"<< section<<endl;
}