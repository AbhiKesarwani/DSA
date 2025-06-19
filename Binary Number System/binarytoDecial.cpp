#include <iostream>
using namespace std;

void decimal(int n){
    int pow = 1; // 2^0 2^1 2^2
    int sum =0;
    while(n>0){
        int div = n%10;
        sum += div*pow;
        n=n/10;
        pow*=2;

    }
    cout << sum ;
}

int main(){

    decimal(1010);
    return 0;
}