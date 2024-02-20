#include <iostream>
using namespace std;

int main() {
    int n,s=0,k=1;
    cout<<"Enter an upper limit for the amount: ";
    cin>>n;
    for(;k<=n;){
        s+=k*k;
        k++;
    }
    cout<<"Sum of squares of numbers from 1 to "<<n<<": "<<s<<endl;

    system("pause>nul");
    return 0;
}