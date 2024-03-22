#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    const int n=10;
    char a[n];
    char b[n];

    cout<<"Character array:\n| ";
    for(int i=0; i<n; i++)
    {
        a[i] = (char)'A' + i;
        cout << a[i] <<" | ";
    }
    cout << endl;

    cout <<"Reversible:\n| ";
    for (int i=1; i<=n; i++)
    {
        b[i] = a[n-i];
        cout << b[i] <<" | ";
    }
    cout << endl;
    
    system("pause>nul");
    return 0;
}