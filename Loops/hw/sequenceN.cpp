#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int j = 1;
    for(int i = n ; i>=1 ; i--){
        cout<<j<<endl;
        cout<<i<<endl;
        j ++;
    }
}