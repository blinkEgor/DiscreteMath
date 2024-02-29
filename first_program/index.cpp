#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int n;

    cout<<"Please enter an integer: ";
    cin>>n;

    cout<<"Your number is divisible without a remainder by:\n| ";
    for (int i = 1; i <= n; i++)
    {
        if (n%i==0)
        {
            cout<<i<<" | ";
        }
    }
    cout<<endl;

    system("pause>nul");
    return 0;
}