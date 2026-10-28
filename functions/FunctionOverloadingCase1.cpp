#include<iostream>
using namespace std;
void fun(){
    cout<<"hello"<<endl;
}
void fun(int x){
    cout<<"good morning"<<endl;
}
void fun(int x , int y){
    cout<<"Kasise ho"<<endl;
}
int main(){
    fun();
    fun(2);
    fun(2,5);
}