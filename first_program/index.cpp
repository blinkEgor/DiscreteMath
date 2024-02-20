#include <iostream>
using namespace std;

int main() {
    int n,s=0,k;
    cout<<"Enter an upper limit for the amount: ";
    cin>>n;
    for(k=1;k<=n;k++){
        s+=k*k;
    }
    cout<<"Sum of squares of numbers from 1 to "<<n<<": "<<s<<endl;

    system("pause>nul");
    return 0;
}