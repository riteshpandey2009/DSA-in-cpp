#include <iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter the number : ";
    cin>>n;
    //Method 1
    // for(int i = 1 ; i <= n ; i++){
    //     for(int j = 1 ; j <=n ; j++){    
    //         if(i + j <= n ){
    //             cout<<"  ";
    //         }
    //         else{
    //             cout<<"* ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // Method 2
    for(int i = 1 ; i <= n ; i++){
        for(int s = 1 ; s <= n-i ; s++){
            cout<<"  ";
        }
        for(int j = 1 ; j <= i ; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}