//  Program to swap two variables without using third variable -->

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter 1st no: ";
    cin>>a;
    cout<<"Enter 2nd no: ";
    cin>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"Now 1st no is ="<<a<<'\n';
    cout<<"2nd no is ="<<b;
    return 0;
}