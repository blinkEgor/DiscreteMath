#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    const int h=5;
    const int w=10;
    int two_dim_arr[h][w];
    int s=0;

    srand(2);

    cout<<"Two-dimensional array:";
    for (int i = 0; i < h; i++)
    {
        cout<<endl<<"| ";
        for (int j = 0; j < w; j++)
        {
            two_dim_arr[i][j]=rand()%10;
            cout<<two_dim_arr[i][j]<<" | ";
        }
    }

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            s+=two_dim_arr[i][j]*two_dim_arr[i][j];
        }
    }
    cout<<endl<<"Sum of squares of a two-dimensional array: "<<s<<endl;
    
    system("pause>nul");
    return 0;
}