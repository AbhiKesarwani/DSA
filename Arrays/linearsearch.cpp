#include <iostream>
using namespace std;

int linear(int *arr, int n, int key){
    for(int i=0; i<n; i++){
        if (key == arr[i]){
            return i;
        }
    }
    return -1;
}

int main(){

    int arr[] = {1, 4, 12, 19, 7, 66, 23, 15};
    
    int n = sizeof(arr)/sizeof(int);
    
    int key;
    cout << "Enter key which you want to search: ";
    cin >> key;

    int index = linear(arr, n, key);
    cout << index;

    return 0;
}