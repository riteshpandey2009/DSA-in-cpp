#include<iostream>
using namespace std;
void fun(int x , float y){
    cout<<"good morning"<<endl;
}
void fun(float x , int y){
    cout<<"Kasise ho"<<endl;
}
int main(){
    fun(2.0,5);
    fun(2 , 5.6);
}