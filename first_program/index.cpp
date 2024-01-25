#include <iostream>
using namespace std;

int main() {
    int n,s=0;
    cout<<"Upper limit of the amount: ";
    cin>>n;

    if(n>0) {
        while(n){
            s+=n*n;
            n--;
        }
        cout<<"Sum of square: "<<s<<endl;
    }else{
        cout<<"Invalid value specified"<<endl;
    }

    system("pause>nul");
    return 0;
}