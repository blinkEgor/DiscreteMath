#include <iostream>
using namespace std;

int main() {
    char str[100]="Programming in C++";
    cout<<str<<endl;

    for (int i = 0; i < str[i]; i++)
    {
        cout<<str[i]<<"_";
    }
    cout<<endl;

    for (char* p = str; *p; p++)
    {
        cout<<p<<endl;
    }

    str[13]='\0';
    cout<<str<<endl;
    cout<<str+14<<endl;
    cout<<"One Two Three"+4<<endl;
    
    const char*q="One Two Three"+8;
    cout<<q[0]<<endl;
    cout<<q<<endl;

    system("pause>nul");
    return 0;
}