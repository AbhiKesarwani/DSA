#include <iostream>
using namespace std;

void sum(int a, int b){
    cout << a+b <<endl;
}

void sum(double a, double b){
    cout << a+b <<endl;
}

void sum(int a, int b, int c){
    cout << a+b+c <<endl;
}

int main(){

    sum(2,3);
    sum(2.5,1.5);
    sum(3,2,1);

    return 0;
}