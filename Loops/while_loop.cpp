// sum of odd digits of a number

#include <iostream>
using namespace std;

int main(){

    int sum=0,n,div;
    cout << "Enter number : ";
    cin >> n;
    while(n>0){
        div = n%10;
        if (div%2!=0){
            sum += div;
        }
        n = n/10;
    }
    
    cout << "Sum of digits is : " << sum << endl;

    return 0;
}