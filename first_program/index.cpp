#include <iostream>
using namespace std;

double getMile(double km){
    const double km_in_one_mile=1.609344;
    return km/km_in_one_mile;
}

int main() {
    double km,mile;

    cout<<"Enter the distance in kilometers: ";
    cin>>km;
    mile=getMile(km);
    cout<<km<<" kilometers = "<<mile<<" miles "<<endl;
    
    return 0;
}