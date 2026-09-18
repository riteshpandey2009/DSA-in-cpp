#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number of terms : ";
    cin>>n;
    // for(int i = 2; i<=2+(n-1)*3 ; i+=3){
    //     cout<<i<<" ";
    // }

    // for(int i = 1; i <= n ; i ++){
    //     cout<<3*i - 1<<" ";
    // }

    int a = 3 , d = 4;
    for(int i = 1; i <= n ; i ++){
        cout<<a<<" ";
        a += d;
    }
}