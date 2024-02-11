#include <iostream>
using namespace std;

int main() {
    int n,k=0;
    cout<<"Enter a positive natural number: ";
    cin>>n;
    if (n>=0)
    {
        int bnm[n+1];
        cout<<"Displaying Binomial Coefficients: "<<endl;
        while (k<n)
        {
            bnm[0]=1;
            bnm[k+1]=bnm[k]*(n-k)/(k+1);
            
            cout<<" "<<bnm[k];
            k++;
        }
        
        cout<<" "<<bnm[k];
    }
    else
    {
        cout<<n<<" is not a positive natural number!";
    }
    
    return 0;
}