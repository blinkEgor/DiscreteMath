#include <iostream>
using namespace std;

int main() {
    int n=10,s=0,k=1;

    while(k<=n){
        s=s+k*k;
        k++;
    }
    cout<<"Sum of square from 1 to "<<n<<": "<<s<<endl;

    system("pause>nul");
    return 0;
}