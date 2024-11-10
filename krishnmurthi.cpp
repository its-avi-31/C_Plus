// C++ program to enter any no and check it is Krishnamurty number. -->
// Krishnmurthy no = a number that is equal to the sum of the factorials of its digits. 
// Ex-1, 2, 145, and 40585

#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int no,no1,a,sum=0;
    cout<<"Enter a no: ";
    cin>>no;
    no1=no;
    while(no!=0){
        int fact=1;
        a=no%10;
        while(a>0){
            fact=fact*a;
            a--;
        }
        sum=sum+fact;
        no=no/10;
    }
    if(sum==no1)
    cout<<"Krishnmurthy no :)";
    else
    cout<<"Not";
    return 0;
}