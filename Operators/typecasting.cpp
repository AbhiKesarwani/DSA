#include <iostream>
using namespace std;

int main(){

    float PI=3.14;

//implicit typecasting

    cout<<10/3<<endl;  //3
    cout<<10/3.0<<endl; //3.3333

    cout<< 'a'+1 <<endl; //98


//explicit typecasting
    cout<< (int)(PI) <<endl;      //3
    cout<< (char)('a'+1) <<endl;  //b
    cout<< (bool)3+4 <<endl;  //5

    return 0;
}