#include <iostream>
using namespace std;

int main(){

    int a,b;
    char op;
    cout << "Enter first number : ";
    cin >> a;
    cout << "Enter operator(+,-,/,*) : ";
    cin >> op;    
    cout << "Enter second number : ";
    cin >> b;

    switch (op){
        case '+' : cout << (a + b);
             break;
        case '-' : cout << a-b;
             break;
        case '*' : cout << a*b;
             break;
        case '/' : cout << a/b;
             break;
        default: cout << "Invalid Operator";
    }

    return 0;
}