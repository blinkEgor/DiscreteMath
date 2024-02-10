#include <iostream>
using namespace std;

int main() {
    int n,k=2;
    cout<<"Write the number: ";
    cin>>n;
    int fib[n+1];
    fib[0]=0;
    fib[1]=1;
    cout<<"Fibonacci sequence: "<<endl;
    cout<<" "<<fib[0]<<" "<<fib[1];
    while (k<n)
    {
        fib[k]=fib[k-1]+fib[k-2];
        cout<<" "<<fib[k];
        k++;
    }
    
    cout<<endl;
    system("pause>nul");
    return 0;
}