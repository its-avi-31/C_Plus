//  program to find out largest no among three no -->

#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int n1,n2,n3;
    cout<<"Enter 1st no: ";
    cin>>n1;
    cout<<"Enter 2nd no: ";
    cin>>n2;
    cout<<"Enter 3rd no: ";
    cin>>n3;
    if(n1>n2 and n1>n3)
    cout<<"1st no is largest";
    else if(n2>n3)
    cout<<"2nd no is largest";
    else
    cout<<"3rd no is largest";
    return 0;
}