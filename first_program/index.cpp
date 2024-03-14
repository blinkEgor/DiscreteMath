#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    const int n=5;
    int arr[n][n];

    srand(2);

    cout<<"Matrix:";
    for (int i = 0; i < n; i++)
    {
        cout<<"\n| ";
        for (int j = 0; j < n; j++)
        {
            arr[i][j]=rand()%10;
            cout<<arr[i][j]<<" | ";
        }
    }

    cout<<"\nTransposed matrix:";
    for (int i = 0; i < n; i++)
    {
        cout<<"\n| ";
        for (int j = 0; j < n; j++)
        {
            cout<<arr[j][i]<<" | ";
        }
    }
    cout<<endl;
    
    system("pause>nul");
    return 0;
}