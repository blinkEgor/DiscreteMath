#include <iostream>
using namespace std;

double getFathoms(double a){
    return a/3;
}
double getMeters(double f){
    return f*2.16;
}

int main() {
    int fathoms,meters,centimeters;
    double arshins,dFathoms,dMeters;

    cout<<"Enter distance. "<<endl;
    cout<<"Fathoms: ";
    cin>>fathoms;
    cout<<"Arshins: ";
    cin>>arshins;

    dFathoms=fathoms+getFathoms(arshins);
    dMeters=getMeters(dFathoms);
    meters=getMeters(dFathoms);

    centimeters=(double)(dMeters-meters)*100;

    cout<<"Meters: "<<meters<<endl;
    cout<<"Centimeters: "<<centimeters;
    
    return 0;
}