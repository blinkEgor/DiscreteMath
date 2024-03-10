#include <iostream>
using namespace std;

int main() {
    srand(2);
    const int w=9;
    const int h=5;
    char Lts[h][w];

    for (int i = 0; i < h; i++)
    {
        cout<<"| ";
        for (int j = 0; j < w; j++)
        {
            Lts[i][j]='A'+rand()%25;
            cout<<Lts[i][j]<<" | ";
        }
        cout<<endl;
    }
    

    system("pause>nul");
    return 0;
}