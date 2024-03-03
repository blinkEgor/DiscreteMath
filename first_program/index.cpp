#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main() {
    int x;

    start:

    cout<<"Please enter your number: ";
    cin>>x;

    if (x>0)
    {
        cout<<"Your number is divisible by\n| ";

        for (int i = 1; i <= x; i++)
        {
            if (x%i==0)
            {
                cout<<i<<" | ";
            }
        }
    }
    else
    {
        cout<<"Enter an integer greater than zero"<<endl;
        goto start;
    }

    cout<<endl;

    system("pause>nul");
    return 0;
}