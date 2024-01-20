#include <iostream>
using namespace std;

double getDistMile() {
    double dist;
    cout<<"Indicate the distance in miles: ";
    cin>>dist;
    return dist;
}

double getDistKm(double dist) {
    double km_in_mile=1.609344;
    return dist*km_in_mile;
}

int main() {
    double dist_mile=getDistMile();
    cout<<"Distance in km: "<<getDistKm(dist_mile)<<endl;

    system("pause>nul");
    return 0;
}