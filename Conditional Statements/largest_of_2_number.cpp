#include <iostream>
using namespace std;

int main(){

    int num1,num2;
    cout <<"Enter first number: ";
    cin >> num1;
    
    cout <<"Enter second number: ";
    cin >> num2;

    if (num1>num2){
        cout << num1 << " is largest number.";
    }
    else if(num1<num2){
        cout << num2 << " is largest number.";
    }
    else{
        cout << num1 << " and " << num2 <<" is equal numbers.";
    }

    return 0;

}