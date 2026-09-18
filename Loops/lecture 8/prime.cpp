#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout << "enter a number : ";
    cin >> n;
    // int count = 0;

    // method 1

    //   for (int i = 1; i <= n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         count++;
    //
    //     }
    // }
    // if(count == 1){
    //     cout<<"Neither prime nor composite";
    // }
    // else if(count == 2){
    //     cout<<"prime number";
    // }
    // else{
    //     cout<<"composite number";
    // }

    // method 2
    // bool flag = false; // false means factor mil gya

    //     for (int i = 2; i <= n - 1; i++)
    //     {
    //         if (n % i == 0)
    //         { flag = true;
    //             break;
    //         }
    //     }
    //     if( n == 1 || n == 0 ){
    //         cout<<"nither prime nor composite";
    //     }
    //    else if (flag == true)
    //     {
    //         cout << "composite number";
    //     }
    //     else{
    //         cout << "prime number";
    //     }

    // method 3
    bool flag = false; // false means factor mil gya

        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            { flag = true;
                break;
            }
        }
        if( n == 1 || n == 0 ){
            cout<<"nither prime nor composite";
        }
       else if (flag == true)
        {
            cout << "composite number";
        }
        else{
            cout << "prime number";
        }
}