#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    const int n=5;
    int mat[n][n];

    cout<<"Matrix:\n| ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if((i==j)||
                (i+j==n-1))
            {
                mat[i][j]=1;
            }
            else
                mat[i][j]=0;
            cout<<mat[i][j]<<" | ";
        }
        if(i==n-1)
            cout<<endl;
        else
            cout<<"\n| ";
    }
    
    system("pause>nul");
    return 0;
}