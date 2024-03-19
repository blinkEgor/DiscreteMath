#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    const int m=5;
    const int n=8;
    const int l=3;

    int**a=new int*[m];
    int**b=new int*[n];
    int**c=new int*[m];

    for(int i=0;i<m;i++)
        a[i]=new int[n];
    for(int i=0;i<n;i++)
        b[i]=new int[l];
    for(int i=0;i<m;i++)
        c[i]=new int[l];

    srand(2);

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            a[i][j]=rand()%10;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<l;j++)
            b[i][j]=rand()%10;
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<l;j++)
        {
            c[i][j]=0;
            for(int k=0;k<n;k++)
                c[i][j]+=a[i][k]*b[k][j];
        }
    }

    cout<<"Matrix A:";
    for(int i=0;i<m;i++)
    {
        cout<<"\n| ";
        for(int j=0;j<n;j++)
            cout<<a[i][j]<<" | ";
    }
    cout<<"\nMatrix B:";
    for(int i=0;i<n;i++)
    {
        cout<<"\n| ";
        for(int j=0;j<l;j++)
            cout<<b[i][j]<<" | ";
    }
    cout<<"\nMatrix C:";
    for(int i=0;i<m;i++)
    {
        cout<<"\n| ";
        for(int j=0;j<l;j++)
            cout<<c[i][j]<<" | ";
    }

    for(int i=0;i<m;i++)
        delete[]a[i];
    for(int i=0;i<n;i++)
        delete[]b[i];
    for(int i=0;i<m;i++)
        delete[]c[i];
    delete[]a;
    delete[]b;
    delete[]c;
    
    system("pause>nul");
    return 0;
}