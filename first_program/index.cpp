#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    const char*str[3]={{"red"},{"yellow"},{"green"}};

    for (int i = 0; i < 3; i++)
    {
        cout<<str[i]<<endl;
    }

    cout<<str[2][0]<<str[2][1]<<str[2][2]<<str[1][0]<<endl;
    
    system("pause>nul");
    return 0;
}