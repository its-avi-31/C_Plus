// Sum and Avg of 5 no -->

#include<iostream>
using namespace std;
int main(){
    int i,n,sum=0,avg=0;
    cout<<"Enter 5 no : ";
    for(i=0;i<5;i++)
    {
        cin>>n;
        sum=sum+n;
    }
    avg=sum/5;
    cout<<"Sum of NO: "<<sum<<endl;
    cout<<"Average of NO : "<<avg;
    return 0;
}