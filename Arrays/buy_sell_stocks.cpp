#include <iostream>
using namespace std;

void max_profit(int *prices, int n){
    int bestbuy[100000];
    bestbuy[0] = INT32_MAX;
    for(int i=1;i<n;i++){
        bestbuy[i] = min(bestbuy[i-1], prices[i-1]);
    }

    int max_profit = 0;
    for(int i=0;i<n;i++){
        int curr_profit = prices[i] - bestbuy[i];
        max_profit = (max_profit, curr_profit);
    }
    cout << "Max profit is: " << max_profit;
}

int main(){

    int prices[6] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(prices)/sizeof(int);
    
    max_profit(prices, n);

    return 0;
}