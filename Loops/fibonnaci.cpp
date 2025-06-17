#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter number : ";
    cin >> n;
    int first = 0;
    int second = 1;
    for(int i=0 ; i<n ; i++){
        if (i==0){
            cout << first <<endl;
        }
        else if (i==1){
            cout << second << endl;
        }
        else{
            int newnum = first + second;
            cout << newnum << endl;
            first = second;
            second = newnum;
        }
    }

    return 0;
}