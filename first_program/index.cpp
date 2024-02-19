#include <iostream>
using namespace std;

int main() {
    int n,k=0;
    cout<<"Enter the natural number: ";
    cin>>n;
    int num[n+1];
    cout<<"Array with ordinal numbers where odd numbers are squared: "<<endl;
    cout<<"[";
    while (k<n)
    {
        if(k%2){
            num[k]=k*k;
        }else{
            num[k]=k;
        }
        cout<<" "<<num[k];
        k++;
    }
    cout<<" ]"<<endl;
    
    return 0;
}