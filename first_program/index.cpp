#include <iostream>
using namespace std;

int main() {
    double fathoms,meters;
    const double in_fathoms_of_meters=2.16;

    cout<<"Enter distance in fathoms: ";
    cin>>fathoms;

    meters=fathoms*in_fathoms_of_meters;
    cout<<"Meters: "<<meters;
    
    return 0;
}