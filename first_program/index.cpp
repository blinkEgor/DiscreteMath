#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n=100;
    double x=1;
    double s=0,q=1,k=0;
    do{
        s+=q;
        k++;
        q*=x/k;
    }while(k<=n);
    cout<<"Calculated value: "<<s<<endl;
    cout<<"Control value: "<<exp(x)<<endl;

    system("pause>nul");
    return 0;
}