// if multiple of 10 then continue
// infinite loop

#include <iostream>
using namespace std;

int main(){

    int num;
    while (true){
        cout << "Enter number : ";
        cin >> num;
        if (num%10==0){
            continue;
        }
        cout << "Entered number is : " << num << endl;
    }

    return 0;
}