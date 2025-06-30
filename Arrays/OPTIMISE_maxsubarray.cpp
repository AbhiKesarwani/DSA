#include <iostream>
using namespace std;

void Maxsubarray(int *arr, int n){

    int maxsum = INT32_MIN;
    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=i;j<n;j++){
            sum += arr[j];
            cout << sum << " , ";
            maxsum = max(sum, maxsum);
        }
        cout << endl;
    }

    cout << "Max sum of subaray: " << maxsum;
}

int main(){

    int arr[6] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr)/sizeof(int);
    
    Maxsubarray(arr, n);

    return 0;
}