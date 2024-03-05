#include <iostream>
using namespace std;

int main() {
    char symb;
    int num;
    char* p;
    int* q;

    p=&symb;
    q=&num;

    *p='A';
    *q=100;

    cout<<"symb = "<<symb<<endl;
    cout<<"num = "<<num<<endl;

    system("pause>nul");
    return 0;
}