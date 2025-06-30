#include <iostream>
using namespace std;

void Maxsubarray(int *arr, int n){

    int maxsum = INT32_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum = 0;
            for(int g=i;g<=j;g++){
                sum += arr[g];
                maxsum = max(maxsum, sum); //function in c++ to find max
            }
            cout << sum << " , ";
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