#include <iostream>
using namespace std;

int main(){
    
    int arr[] = {10, 20, 30, 40, 50};

    int n = sizeof(arr)/sizeof(int);

    for(int i=0; i<n; i++){
        for(int j=i; j<n;j++){
               // cout << "(" << i << "," << j << ") ";
                for(int g=i;g<=j;g++){
                    cout << arr[g] << " "; 
                }
                cout << " , " ;
        }
        cout << endl;
    }

    return 0;
}