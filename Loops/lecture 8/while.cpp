// comparison between for and while loop

#include <iostream>
using namespace std;
int main()
{
    // for(int i = 1 ; i <= 10 ;i++){
    //     cout<<i<<" ";
    // }

    // another method for --> for loop

    int i = 1;
    for (; i <= 10;)
    {
        cout << i << " ";
        i++;
    }

    int i = 1;
    while(i <= 10){
        cout<<i<<" ";
        i++;
    }
}