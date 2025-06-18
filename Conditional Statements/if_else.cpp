#include <iostream>
using namespace std;

int main(){

    float marks;
    cout << "Enter your marks: " ;
    cin >> marks ;

    if (marks>33){
        cout << "pass";
    }
    else{
        cout << "fail";
    }

    return 0;
}