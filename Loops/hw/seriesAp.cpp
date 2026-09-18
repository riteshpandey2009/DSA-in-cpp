#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number of terms : ";
    cin >> n;
    // for(int i = 99 ; i >= 99+(n-1)*(-4) ; i-=4){
    //     cout<<i<<" ";
    // }

    int a =99 , d =-4;
    for (int i = 1; i <= n ; i++)
    {
        cout << a << " ";
        a += d;
    }
}