#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main() {
    int A,B,C;
    double D,x;

    cout<<"Ax**2 + Bx + C = 0"<<endl;
    cout<<"A = ";
    cin>>A;
    cout<<"B = ";
    cin>>B;
    cout<<"C = ";
    cin>>C;

    if (A!=0)
    {
        D=(double)B*B-4*A*C;
        cout<<"D = "<<D<<endl;

        if (D==0)
        {
            x=(double)-B/( 2*A );
            cout<<"x = "<<x<<endl;
        }
        if (D>0)
        {
            x=(double)( -B-sqrt(D) )/( 2*A );
            cout<<"1.x = "<<x<<endl;
            x=(double)( -B+sqrt(D) )/( 2*A );
            cout<<"2.x = "<<x<<endl;
        }
        else
        {
            cout<<"No solution!"<<endl;
        }
    }
    else
    {
        cout<<"No solution!"<<endl;
    }

    system("pause>nul");
    return 0;
}