#include <iostream>
using namespace std;

void changeA(int *ptr){
    *ptr = 20;
    cout << *ptr << endl;

}

int main(){

    int a = 10;
    int *ptr = &a;

    changeA(ptr);

    cout << a << endl;
}