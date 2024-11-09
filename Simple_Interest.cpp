//Calculate Simple Interest -->

#include<iostream>
int main(){
    int p,r,t,si=0;
    std::cout<<"Enter Principle Money: ";
    std::cin>>p;
    std::cout<<"Enter Rate: ";
    std::cin>>r;
    std::cout<<"Enter Time: ";
    std::cin>>t;
    si=(p*r*t)/100;
    std::cout<<"Simple Interest = " << si;
    
}