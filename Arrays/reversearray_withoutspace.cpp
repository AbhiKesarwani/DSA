#include <iostream>
using namespace std;

void reversearr(int *arr, int n){
    int start = 0;
    int end = n-1;
    int temp;
    while (start < end){
        //swapping              
        temp = arr[start];  
        arr[start] = arr[end];          //function in c++ to swap(arr[start],arr[end])
        arr[end] = temp;
        start++;
        end--;
    }
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

}

int main(){

    int arr[] = {1, 45, 7, 65, 2};
    int n = sizeof(arr)/sizeof(int);
    reversearr(arr, n);

    return 0;
}