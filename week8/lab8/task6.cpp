#include<iostream>
using namespace std;
int pilesCubes(int numbers)
{
    int n = 1;
    int sum = 0;
    while(sum < numbers)
    {
        sum += n * n * n;
        if (sum == numbers)
        return n;
    n++;
    }
    return -1;
}
main()
{
    int number;
    cout<<"Enter piles cubes:";
    cin>>number;
    cout<<pilesCubes(number)<<endl;
    return 0;
}