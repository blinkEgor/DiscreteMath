#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main() {
    int n=100;
    double x=1,s=0,q=1,k=0;

    do
    {
        s+=q;
        k++;
        q*=x/k;
    } while (k<=n);
    
    cout<<s<<endl;
    cout<<exp(x)<<endl;

    system("pause>nul");
    return 0;
}