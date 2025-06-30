#include <iostream>
using namespace std;

bool duplicate(int *arr, int n){

    int count = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                return true;
            }
        }
    }
    if(count == 0){
        return false;
    }
}

int main(){

    int arr[4] = {1, 2, 3, 4};
    int n = sizeof(arr)/sizeof(int);

    cout << duplicate(arr , n);

    return 0;
}