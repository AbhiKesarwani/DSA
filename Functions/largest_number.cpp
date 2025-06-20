#include <iostream>
using namespace std;

void largest_number(int a, int b, int c){
    if ((a>=b) && (a>=c)){
        cout << a << " is the largest number.";
    }
    else if ((b>=a) && (b>=c)){
        cout << b << " is the largest number.";
    }
    else{
        cout << c << " is the largest number";
    }
}

int main(){

    int a,b,c;
    cout << "Enter first number : ";
    cin >> a;
    cout << "Enter second number : ";
    cin >> b;
    cout << "Enter third number : ";
    cin >> c;
    largest_number(a,b,c);

    return 0;
    
}