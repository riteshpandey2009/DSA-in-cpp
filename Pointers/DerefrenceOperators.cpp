//derefrance operator --> *

#include <iostream>
using namespace std;
int main(){
    int x = 7;
    int* ptr = &x;
    // *ptr = 10;//x=10

    *ptr += 8;
    cout<<x<<endl;
}