//  Write a c++ program to enter any no and check it is Armstrong no. -->
// Armstrong No: A no,thats sum of its same power upon every single value is same to,that no.Ex-153

#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int sum=0,count=3,no,i,no1;
    cout<<"Enter a no: ";
    cin>>no;
    no1=no;
    while(no1>0)
    {
        // count++;
        i=no1%10;
        sum=sum+i*i*i;
        no1=no1/10;
    }
    if(sum==no)
    cout<<"Armstrong No";
    else
    cout<<"Not Armstrong";
    return 0;
}