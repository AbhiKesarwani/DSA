// condition for 1 is not included

#include <iostream>
#include <cmath>
using namespace std;

void prime(int n){
    int count = 0;
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0){
            count++;
            break;
        }
    }
    if (count == 0){
        cout << n << " is prime number.";
    }
    else{
        cout << n << " is not prime number.";
    }
}

int main(){

    int n;
    cout << "Enter number : ";
    cin >> n;
    prime(n);
    return 0;
}