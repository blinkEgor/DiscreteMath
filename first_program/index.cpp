#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int n=10,s=0,k=1;

    start: // label

    s+=k*k;
    if(k<n)
    {
        k++;
        goto start; // go to label "start"
    }

    cout<<"sum of squares of numbers from 1 to "<<n<<": "<<s<<endl;
       
    system("pause>nul");
    return 0;
}