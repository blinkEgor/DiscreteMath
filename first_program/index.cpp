#include <iostream>
using namespace std;

int main() {
    int num,k;
    for(k=1;k<=5;k++){
        cout<<"Please enter a number from 1 to 3: ";
        cin>>num;
        switch(num){
            case 1:cout<<"That's one"<<endl;break;
            case 2:cout<<"That's two"<<endl;break;
            case 3:cout<<"That's three"<<endl;break;
            default:cout<<"I don't know that number"<<endl;
        }
    }

    system("pause>nul");
    return 0;
}