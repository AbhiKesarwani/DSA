#include <iostream>
using namespace std;

int main(){

    cout << ((5>3) && (10!=2)) << endl;  //true 1
    cout << ((5>3) && (10==2)) << endl;  // false 0
    cout << ((5>3) || (10<2)) << endl;   // true 1
    cout << ((5<3) || (10<2)) << endl;   // false 0
    cout << !((5>3) && (10!=2)) << endl; // false 0

    return 0;

}