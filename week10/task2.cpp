#include<iostream>
using namespace std;
main()
{
    int n;
    cout<<"Enter how many words you want to enter:";
    cin>>n;
    char ch;
    cout<<"Enter the character:";
    cin>>ch;
    string array[n];
        int count = 0;
    for (int i = 0;i < n;i++)
    {
        cout<<"Enter word ";
        cin>>array[i];  
        for(int j=0;j < array[i].length();j++)
        {
            if(array[i][j]==ch)
            {
                count++;
            }
        }
    }
    cout<<count;
}