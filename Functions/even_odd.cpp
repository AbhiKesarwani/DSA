#include <iostream>
using namespace std;

int even_odd(int a){
    if(a%2==0){
        cout << a << " is even number.";
    }
    else{
        cout << a << " is odd number.";
    }
}

int main(){

    int n;
    cout << "Enter number : ";
    cin >> n;
    even_odd(n);    

    return 0;
}