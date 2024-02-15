#include <iostream>
using namespace std;

int main() {
    int n,k=2;
    cout<<"Enter the natural number: ";
    cin>>n;
    int fib[n+1];
    fib[0]=1;
    fib[1]=1;
    cout<<"Array with Fibonacci numbers: "<<endl;
    cout<<"[";
    if(n<2) {
        cout<<" "<<fib[0];
    }
    if(n>=2) {
        cout<<" "<<fib[0]<<" "<<fib[1];
    }
    while (k<n)
    {
        fib[k]=fib[k-1]+fib[k-2];
        cout<<" "<<fib[k];
        k++;
    }
    cout<<" ]"<<endl;
    
    return 0;
}