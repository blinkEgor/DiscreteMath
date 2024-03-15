#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    srand(2);
    const int n=5;

    int l,s;
    int**p_l=new int*[n];
    int**p_s=new int*[n];

    int**a=new int*[n];

    for (int i = 0; i < n; i++)
    {
        a[i]=new int[n];
        p_l[i]=new int[n];
        p_s[i]=new int[n];
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

    l=a[0][0];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (l<a[i][j])
                l=a[i][j];
        }
    }
    cout<<"\nLargest: "<<l<<endl;
    cout<<"Position:";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (l==a[i][j])
                cout<<" ["<<i<<"]"<<"["<<j<<"]";
        }    
    }
    
    s=a[0][0];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (s>a[i][j])
                s=a[i][j];
        }
    }
    cout<<"\nSmallest: "<<s<<endl;
    cout<<"Position:";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (s==a[i][j])
                cout<<" ["<<i<<"]"<<"["<<j<<"]";
        }    
    }
    cout<<endl;
    
    for (int i = 0; i < n; i++)
    {
        delete[]a[i];
        delete[]p_l[i];
        delete[]p_s[i];
    }
    delete[]a;
    delete[]p_l;
    delete[]p_s;
    
    system("pause>nul");
    return 0;
}