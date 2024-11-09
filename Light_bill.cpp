//  program that reads the customer number and power consumed and
// prints the amount to be paid by the customer -->

#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int cn,pc,bill=0;
    cout<<"Enter Customer no: ";
    cin>>cn;
    cout<<"Enter power consumed : ";
    cin>>pc;
    bill=pc*8;
    cout<<"Total amt to be paid =" <<bill;
    return 0;
}