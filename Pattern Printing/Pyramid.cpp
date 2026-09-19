#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    //Method 1
    // for(int i = 1; i <= n ;i++){
    //     for(int s = 1 ; s <= n-i;s++){
    //         cout<<"  ";
    //     }
    //     for(int j = 1; j <= 2 * i - 1 ;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    //Method 2 (nsp , nst)

    int nsp = n-1 , nst = 1;
        for(int i = 1; i <= n ;i++){
        for(int s = 1 ; s <= nsp;s++){
            cout<<"  ";
        }
        for(int j = 1; j <= nst ;j++){
            cout<<"* ";
        }
        nsp--;
        nst += 2;
        cout<<endl;
    }    
}