#include <iostream>
using namespace std;

int main() {
    int n,k=0;
    cout<<"Enter the natural number: ";
    cin>>n;
    int onn[n+1];
    onn[0]=1;
    cout<<"Array with even natural numbers: "<<endl;
    cout<<"[";
    while (k<n)
    {
        onn[k+1]=onn[k]+2;
        cout<<" "<<onn[k];
        k++;
    }
    cout<<" ]"<<endl;
    
    return 0;
}