#include <iostream>
#include <cmath>
using namespace std;
int x = 7 ; //Global Variable
void fun(){
   x = 23;
}
int main(){
    cout<<x<<endl;
    fun();
    cout<<x<<endl;
}