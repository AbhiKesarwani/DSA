// need to review

#include <iostream>
using namespace std;

int binary_search(int *arr1, int n, int key){
    int start = 0;
    int end = n-1;
    while(start<=end){
        int mid = (start + end)/2;
        if(arr1[mid] == key){
            return mid;
        }
        else if(arr1[mid]>key && arr1[start]<=key){
            end = mid-1;
        } 
        else{
            start = mid +1;
        }
    
    }
    return -1;
}

int main(){

    int arr[7] = {0,1,2,4,5,6,7};
    int n = sizeof(arr)/sizeof(int);

    int shift;
    cout << "Enter the shift index: ";
    cin >> shift;

    int key;
    cout << "Enter the key: ";
    cin >> key;

    int arr1[7];
    for(int i=shift;i<n;i++){
        arr1[i-shift] = arr[i];
    }

    for(int i=0;i<shift;i++){
        arr1[i+shift+1] = arr[i];
    }

   /* for(int i=0; i<n;i++){
        cout << arr1[i] << endl;
    }*/

    cout << binary_search(arr1, n, key);

    return 0;

}