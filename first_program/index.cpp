#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main() {
    int n=10;
    srand(2);
    int arr[n];
    int i,k,s;

    cout<<"An array of random numbers."<<endl;

    cout<<"Array:\n|";
    for (k = 0; k < n; k++)
    {
        arr[k]=rand()%10;
        cout<<arr[k]<<" | ";
    }
    
    for (i = 1; i <= n/2; i++)
    {
        s=arr[i-1];
        arr[i-1]=arr[n-i];
        arr[n-i]=s;
    }
    
    cout<<"\nReverse array:\n|";
    for (k = 0; k < n; k++)
    {
        cout<<arr[k]<<" | ";
    }
    cout<<endl;

    system("pause>nul");
    return 0;
}