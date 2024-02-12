#include <iostream>
using namespace std;

double getKm_h(double m_s){
    double km_h=m_s*3.6;
    int ceil=km_h*100;
    km_h=(double)ceil/100;
    return km_h;
}

int main() {
    double km_h,m_s;

    cout<<"Enter speed in m/s: ";
    cin>>m_s;
    km_h=getKm_h(m_s);
    cout<<"km/h: "<<km_h;
    
    return 0;
}