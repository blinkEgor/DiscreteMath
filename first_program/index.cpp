#include <iostream>
using namespace std;

int main() {
    const int n=10;
    int arr[n+1];
    int k=0;
    while (k<10)
    {
        arr[k+1]=k+1;
        cout<<" "<<arr[k+1];
        k++;
    }
    cout<<endl;
    system("pause>nul");
    return 0;
}