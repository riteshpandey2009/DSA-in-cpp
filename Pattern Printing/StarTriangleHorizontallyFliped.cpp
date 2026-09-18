#include <iostream>
using namespace std;
int main(){
    int n ;
    cout<<"enter the number : ";
    cin>>n;
    // for(int i = 0 ; i<=n ; i++){
    //     for(int j = 1 ; j<=n+1-i ; j++){
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }
    for(int i = n ; i > 0 ; i--){
        for(int j = 1 ; j <=i ; j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}