#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int n,count,sum=0;
    cout << "Enter number : ";
    cin >> n;

    for(int i=1;i<=n;i++){
        count =0;
        for(int j=2;j<=sqrt(i);j++){
            if (i%j==0){
                count += 1;
                break;
            }
        }
        if (count == 0){
            sum += i;
            cout << i << " ";
        }
    }
    cout << "Sum of all printed prime number is " << sum << endl;
    return 0;
}