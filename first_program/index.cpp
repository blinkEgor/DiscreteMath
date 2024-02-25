#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int num;
    srand(2);
    for(int k=1;k<=5;k++){
        cout<<"Pleace, enter numbers from 1 to 3: ";
        cin>>num;
        if(num==1){
            cout<<"That's one"<<endl;
        }
        else{
            if(num==2){
                cout<<"That's two"<<endl;
            }
            else{
                if(num==3){
                    cout<<"That's three"<<endl;
                }
                else{
                    cout<<"I don't know that number"<<endl;
                }
            }
        }
    }

    system("pause>nul");
    return 0;
}