// Subtraction of two no with fn -->

#include<iostream>
#include<conio.h>
using namespace std;
void sub();
int main(){
    sub();
    return 0;
}
void sub(){
    int a,b,sub=0;
    cout<<"Enter first no: ";
    cin>>a;
    cout<<"Enter sec no: ";
    cin>>b;
    sub=a-b;
    cout<<"Sutraction of both no = "<<sub;
}