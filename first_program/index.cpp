#include <iostream>
using namespace std;

int main() {
    int n,s=0;
    cout<<"Upper limit of the amount: ";
    cin>>n;

    while(n){
        s+=n*n;
        n--;
    }
    cout<<"Sum of square: "<<s<<endl;

    system("pause>nul");
    return 0;
}