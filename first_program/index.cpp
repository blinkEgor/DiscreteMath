#include <iostream>
using namespace std;

int main() {
    int n,k=0;
    cout<<"Enter the natural number: ";
    cin>>n;
    int pot[n+1];
    cout<<"Array with powers of two: "<<endl;
    cout<<"[";
    while (k<n)
    {
        pot[k]=2;
        int i=1;
        while(i<k){
            pot[k]*=2;   
            i++;
        }
        if(k==0){
            pot[k]=1;
        }
        cout<<" "<<pot[k];
        k++;
    }
    cout<<" ]"<<endl;
    
    return 0;
}