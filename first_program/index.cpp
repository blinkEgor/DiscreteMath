#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    cout<<"Solving the equation: Ax=B\n";
    double A,B;
    cout<<"A = ";
    cin>>A;
    cout<<"B = ";
    cin>>B;

    try
    {
        if (A!=0)
        {
            throw A;
        }
        if (B!=0)
        {
            throw "No solutions";    
        }
        cout<<"Solution is any number"<<endl;        
    }
    catch(double e)
    {
        cout<<"Silution the equation: "<<B/e<<endl;
    }
    catch(const char* e)
    {
        cout<<e<<endl;
    }
    
    system("pause>nul");
    return 0;
}