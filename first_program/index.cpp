#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    srand(2);
    const int h=5;
    const int w=3;
    int arr[h][w];

    cout<<"Array:\n| ";
    for (int j = 0; j < h; j++)
    {
        for (int i = 0; i < w; i++)
        {
            arr[j][i]=rand()%10;
            cout<<arr[j][i]<<" [i="<<i<<"][j="<<j<<"] | ";
        }
        if(j==h-1)
            cout<<endl;
        else
            cout<<"\n| ";
    }
    
    system("pause>nul");
    return 0;
}