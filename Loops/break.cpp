// if multiple of 10 then break

#include <iostream>
using namespace std;

int main(){

    int num;
    while (true){
        cout << "Enter number : ";
        cin >> num;
        if (num%10==0){
            break;
        }
    }

    return 0;
}