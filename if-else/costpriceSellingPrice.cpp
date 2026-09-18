#include<iostream>
using namespace std;
int main(){
    int cp , sp;
    cout<<"Enter the cost price of iteam : ";
    cin>>cp;
    cout<<endl;
    cout<<"Enter the Selling price of iteam : ";
    cin>>sp;
    cout<<endl;
    
    // if( sp > cp)
    // cout<<"profit";
    // if( sp < cp)
    // cout<<"loss";
    // if(sp == cp)
    // cout<<"No loss , no profit";
    
    if( sp > cp)
    cout<<"profit & profit is : "<<(sp-cp);
   else if( sp < cp)
    cout<<"loss & loss is : "<<(cp-sp);
   else
    cout<<"No loss , no profit";
}