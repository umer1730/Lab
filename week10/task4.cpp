#include<iostream>
using namespace std;
bool isRepeatingCycleLength(int length,int array[],int cyclelength)
{
if (cyclelength > length)
{
    cout<<"true";
}
for (int i = 0;i < length;i++){
if (array[i] != array[i % cyclelength])
{
    cout<<"false";
}
}
    return isRepeatingCycleLength;
}
main()
{
    int length;
    cout<<"Enter the length:";
    cin>>length;
    int array[length];
    for(int i = 0;i < length;i++)
    {
        cin>>array[i];
    }
    int cyclelength;
    cout<<"Enter the cycle length:";
    cin>>cyclelength;
    bool result = isRepeatingCycleLength(length,array,cyclelength);
    cout<<result;
}