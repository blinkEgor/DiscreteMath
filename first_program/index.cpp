#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main() {
    int n=10;
    srand(2);
    int arr[n];
    int i,k,j,s;

    cout<<"An array of random numbers."<<endl;

    cout<<"Array:\n|";
    for (k = 0; k < n; k++)
    {
        arr[k]=rand()%10;
        cout<<arr[k]<<" | ";
    }
    
    for (i = 1; i < n; i++)
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
    
    for (i = 1; i < n; i++)
    {
        for (j = 0; j < n-i; j++)
        {
            if ((arr[j]%2!=0)&&(arr[j+1]%2==0))
            {                
                s=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=s;
            }
            if ((arr[j]%2!=0)&&(arr[j+1]%2!=0))
            {
                if (arr[j]>arr[j+1])
                {
                    s=arr[j+1];
                    arr[j+1]=arr[j];
                    arr[j]=s;
                }
            }
            
        }
    }
    
    cout<<"\nSorted array:\n|";
    for (k = 0; k < n; k++)
    {
        cout<<arr[k]<<" | ";
    }
    cout<<endl;

    system("pause>nul");
    return 0;
}