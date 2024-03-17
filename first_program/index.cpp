#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    srand(2);
    const int h=5;
    const int w=8;
    int arr[h][w];

    cout<<"Array:\n| ";
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            arr[i][j]=rand()%10;
            cout<<arr[i][j]<<" | ";
        }
        if(i==h-1)
            cout<<endl;
        else
            cout<<"\n| ";
    }
    
    system("pause>nul");
    return 0;
}