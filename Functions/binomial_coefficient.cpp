#include<iostream>
using namespace std;

int fact(int n){
    int multi = 1;
    for(int i=n;i>=1;i--){
        multi *=i;
    }
    return multi;
}

int main(){
    
    int n,r;
    cout << "Enter the value of n for binomial coefficient : ";
    cin >> n;
    cout << "Enter the value of r for binomial coefficient : ";
    cin >> r;
    float bino = fact(n)/(fact(r)*fact(n-r));
    cout << "Binomial coefficient of " << n << " and " << r << " is " << bino;
    
    return 0;

}

