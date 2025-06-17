#include <iostream>
using namespace std;

int main(){

    float cost1,cost2,cost3;
    cout<<"Enter the cost of first product ";
    cin>>cost1;
    cout<<"Enter the cost of second product ";
    cin>>cost2;
    cout<<"Enter the cost of third product ";
    cin>>cost3;

    float bill,bill_gst;
    bill = cost1+cost2+cost3;
    bill_gst = bill + bill*0.18;
    cout<<"Total bill with gst is "<<bill_gst;


    return 0;
}