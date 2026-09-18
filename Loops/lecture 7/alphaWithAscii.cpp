#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter the ascii value of character : ";
    cin>>a>>b;
    for (int i = a; i <= b; i++)
    {
        cout << char(i) << " " << i << endl;
    }
}