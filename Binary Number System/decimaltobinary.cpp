#include<iostream>
using namespace std;

void decimal_binary(int n){
    int pow = 1; // 10^0 10^1 10^2
    int sum =0;
    while(n>0){
    int div = n%2;
    n=n/2;
    sum += div*pow;
    pow *= 10;
    }
    cout << sum;
}


int main(){

    decimal_binary(10);

    return 0;
} 