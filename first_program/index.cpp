#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int s=0,n,p=-1;

    cout<<"Please enter the number of odd natural numbers: ";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        p+=2;
        s+=p;
    }
    
    cout<<"Sum of odd natural numbers from 1 to "<<p<<": "<<s<<endl;
       
    system("pause>nul");
    return 0;
}