#include <iostream>
using namespace std;

int main() {
    int n,k=0;
    cout<<"Enter the natural number: ";
    cin>>n;
    int snn[n+1];
    cout<<"Array with square of natural numbers: "<<endl;
    cout<<"[";
    while (k<n)
    {
        snn[k]=(k+1)*(k+1);
        cout<<" "<<snn[k];
        k++;
    }
    cout<<" ]"<<endl;
    
    return 0;
}