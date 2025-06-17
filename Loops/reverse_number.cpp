// reverse a given number and print the result

#include <iostream>
using namespace std;

int main(){

    int newnum = 0;
    int n = 10829;
    
    while (n>0){
        int div = n%10;
        newnum = newnum*10 + div;
        n = n/10;
    }
    cout << "Reverse number is : " << newnum <<endl;
}