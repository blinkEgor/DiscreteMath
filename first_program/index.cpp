#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main() {
    int x;

    while (x<1||x>10)
    {
        cout<<"Please enter a number from 1 to 10: ";
        cin>>x;
    }
    
    switch (x)
    {
    case 1:
    case 2:
    case 3:
    case 5:
    case 8:
        cout<<"Number "<<x<<" is the Fibonacci number."<<endl;
        break;
    default:
        cout<<"Number "<<x<<" isn't the Fibonacci number."<<endl;
        break;
    }

    system("pause>nul");
    return 0;
}