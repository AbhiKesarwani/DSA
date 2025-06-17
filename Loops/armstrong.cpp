#include <iostream>
using namespace std;

int main(){

    int n,temp,newnum,sum=0;
    cout << "Enter number : ";
    cin >> n;
    temp = n;
    while (n>0){
        newnum = n%10;
        sum += newnum*newnum*newnum;
        n = n/10; 
    }
    if (sum==temp){
        cout << "Number is Armstrong" <<endl;
    }
    else{
        cout << "Number is not Armstrong" <<endl;
    }

    return 0;
}