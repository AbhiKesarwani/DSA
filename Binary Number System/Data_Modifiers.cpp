#include <iostream>
using namespace std;

int main(){

   /* cout << sizeof(double) << endl;
    cout << sizeof(long double) << endl;
    cout << sizeof(int) << endl;
    cout << sizeof(short int) << endl;
    cout << sizeof(long long int ) << endl; // don't need to write long long int as long long will also work.*/

for(int i =1;i<=5;i++){
    for(int j=5;j>=1;j--){
        cout << i << " ";
    }
    cout << "\n";
}

    return 0;
}