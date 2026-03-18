#include<iostream>
using namespace std;
main()
{
 system("color 80");
 string name;
 int matric;
 int inter;
 int ecat;
 float aggregate;
 cout<<"Enter the student's name:";
 cin>>name;
 cout<<"Enter matric marks (out of 1100:";
 cin>>matric;
 cout<<"Enter the inter marks (out of 550):";
 cin>>inter;
 cout<<"Enter ecat marks (out of 400):";
 cin>>ecat;
 aggregate = (matric/1100*10)+(inter/550*40)+(ecat/400*50)
 cout<<"aggregate score for"<<name << "is:" << aggregate "%";

} 