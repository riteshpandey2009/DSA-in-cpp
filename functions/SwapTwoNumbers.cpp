#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter the number : ";
    cin >> a >> b;
    cout << "before Swapping: ";
    cout << a << " " << b << endl;

    // Method -> using 3rd variable
    //  int temp;
    //  temp = a;
    //  a = b;
    //  b = temp;
    //  cout<<"After swapping : ";
    //  cout<<a<<" "<<b<<endl;

    // Method -> maths
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "After swapping : ";
    cout << a << " " << b << endl;

}