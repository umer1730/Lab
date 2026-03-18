#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec;
    cout<<"Size= "<<vec.size()<<endl;
    
    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);
    cout<<"After push back size= "<<vec.size()<<endl;
    
    vec.pop_back();  // remove last digit

    // for(int val: vec){
    //     cout<<val <<endl;

    //cout<< vec.front() <<endl;  //front number
    
    cout<< vec.back() <<endl;  
    

    //cout<<vec.at(0)<<endl;  zero index wali value print ho gi
    return 0;
}