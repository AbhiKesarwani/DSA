#include <iostream>
using namespace std;

void palindrome(int n){
    int div,newnum=0;
    int temp = n;
    while (n>0){
        div = n%10;
        newnum = newnum*10 + div;
        n = n/10;
    }
    if (temp==newnum){
        cout << temp << " is a palindromic number.";
    }
    else{
        cout << temp << " is not a palindromic number.";
    }
}

int main(){

    int n;
    cout << "Enter number : ";
    cin >> n;
    palindrome(n);

    return 0;
    
}