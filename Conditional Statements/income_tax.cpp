#include <iostream>
using namespace std;

int main(){

    int income;
    cout << "Enter your income : ";
    cin >> income;

    if (income < 500000){
        cout << "No income tax to pay.";
    } 
    else if (income < 1000000){
        cout <<"Income tax to pay is " << income*0.2;
    }
    else{
        cout << "Income tax to pay is " << income*0.3;
    }

    return 0;
}