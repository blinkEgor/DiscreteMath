#include <iostream>
using namespace std;

int main() {
    int n=10,k=0;
    int num[n+1];
    while(k<n){
        cout<<"Enter a number to fill the array: ";
        cin>>num[k];
        k++;
    }
    k=0;
    cout<<"Array with entered numbers:"<<endl;
    cout<<"[";
    while (k<n)
    {
        cout<<" "<<num[k];
        k++;
    }
    cout<<" ]"<<endl;
    
    return 0;
}