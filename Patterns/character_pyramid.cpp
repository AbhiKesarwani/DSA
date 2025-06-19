#include <iostream>
using namespace std;

int main(){

    int n=1;
    for(int i=0;i<4;i++){
        for(int j=0;j<=i;j++){
            cout << char(64+n) << " ";
            n+=1;
        }
        cout << endl;
    }

    return 0;
}