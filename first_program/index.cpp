#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int num;
    srand(2);
    for(int k=1;k<=10;k++){
        num=2+rand()%7;
        switch(num){
            case 3:
            case 6:
                cout<<num<<": the number is divisible by three"<<endl;
                break;
            case 2:
            case 4:
            case 8:
                cout<<num<<": power of two"<<endl;
                break;
            case 5:
                cout<<num<<": five"<<endl;
                break;
            case 7:
                cout<<num<<": seven"<<endl;
                break;
        }
    }

    system("pause>nul");
    return 0;
}