#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter the number : ";
    cin >> a;
    if (a % 5 == 0 && a % 3 == 0)
        cout << "anuj";
    else if (a % 5 == 0)
        cout << "kartikey";
    else if (a % 3 == 0)
        cout << "sakshi";
    else
        cout << "hitesh";
}