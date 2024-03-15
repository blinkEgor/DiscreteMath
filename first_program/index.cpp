#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    srand(2);
    const int n=5;
    int s=0;
    int**a=new int*[n];

    for (int i = 0; i < n; i++)
    {
        a[i]=new int[n];
    }
    
    cout<<"Matrix:";
    for (int i = 0; i < n; i++)
    {
        cout<<"\n| ";
        for (int j = 0; j < n; j++)
        {
            a[i][j]=rand()%10;
            cout<<a[i][j]<<" | ";
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j || j==n-i-1)
				s += a[i][j];
        }
    }

    cout<<"\nSum = "<<s<<endl;

    for (int i = 0; i < n; i++)
    {
        delete[]a[i];
    }
    delete[]a;
    
    system("pause>nul");
    return 0;
}