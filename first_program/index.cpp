#include <iostream>
using namespace std;

double getM_s(double km_h){
    double m_s=km_h/3.6;
    int ceil=m_s*100;
    m_s=(double)ceil/100;
    return m_s;
}

int main() {
    double km_h,m_s;

    cout<<"Enter speed in km/h: ";
    cin>>km_h;
    m_s=getM_s(km_h);
    cout<<"m/s: "<<m_s;
    
    return 0;
}