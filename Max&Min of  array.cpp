// Finding the largest and smallest element in the 1-d array -->

#include<iostream>
// #include<conio.h>
using namespace std;
int main(){
    int a[5],i,max=0,min;
    cout<<"Enter element of array: "<<endl;
    for(i=0;i<5;i++){
        cin>>a[i];
    }
    cout<<"Element in the array: "<<endl;
    for(i=0;i<5;i++){
        cout<<a[i]<<'\t';
    }
    cout<<endl<<"Largest no in the array: "<<endl;
    for(i=0;i<5;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    cout<<max<<endl;
    // Loop for Smallest Element in the array -
    min=a[0];
    cout<<"Smallest no in the array: "<<endl;
    for(i=0;i<5;i++){
        if(a[i]<min){
            min=a[i];
        }
    }
    cout<<min;
    return 0;
}

// 2nd Method -

int main(){
    int a[5],i,max=0,min;
    cout<<"Enter element of array: "<<endl;
    for(i=0;i<5;i++){
        cin>>a[i];
    }
    cout<<"Element in the array: "<<endl;
    for(i=0;i<5;i++){
        cout<<a[i]<<'\t';
    }
    // Loop for Finding Max & Min Element of the array- 
    for(i=0;i<5;i++){
        if(a[i]>max){      // For Max Element
            max=a[i];
        }
        min=a[0];         // For Min Element
        if(a[i]<min){
            min=a[i];
        }
    }
    cout<<endl<<"Largest no in the array: "<<max<<endl;
    cout<<"Smallest no in the array: "<<min;
    return 0;
}