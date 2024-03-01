#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int a,b,n;

    cout<<"Please enter two natural numbers, provided that a >= b"<<endl;
    cout<<"a: ";
    cin>>a;
    cout<<"b: ";
    cin>>b;

    while (a!=b)
    {
        if (a>b)
        {
            a-=b;
        }
        else
        {
            b-=a;
        }
    }

    cout<<"Greatest common divisor: "<<b<<endl;

    system("pause>nul");
    return 0;
}