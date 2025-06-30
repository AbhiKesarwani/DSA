#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter length of array: ";
    cin >> n;   // length of array

    int arr[n];

    for(int i=0; i<n ; i++){
        cout << "Enter number " ;
        cin >> arr[i];     // array values input
    }

    int max = arr[0];

    for(int i=0; i<n ; i++){
       if(max < arr[i]){
            max = arr[i];    // finding max value of array
       }
    }

    cout << "Maximum of array is: " << max << endl;

    return 0;
}