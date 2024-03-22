#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    const int n = 5;
    char a[n][n];
    char l[n];
    char c = 'Z';

    srand(2);

    cout <<"Two-dimensional character array:";
    for (int i = 0; i < n; i++)
    {
        cout <<"\n| ";
        for (int j = 0; j < n; j++)
        {
            a[i][j] = (char)'A' + rand()%27;
            cout << a[i][j] <<" | ";
        }
    }

    cout <<"\nSmallest :\n| ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (c > a[j][i])
            {
                c = a[j][i];
            }
            l[i] = c;
        }
        c = 'Z';
        cout<< l[i] <<" | ";
    }

    cout << endl;
    
    system("pause>nul");
    return 0;
}