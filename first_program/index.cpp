#include <iostream>
using namespace std;

int main() {
    const int ft_in_mile = 5280;
    const double km_in_mile = 1.609344;
    int d_mile, d_ft, d_km, d_m;

    cout<<"Distance in miles and feet."<<endl;
    cout<<"Miles: ";
    cin>>d_mile;
    cout<<"Feet: ";
    cin>>d_ft;

    double dist_mile = d_mile + (double)d_ft / ft_in_mile;
    double dist_km = dist_mile * km_in_mile;
    d_km = (int)dist_km;
    d_m = (int)((dist_km - d_km) * 1000);

    cout<<"Distance in kilometers and meters."<<endl;
    cout<<"Kilometers: "<<d_km<<endl;
    cout<<"Meters: "<<d_m<<endl;

    system("pause>nul");
    return 0;
}