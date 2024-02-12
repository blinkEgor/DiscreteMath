#include <iostream>
using namespace std;

int main() {
    int n,k=0;
    cout<<"Enter the natural number: ";
    cin>>n;
    int enn[n+1];
    enn[0]=0;
    cout<<"Array with even natural numbers: "<<endl;
    cout<<"[";
    while (k<n)
    {
        enn[k+1]=enn[k]+2;
        cout<<" "<<enn[k+1];
        k++;
    }
    cout<<" ]"<<endl;
    
    return 0;
}