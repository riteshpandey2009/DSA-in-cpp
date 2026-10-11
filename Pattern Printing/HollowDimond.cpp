#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    for (int i = 1; i <= n; i++){
        for (int s = 1; s <= n -i- 1; s++){
            cout << "  ";
        }
        cout<<"*";

        for (int j = i ; j <= 2*i-1; j++){
                cout<<"  ";
        }
        cout<<"*";
        cout << endl;
    }
}