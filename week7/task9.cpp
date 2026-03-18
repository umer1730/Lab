#include<iostream>
using namespace std;
main()
{
system("color 80");
 int population;
 float rate;
 cout<<"Enter the current world population:";
 cin>>population;
 cout<<"Enter the monthly birth rate (number of births per month);
 cin>>rate;
 float decades;
 decades =population / 30; 
 cout<<Population in three decades will be:"<<decades;
} 