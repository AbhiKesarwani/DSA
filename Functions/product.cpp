#include <iostream>
using namespace std;

int product(int a, int b){
    return a*b;
}

int main(){

    int prod = product(2,4);
    cout << "Product of given number is : " << prod;

    return 0;
}