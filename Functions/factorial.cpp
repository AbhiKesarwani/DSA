#include <iostream>
using namespace std;

int fact(int n){
    int a = n;
    int multi = 1;
    while (n>0){
        multi *=n;
        n--;
    }
    cout << "Factorial of " << a << " is : " << multi << endl;
}


int main(){

    fact(0);
    fact(1);
    fact(2);
    fact(3);
    fact(4);
    fact(5);

    return 0;
}