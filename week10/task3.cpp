#include<iostream>
using namespace std;
main()
{
    int n;
    cout<<"Enter the elements:";
    cin>>n;
    if (n < 3)
    {
        cout<<"No peak found";
    }
    int array[n];
    for(int i = 0;i < n;i++)
    {
        cin>>array[i];
    }
    bool isfound = false;
    cout<<"Peak elements:";
    for (int i = 0;i < n - 1;i++)
    {
        if(array[i] > array[i-1] && array[i] >array[i + 1])
        {
            cout<<array[i]<<",";
            isfound = true;
        }
    } 
    if (!isfound)
    {
        cout<<"No peak found";
    }
}