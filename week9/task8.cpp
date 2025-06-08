#include<iostream>
using namespace std;
void wordpostmortem(char word[])
{
    for(int i = 0;word[i] != '\0';i++)
    {
        if ((word[i] >= 'A' && word[i] <= 'Z') || (word[i] >= 'a' && word[i] <= 'z'))
    {
        cout<<word[i]<<" found at position "<<i<<endl;
    }
    }
}
main()
{
    int size = 100;
    char word[size];
    cout<<"Enter a word:";
    cin>>word;
    wordpostmortem(word);
}