// Creating, initializing & printing 1-D Array elements one by one -->

#include<iostream>
// #include<conio.h>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    cout<<arr[0]<<'\t';
    cout<<arr[1]<<'\t';
    cout<<arr[2]<<'\t';
    cout<<arr[3]<<'\t';
    cout<<arr[4];
return 0;
}

// Creating, initializing & printing 1-D Array elements using loop -->

#include<iostream>
// #include<conio.h>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5},i;
    for(i=0;i<5;i++)
    cout<<arr[i]<<'\t';
return 0;
}

// Sum of all elements in 1-D Array  -->

#include<iostream>
// #include<conio.h>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5},i,sum=0;
    for(i=0;i<5;i++){
    sum=sum+arr[i];
    }
    cout<<"Sum = "<<sum;
return 0;
}

// Sum of even elements in 1-D Array  -->

#include<iostream>
// #include<conio.h>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5},i,sum=0;
    for(i=0;i<5;i++){
    if(arr[i]%2==0)
    sum=sum+arr[i];
    }
    cout<<"Sum = "<<sum;
return 0;
}

// Intializing elements by user input in 1-D Array -->

#include<iostream>
// #include<conio.h>
using namespace std;
int main(){
    int arr[5],i;
    cout<<"Enter elements of array: "<<endl;
    for(i=0;i<5;i++){
        cin>>arr[i];
    }
    cout<<"No presents in array: "<<endl;
    for(i=0;i<5;i++){
        cout<<arr[i]<<'\t';
    }
return 0;
}