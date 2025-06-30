#include <iostream>
using namespace std;

int main(){

    int sum = 0;
    int max_sum = INT32_MIN;
    
    int arr[4] = {-1, -2, -3, -4};
    int n = sizeof(arr)/sizeof(int);

    for(int i=0; i<n; i++){
        sum += arr[i];
        max_sum = max(sum, max_sum);
        if(sum<0){
            sum = 0;
        }
    }

    cout << max_sum;

    return 0;
}