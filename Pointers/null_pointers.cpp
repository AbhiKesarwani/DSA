#include <iostream>
using namespace std;

int main(){

    int *ptr = NULL;
    cout << ptr << endl;
    cout << *ptr << endl; //Segmentation error 
    cout << "Bye" << endl;

    return 0;
}