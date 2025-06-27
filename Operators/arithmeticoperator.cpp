#include <iostream>
using namespace std;

int main(){

    int a = 5;
    int b = 3;

    //Binary arithmetic operator

    cout << "+: " <<a + b << endl;  // 8
    cout << "-: " <<a - b << endl;  // 2
    cout << "*: " <<a * b << endl;  // 15 
    cout << "/: " <<a / b << endl;  // 1
    cout << "%: " <<a % b << endl;  // 2

    // Unary arithmetic operator

    cout << a++ << endl;  //5
    cout << a-- << endl;  //6

    cout << --a << endl;  //4
    cout << ++a << endl;  //5 

    return 0;
}