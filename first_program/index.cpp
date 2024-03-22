#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    const int n = 100;
    char a[n]="I will become a creator of games and applications";

    cout<<"Display:\n"<<a<<endl;

    cout<<"How many words:\n";
    int w=1;
    for (int i = 0; a[i]; i++)
    {
        if (a[i] == ' ')
        {
            w++;
        }
    }
    cout<<w<<endl;

    cout<<"How many letters:\n";
    int l[w];
    for (int i = 0, j = 0, k = 0; a[i]; i++)
    {
        if (a[i] != ' ')
        {
            j++;
        }
        if ((a[i] == ' ') || (a[i+1] == '\0'))
        {
            l[k]=j;
            cout<<"| "<<l[k]<<" | ";
            j=0;
            k++;
        }
    }

    cout<<endl;
    
    system("pause>nul");
    return 0;
}