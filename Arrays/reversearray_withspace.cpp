#include <iostream>
using namespace std;

void reversearr(int *arr, int n){
    int arr2[n];
    for(int i=0; i<n; i++){
        arr2[i] = arr[n-i-1];
    }

    for(int i=0; i<n; i++){
        arr[i] = arr2[i];
    }

    cout << "Reversed array: " << endl;

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){

    int arr[] = {1, 4, 8, 9, 10};
    int n = sizeof(arr)/sizeof(int);
    
    reversearr(arr, n);

    return 0;
}