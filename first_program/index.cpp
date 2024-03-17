#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    srand(2);
    const int n=5;
    int sh;

    int arr[n];
    int t;

    cout<<"Array:\n| ";
    for (int i = 0; i < n; i++)
    {
        arr[i]=rand()%10;
        cout<<arr[i]<<" | ";
    }

    cout<<"\nEnter the number of shifts: ";
    cin>>sh;

    cout<<"The array is shifted to the right:\n| ";
    for (int i = 0; i < sh; i++)
    {
        t=arr[n-1];
        for (int j = n-2; j >= 0; j--)
            arr[j+1]=arr[j];
        arr[0]=t;
    }
    for (int i = 0; i < n; i++)
        cout<<arr[i]<<" | ";

    cout<<endl;
    
    system("pause>nul");
    return 0;
}