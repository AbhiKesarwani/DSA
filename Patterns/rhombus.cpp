#include <iostream>
using namespace std;

int main(){

    int n=5;
    for(int i=1;i<=n;i++){
        for(int g=n-i;g>0;g--){
            cout << " ";
        }
        for(int j=1;j<=5;j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;

}