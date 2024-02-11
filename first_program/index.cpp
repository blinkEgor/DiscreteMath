#include <iostream>
using namespace std;

int main() {
    int km,mile,m,ft;
    const int ft_in_mile=5280;
    const double km_in_mile=1.609344;

    cout<<"Enter the distance in kilometers and meters."<<endl;
    cout<<"kilometers: ";
    cin>>km;
    cout<<"Meters: ";
    cin>>m;

    double dist_km=km+(double)m/1000;
    double dist_mile=dist_km/km_in_mile;
    mile=(int)dist_mile;
    ft=(int)((dist_mile-mile)*ft_in_mile);

    cout<<"Miles: "<<mile<<" Feets: "<<ft<<endl;
    
    return 0;
}