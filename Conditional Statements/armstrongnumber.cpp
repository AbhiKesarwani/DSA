#include <iostream>
using namespace std;

int main(){

    int num,a,b,c,temp,div;
    cout << "Enter number : ";
    cin >> num;

    temp = num;  //creating a copy

    a = num%10;
    num = num/10;
    b = num%10;
    num = num/10;
    c = num%10;

    div = a*a*a + b*b*b + c*c*c;

    if (div == temp){
        cout << "Number is Armstrong";
    }
    else{
        cout << "Number is not Armstrong";
    }
    
    return 0;
}