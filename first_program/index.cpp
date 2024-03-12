#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    const int n=10;
    int s=0;
    int arr[n];
    srand(2);

    cout<<"Array:\n|";
    for (int i = 0; i < n; i++)
    {
        arr[i]=rand()%10;
        cout<<arr[i]<<" | ";
    }
    
    for (int i = 0; i < n; i++)
    {
        s+=arr[i]*arr[i];
    }
    cout<<endl<<"Sum of array squares: "<<s<<endl;
    
    system("pause>nul");
    return 0;
}