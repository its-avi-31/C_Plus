// Example 1 -->

#include<iostream>
#include <bits/stdc++.h>
#include<conio.h>
using namespace std;
// int main(){
//     int a=5, b=10;
//     int *c,*d;   //Pointer variable declaration
//     c=&a;     
//     d=&b;    //Address of(operator)
//     cout<<c;
//     cout<<endl<<d<<endl;
//     cout<<"Value of c = "<< *c<<endl;
//     cout<<"Value of d = "<< *d;   //Value at address
//     return 0;
// }

// Example 2 -->

// int main(){
//     char *a;
//     char b='n';
//     a=&b;
//     cout<<"Size of char pointer = "<<sizeof(char *)<<endl;
//     cout<<"Size of int pointer = "<<sizeof(int *)<<endl;
//     cout<<"Size of float pointer = "<<sizeof(float *)<<endl;
//     cout<<"Size of double pointer = "<<sizeof(double *)<<endl;
//     cout<<"Size of a = "<<sizeof(*a);
//     return 0;
// }


/* Ques 1- Calculate sum of two no using pointers  -->  */

// int main(){
//     int *a,*b;
//     int n1,n2,sum=0;
//     cout<<"Enter two no: ";
//     cin>>n1>>n2;
//     a=&n1;    //Assigning an address to pointer
//     b=&n2;
//     sum=*a+*b;  //Value at address stored by pointer
//     cout<<"Sum of two no using pointers = "<<sum;
//     return 0;
// }

/* Ques 2- Write a c program to swap two numbers using pointers? --> */

// int main(){
//     int a,b,c;
//     int *d,*e;
//     cout<<"Enter first no: ";
//     cin>>a;
//     cout<<"Enter sec no: ";
//     cin>>b;
//     d=&b;
//     e=&a;
//     cout<<"After swapping 1st no = "<<*d<<'\t'<<"2nd no = "<<*e;
//     return 0;
// }

/* Ques 3- Write a c program to calculate sum and average of five numbers using pointers? --> */
// int  main(){
//     int i,no,*ptr,sum=0,avg=0;
//     cout<<"Enter 5 no: ";
//     for(i=0;i<5;i++){
//         cin>>no;
//         ptr=&no;
//         sum=sum+(*ptr);
//     }
//     avg=sum/5;
//     cout<<"Sum of all no = "<<sum<<endl;
//     cout<<"Average of all no = "<<avg;
//     return 0;
// }

/* Ques 4- Write a program in C to find the maximum number between two numbers using a pointer. --> */
int main(){
    int a,b;
    int *c,*d;
    cout<<"Enter 1st no: ";
    cin>>a;
    c=&a;
    cout<<"Enter 2nd no: ";
    cin>>b;
    d=&b;
    if(*c>*d){
        cout<<"1st no is greater";
    }
    else
    cout<<"2nd no is greater";
    return 0;
}