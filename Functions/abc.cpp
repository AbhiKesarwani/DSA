#include <iostream>
using namespace std;

char abc(char ch){
    if (ch =='z'){
        return 'a';
    }
    else{
        return char(ch+1);
    } 
}

int main(){

    char a;
    cout << "Enter a small letter alphabet : ";
    cin >> a;
    char next;
    next = abc(a);
    cout << "Next letter is " << next;

    return 0;
}