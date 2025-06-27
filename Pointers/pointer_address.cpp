#include <iostream>
using namespace std;

int main(){

    char a = 's';

    char *ptr = &a;
    char **pptr = &ptr;

    cout << &a << " = " << ptr <<endl;
    cout << &ptr << " = " << pptr << endl;

    return 0;
}