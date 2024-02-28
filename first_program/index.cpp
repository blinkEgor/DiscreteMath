#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    srand(2);
    int nums[12];

    cout<<"Array with random numbers:\n";
    for (int &x: nums)
    {
        x=rand()%10;
        cout<<x<<" ";
    }
    cout<<endl;

    int length=0;

    for (int &x: nums)
    {
        length++;
    }

    cout<<"Array length: "<<length<<endl;
    cout<<"Checking array contents:\n";

    for (int k = 0; k < length; k++)
    {
        cout<<nums[k]<<" ";
    }

    cout<<endl;
    system("pause>nul");
    return 0;
}