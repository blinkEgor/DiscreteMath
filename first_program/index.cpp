#include <iostream>
using namespace std;

int main() {
    int*size;
    size=new int;

    cout<<"Please enter array size: ";
    cin>>*size;

    char* symbs;

    symbs=new char[*size];

    for (int i = 0; i < *size; i++)
    {
        symbs[i]='a'+i;
        cout<<symbs[i]<<" ";
    }
    
    delete []symbs;
    delete size;

    cout<<"\nThe array and variable are deleted.\n";

    system("pause>nul");
    return 0;
}