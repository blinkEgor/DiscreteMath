#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main() {
    int a,b;
    double x;

    cout<<"A: ";
    cin>>a;
    cout<<"B: ";
    cin>>b;

    if (a!=0)
    {
        x=(double)b/a;
        cout<<"Answer: "<<x<<endl;
    }
    if (a==0)
    {
        if (b!=0)
        {
            cout<<"No solutions!"<<endl;
        }
        else
        {
            cout<<"Any number"<<endl;
        }
    }

    system("pause>nul");
    return 0;
}