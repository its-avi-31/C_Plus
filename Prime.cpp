// C++ program to enter any no and check it is prime no. -->
// Prime no: A no that is only devided by 1 and itself. Ex- 2,3,5,7,11,13..

#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int i,no,count=0;
    cout<<"Enter a no: ";
    cin>>no;
    for(i=1;i<=no;i++){
        if(no%i==0)
        count++;
    }
    if(count==2)
    cout<<"Prime no :)";
    else
    cout<<"Not";
}