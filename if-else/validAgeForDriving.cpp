#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age : ";
    cin>>age; 

    if(age < 18)
    cout<<("not valid for driving");
    else
    cout<<("valid for driving");
}