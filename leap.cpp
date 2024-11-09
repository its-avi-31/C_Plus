// Program of Leap year -->
// yr%4 = leap yr : yr%400 = century yr : yr%100 = century  yr but not leap yr 

#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int yr;
    cout<<"Enter year : ";
    cin>>yr;
    if(yr%4==0 or yr%400==0 and yr%100==0)
    {
        cout<<"Leap year";
    }
    else 
    cout<<"Not leap year";
    return 0;
}
