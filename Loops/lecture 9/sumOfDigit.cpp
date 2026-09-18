#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"enter any numbers : ";
    cin>> n;
    int sum = 0;
    if(n == 0 ) cout<<"0";
    while(n != 0){
        sum += n%10;
        n /= 10;
    }
    cout<<"Result : "<<sum;
}