#include<iostream>
using namespace std;
void jazzifyChords(std::string chords[], int numChords) 
{
    for (int i = 0; i < numChords; i++) 
    {
        if (chords[i].size() < 2 || chords[i].substr(chords[i].size() - 1) != "7") 
        {
            chords[i] += "7";  
        }
    }
}
int main() 
{
    int numChords;
    cout << "Enter the number of chords: ";
    cin >> numChords;
    string chords[numChords];
    cout << "Enter "<<numChords<<" chords, one per line:"<<endl;
    for (int i = 0; i < numChords; i++) 
    {
        cin>>chords[i];
    }
    jazzifyChords(chords, numChords);
    cout<<"Jazzified Chords:"<<endl;
    for (int i = 0; i < numChords; i++) 
    {
        cout<<chords[i] << " ";
    }
    return 0;
}