#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    srand(2);

    int i,j;
    int n = rand()% 10;
    int *a = new int [n];

    cout<<"Array:\n| ";
    for (i=0, j=n-1; i < n; i++, j--)
    {
        if (i < n-i)
        {
            a[i] = i+1;
            a[j] = i+1;   
        }
        cout<<a[i]<<" | ";
    }
    
    delete [] a;

    cout<<endl;
    
    system("pause>nul");
    return 0;
}