#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main() {
    int a,b,c,n=100;

    for (int i = 0; i < n; i++)
    {
        a=(i+1)*(i+1);
        b=(i+2)*(i+2);
        c=(i+3)*(i+3);
        if (a+b==c)
        {
            cout<<i+1<<". "<<sqrt(a)<<"**2 + "<<sqrt(b)<<"**2 = "<<sqrt(c)<<"**2"<<endl;
        }
        // else
        // {
        //     cout<<i+1<<". No!"<<endl;
        // }
    }
    

    system("pause>nul");
    return 0;
}