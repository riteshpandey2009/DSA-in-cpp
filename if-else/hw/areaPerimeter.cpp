#include<iostream>
using namespace std;
int main(){
    int l , b;
    cout<<"enter the lenght of rectangle : ";
    cin>>l;
    cout<<"enter the breadth of the rectangle : ";
    cin>>b;
    int area , pm;
    area = l * b;
    pm = 2*(l + b);
    if(area > pm)
    cout<<"area is greater than perimeter";
    else
    cout<<"perimeter is greater than  area";
}