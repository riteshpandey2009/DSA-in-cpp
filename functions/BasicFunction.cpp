#include <iostream>
using namespace std;
void sumit(){
    cout<<"hii sumit "<<endl;
}
void arjun(){
    sumit();
    cout<<"hii arjun "<<endl;

}
void anu(){
    cout<<"hii anu "<<endl;
    arjun();
}
int main(){
   anu();

}