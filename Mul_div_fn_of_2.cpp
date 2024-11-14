#include<iostream>
#include<conio.h>
using namespace std;
void mul(){
    int a,b,mul=0;
    cout<<"Enter first no: ";
    cin>>a;
    cout<<"Enter sec no: ";
    cin>>b;
    mul=a*b;
    cout<<"Multiply of both no = "<<mul;
}


void div(){
    int a,b,div=0;
    cout<<"Enter first no: ";
    cin>>a;
    cout<<"Enter sec no: ";
    cin>>b;
    div=a/b;
    cout<<"Division of both no = "<<div;
}
int main(){
    int choice;
    cout<<"Enter 1 for mul and 2 for div: ";
    cin>>choice;
    if(choice==1)
    mul();
    if(choice==2)
    div();
    return 0;
}