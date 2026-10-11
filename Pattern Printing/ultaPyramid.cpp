#include<iostream>
using namespace std;
int main(){
    int n ; 
    cout<<"enter the number : ";
    cin>>n;
    for(int i = 1; i <= n; i++){
        for(int s = 1 ; s <=i ; s++){
            cout<<"  ";
        }
        for(int j = 2*n-i;j>=i ; j--){
            cout<<"* ";
        }
        cout<<endl;
    }
}