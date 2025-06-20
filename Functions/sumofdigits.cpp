#include <iostream>
using namespace std;

int sumofdigit(int n){
    int sum=0;
    int div;
    while (n>0){
        div = n%10;
        sum += div;
        n=n/10;
    }
    return sum;
}
int main(){

    int n;
    cout << "Enter the number : ";
    cin >> n;
    int result = sumofdigit(n);
    cout << n << " digit sum is " << result;
    return 0;
    
}