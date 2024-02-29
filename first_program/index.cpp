#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int s=0,n,p=-2,i=0;

    start:

    cout<<"Please enter a number of even natural numbers: ";
    cin>>n;

    if (n>0)
    {
        do
        {
            p+=2;
            s+=p;
            i++;
        } while (i<n);
        
        cout<<"Sum of even natural numbers from 0 to "<<p<<": "<<s<<endl;
    }
    if (n==0)
    {
        cout<<"The amount is undefined or equal to zero"<<endl;
        goto start;
    }
    if (n<0)
    {
        cout<<"Plese enter a positive number"<<endl;
        goto start;
    }
    
    system("pause>nul");
    return 0;
}