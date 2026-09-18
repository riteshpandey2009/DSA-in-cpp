#include<iostream>
using namespace std;
int main(){
    int a , b;
    cout<<"Enter a base : ";
    cin>>a;
    cout<<"Enter a exponent : ";
    cin>>b;
    int prd = 1;
    // for(int i = b; i > 0 ; i--){
    //     prd *= a ;
    // }

    while(b > 0){
        prd *=a ;
        if( a == 1) break;        
        b--; 
    }    
    if(a == 0 && b == 0){
        cout<<"indeterminate form";
    }
    
    else {cout<<prd;}
}