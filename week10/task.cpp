#include<iostream>
using namespace std;
string plant(string seed,int water,int fert,int temp) 
{
    string result = "";
    if (temp >= 20 && temp <= 30)
    { 
    for (int i = 0; i < water; i++) 
    {
        for (int j = 0;j < water;j++)
    {
        result += "-";
    }
        for (int k = 0; k < fert; k++) 
        {
            result += seed;
        }
    } 
    else 
    {
        result += seed;
    }
    return result;
}
}
main() 
{
    string seed;
    int water,fert,temp;
    cout<<"Enter seed symbol:";
    cin>>seed;
    cout<<"Enter water level:";
    cin>>water;
    cout<<"Enter fertilizer level:";
    cin>>fert;
    cout<<"Enter temperature:";
    cin>>temp;
    cout<<"Plant growth result: "<<plant(seed, water, fert, temp)<<endl;
    return 0;
}