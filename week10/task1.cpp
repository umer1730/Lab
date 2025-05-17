#include<iostream>
using namespace std;
main()
{
    int n;
    cout<<"Enter the number of saturdays:";
    cin>>n;
    int miles[n];
    cout<<"Enter the number of miles run in every saturday:";
    for (int i = 0;i < n;i++)
    {
    cin>>miles[i];
    }
    int count=0;
    for(int i=0;i<n-1;i++){
        if(miles[i+1]>miles[i]){
            count++;
        }
    }
    cout<<count;
}