#include <iostream>
using namespace std;
int main(){
    
    int n=4;
    for(int i=1;i<=n;i++){
        for(int g=n-i;g>=1;g--){
            cout << " ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout << "*";
        }
        cout << endl;
    }

    for(int i=n;i>=1;i--){
        for(int g=0;g<n-i;g++){
            cout << " ";
        }
        for(int j=2*i-1;j>=1;j--){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}