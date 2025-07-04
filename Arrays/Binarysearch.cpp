#include <iostream>
using namespace std;

int binary_search(int *arr, int n, int key){
    int start = 0;
    int end = n-1;
    while(start<=end){
        int mid = (start+end)/2;
        if (arr[mid] == key){
            return mid;
        }
        else if(arr[mid] > key){
            end = mid-1;
        }
        else{
            start = mid + 1;
        }
    }
    return -1;

}

int main(){

    int arr[] = {2, 4, 8, 12, 14, 20};
    int n = sizeof(arr)/sizeof(int);
    int key = 12;
    cout << binary_search(arr, n, key);

    return 0;
}