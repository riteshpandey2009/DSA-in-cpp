#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n; 

    // if(n==1) cout<<"Monday";
    // else if(n==2) cout<<"tuesday";
    // else if(n==3) cout<<"wednesday";
    // else if(n==4) cout<<"thrusday";
    // else if(n==5) cout<<"friday";
    // else if(n==6) cout<<"satuday";
    // else if(n==7) cout<<"sunday";
    // else cout<<"Invalids day";

    switch (n)
    {
    case 1:
        cout<<"Monday";
        break;
    
    case 2:
        cout<<"tuesday";
        break;
    
    case 3:
        cout<<"wednesday";
        break;
    
    case 4:
        cout<<"thrusday";
        break;
    
    case 5:
        cout<<"Friday";
        break;
    
    case 6:
        cout<<"saturday";
        break;
    
    case 7:
        cout<<"sunday";
        break;
    
    default:
    cout<<"Invalid day";
    }
}