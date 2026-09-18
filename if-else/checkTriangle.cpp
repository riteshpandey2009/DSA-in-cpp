#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cout<<"enter the lenght of sides";
    cin>>a>>b>>c;
    if( a + b > c and b+c>a and c + a > b) cout<<"valid triangle";
    else cout<<"Invalid Triangle";
    }