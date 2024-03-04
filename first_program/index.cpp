#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main() {
    int n=10;
    srand(2);
    int arr[n];
    int i,j,k,s;

    cout<<"An array of random numbers."<<endl;

    cout<<"Before sorting:\n|";
    for (k = 0; k < n; k++)
    {
        arr[k]=rand()%10;
        cout<<arr[k]<<" | ";
    }
    
    for (i = 1; i <= n-1; i++)
    {
        for (j = 0; j < n-i; j++)
        {
            if (arr[j]<arr[j+1])
            {
                s=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=s;
            }        
        }
    }
    
    cout<<"\nAfter sorting:\n|";
    for (k = 0; k < n; k++)
    {
        cout<<arr[k]<<" | ";
    }
    cout<<endl;

    system("pause>nul");
    return 0;
}