#include<iostream>
using namespace std;

int main(){

    int n=10;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<< "*";
        }
        for(int g=1;g<=2*(n-i);g++){
            cout << " ";
        }
        for(int j=1;j<=i;j++){
            cout<< "*";
        }
        cout << endl;
    }
        for(int i=10;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<< "*";
        }
        for(int g=1;g<=2*(n-i);g++){
            cout << " ";
        }
        for(int j=1;j<=i;j++){
            cout<< "*";
        }
        cout << endl;
    }
    return 0;

}