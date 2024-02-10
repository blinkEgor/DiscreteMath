#include <iostream>
using namespace std;

int main() {
    int n,k=0;
    cout<<"Write the number: ";
    cin>>n;
    cout<<"Number when divided by 4 leaves remainder 3: "<<endl;
    while (k<n)
    {
        if (k%4==3)
        {
            cout<<" "<<k;
        }
        
        k++;
    }
    
    cout<<endl;
    system("pause>nul");
    return 0;
}