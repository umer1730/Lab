#include<iostream>
using namespace std;
bool check(string word,char letter)
    {
        bool isfound = false;
        for (int idx = 0;word[idx] != '\0';idx++)
        {
            if (word[idx] == letter)
            {
                isfound = true;
                break;
            }
        }
        return isfound;
    }
main()
{
    string word;
    char letter;
    cout<<"Enter a word:";
    cin>>word;
    cout<<"Enter a letter:";
    cin>>letter;
    if (check(word,letter))
{
    cout<<letter<<" is found in"<<endl;
}
else
{
    cout<<letter<<" is not found in"<<endl;
}
}    
