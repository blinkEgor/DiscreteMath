#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    const int n=10;
    int s=0;
    int arr_one[n];
    int arr_two[n];

    srand(2);

    cout<<endl<<"Array one:\n|";
    for (int i = 0; i < n; i++)
    {
        arr_one[i]=rand()%10;
        cout<<arr_one[i]<<" | ";
    }

    cout<<endl<<"Array two:\n|";
    for (int i = 0; i < n; i++)
    {
        arr_two[i]=rand()%10;
        cout<<arr_two[i]<<" | ";
    }

    cout<<endl<<"Sum of pairwise products of an array: ";
    for (int i = 0; i < n; i++)
    {
        s+=arr_one[i]*arr_two[i];
    }
    cout<<s<<endl;
    
    system("pause>nul");
    return 0;
}