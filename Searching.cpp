// Linear Search in Array -->

#include<iostream>
using namespace std;
int main(){
    int a[10];
    int item,size,i;
    cout<<"Enter size of array: ";
    cin>>size;
    cout<<"Enter elements of array: "<<endl;
    for ( i = 0; i < size; i++)
    {
        cin>>a[i];
    }
    cout<<"Elements in the array: "<<endl;
    for ( i = 0; i < size; i++)
    {
        cout<<a[i]<<'\t';
    }
    cout<<endl;
    // For searching element-
    cout<<"Enter searching item: "<<endl;
    cin>>item;
    for ( i = 0; i < size; i++)
    {
        if (a[i]==item)         
        {
            cout<<"Searching elements found :)";
            break;
        }
    }
    if(i==size)
    cout<<"Not found!!!";
    return 0;  
}