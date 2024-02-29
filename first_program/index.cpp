#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int s=0,n,p=-2,i=0;

    cout<<"Please enter the number of even natural numbers: ";
    cin>>n;

    do
    {
        p+=2;
        s+=p;
        i++;
        // cout<<"p = "<<p;
        // cout<<"; s = "<<s<<endl;
    } while (i<n);
    
    
    cout<<"Sum of even natural numbers from 0 to "<<p<<": "<<s<<endl;
       
    system("pause>nul");
    return 0;
}