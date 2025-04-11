#include<iostream>
using namespace std;
int flowershop(int redrose,int whiterose,int tulips);
main()
{
    int redrose,whiterose,tulips;
    cout<<"Red Rose:";
    cin>>redrose;
    cout<<"White Rose:";
    cin>>whiterose;
    cout<<"Tulips:";
    cin>>tulips;
    float total = flowershop(redrose,whiterose,tulips);
}
int flowershop(int redrose,int whiterose,int tulips)
{
    float price = (redrose * 2.00) + (whiterose * 4.10) + (tulips * 2.50);
    cout<<"originalprice:"<<price;
    if (price > 200)
    {
        double discount = price * 0.8;
        cout<<"Price after discount:"<<discount<<endl;
    }
}