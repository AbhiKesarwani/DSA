#include<iostream>
using namespace std;

void multi_subarray(int *nums, int n){

    int max_multi = INT32_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int multi = 1;
            for(int g=i;g<=j;g++){
                multi *= nums[g];
                max_multi = max(multi, max_multi);
            }
            cout << multi << " ";
        }
        cout << endl;
    }

    cout << "Max multiplication of subaray: " << max_multi;
}

int main(){

    int nums[4] = {2,-3,-2,-4};
    int n = sizeof(nums)/sizeof(int);
    
    multi_subarray(nums, n);

    return 0;
}