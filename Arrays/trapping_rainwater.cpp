#include<iostream>
using namespace std;

void trap(int *heights, int n){
    
    int right_max[20000];
    int left_max[20000];
    int sum = 0;

    right_max[n-1] = heights[n-1];
    left_max[0] = heights[0];

    for(int i=1;i<n;i++){
            left_max[i] = max(left_max[i-1],heights[i-1]);
        }
    for(int i=n-2;i>=0;i--){
            right_max[i] = max(right_max[i+1],heights[i+1]);
        }

    for(int i=0;i<n;i++){
        int trapping_water = min(right_max[i], left_max[i]) - heights[i] ;
        if(trapping_water > 0){
            sum = sum + trapping_water;
        }
    }

    cout << "Trapping water area is with width 1: " << sum;

}

int main(){

    int heights[7] = {4, 2, 0, 6, 3, 2, 5};
    int n = sizeof(heights)/sizeof(int);
    
    trap(heights, n);

    return 0;
}