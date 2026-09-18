#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"enter the number: ";
    cin>>n;
    if( n % 3 == 0 || n % 5 == 0 ) cout<<"number is divisible by 5 or 3 ";
    else cout<<"not divisible by 5 & 3 ";
    }