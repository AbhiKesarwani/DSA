#include <iostream>
using namespace std;

int main(){

    int arr[] = {1, 2, 3, 4, 5};
    int *ptr1 = arr;
    int *ptr2 = ptr1 + 3; 
    cout << (ptr2 > ptr1) << endl;
    cout << (ptr1 == ptr2) << endl;

    return 0;
}