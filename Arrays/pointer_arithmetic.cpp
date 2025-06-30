#include <iostream>
using namespace std;

void printArr(int *ptr, int n){

    for(int i=0; i<n;i++){
        cout << *ptr << endl;
        ptr = ptr + 1;
    }
}

int main(){

    int arr[] = {5, 6, 7, 10};
    int n = sizeof(arr)/sizeof(int);
    printArr(arr, n);

    return 0;
}
