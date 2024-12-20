// Creating,initializing and Printing 2-D Array using loop -->

#include<iostream>
// #include<conio.h>
using namespace std;
// int main(){
//     int arr[3][3],i,j;
//     cout<<"Enter elements in 3*3 array: "<<endl;
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             cin>>arr[i][j];
//         }
//     }
//     cout<<"Elements of array= "<<endl;
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             cout<<arr[i][j]<<'\t';
//         }
//         cout<<endl;
//     }
// return 0;
// }

// // Sum of all elements in 2-D Array -->

// //1st Method-

// #include<iostream>
// // #include<conio.h>
// using namespace std;
// int main(){
//     int arr[3][3],i,j,sum=0;
//     cout<<"Enter elements in 3*3 array: "<<endl;
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             cin>>arr[i][j];
//             sum=sum+arr[i][j];
//         }
//     }
//     cout<<"Elements of array = "<<endl;
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             cout<<arr[i][j]<<'\t';
//         }
//         cout<<endl;
//     }
//     cout<<"Sum of all elements = "<<sum;

// //2nd Method-

//  cout<<"Sum of all elements = ";
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             sum=sum+arr[i][j];
//         }
//     }
//     cout<<sum;

// return 0;
// }

// // Sum of even elements in 2-D array -->

// #include<iostream>
// // #include<conio.h>
// using namespace std;
// int main(){
//     int arr[3][3],i,j,sum=0;
//     cout<<"Enter elements in 3*3 array: "<<endl;
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             cin>>arr[i][j];
//         }
//     }
//     cout<<"Elements of array = "<<endl;
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             cout<<arr[i][j]<<'\t';
//         }
//         cout<<endl;
//     }
//     cout<<"Sum of even elements: ";
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             if(arr[i][j]%2==0)
//             sum=sum+arr[i][j];
//         }
//     }
//     cout<<sum;
// return 0;
// }

// // Transpose of all elements in 2-D array -->

// #include<iostream>
// // #include<conio.h>
// using namespace std;
// int main(){
//     int arr[3][3],i,j,sum=0;
//     cout<<"Enter elements in 3*3 array: "<<endl;
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             cin>>arr[i][j];
//         }
//     }
//     cout<<"Elements of array = "<<endl;
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             cout<<arr[i][j]<<'\t';
//         }
//         cout<<endl;
//     }
//     cout<<"Tronspose of all elements: "<<endl; //Tronspose-> Swap Row = Column & Column = Row
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             cout<<arr[j][i]<<'\t';
//         }
//         cout<<'\n';
//     }
//     cout<<endl;
// }

// // Principle or Primary Diagonal(PD) in 2-D array(matrix) -->

// #include<iostream>
// // #include<conio.h>
// using namespace std;
// int main(){
//     int arr[3][3],i,j,sum=0;
//     cout<<"Enter elements in 3*3 array: "<<endl;
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             cin>>arr[i][j];
//         }
//     }
//     cout<<"Elements of array = "<<endl;
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             cout<<arr[i][j]<<'\t';
//         }
//         cout<<endl;
//     }
//     cout<<"Principal Diagonal: "<<endl;  //PD-> Right Diagonal of matrix
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             if(i==j)
//             cout<<arr[i][j]<<'\t';
//         }
//         cout<<'\n';
//     }
//     cout<<endl;
// }


// // Lower Trangular Matrix(LTM) in 2-D array -->

// #include<iostream>
// // #include<conio.h>
// using namespace std;
// int main(){
//     int arr[3][3],i,j,sum=0;
//     cout<<"Enter elements in 3*3 array: "<<endl;
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             cin>>arr[i][j];
//         }
//     }
//     cout<<"Elements of array = "<<endl;
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             cout<<arr[i][j]<<'\t';
//         }
//         cout<<endl;
//     }
//     cout<<"LTM: "<<endl;  //LTM-> Left side Elements of PD
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             if(i>j)
//             cout<<arr[i][j]<<'\t';
//         }
//         cout<<'\n';
//     }
//     cout<<endl;
// }


// // Upper Trangular Matrix(UTM) in 2-D array -->

// #include<iostream>
// // #include<conio.h>
// using namespace std;
// int main(){
//     int arr[3][3],i,j,sum=0;
//     cout<<"Enter elements in 3*3 array: "<<endl;
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             cin>>arr[i][j];
//         }
//     }
//     cout<<"Elements of array = "<<endl;
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             cout<<arr[i][j]<<'\t';
//         }
//         cout<<endl;
//     }
//     cout<<"UTM: "<<endl;  //UTM-> Right side Elements of PD
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             if(i<j)
//             cout<<arr[i][j]<<'\t';
//         }
//         cout<<'\n';
//     }
//     cout<<endl;
// }

// Sum of all elements in two arrays of 3*3 into Another Array -->

// int main(){
//     int a[3][4],b[3][3],i,j,c[3][3];
//     cout<<"Enter elements of array a: "<<endl;
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             cin>>a[i][j];
//         }
//     }
//     cout<<"Enter elements of array b: "<<endl;
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             cin>>b[i][j];
//         }
//     }
//     cout<<"Elements in array a: "<<endl;
//     for(i=0;i<3;i++){
//         for (j=0; j < 3; j++)
//         {
//             cout<<a[i][j]<<'\t';
//         }
//     cout<<endl;
//     }
//     cout<<"Elements in array b: "<<endl;
//     for ( i = 0; i < 3; i++)
//     {
//         for ( j = 0; j < 3; j++)
//         {
//             cout<<b[i][j]<<'\t';
//         }
//     cout<<endl;
//     }
//     cout<<"Sum of both array into C array of 3*3: "<<endl;
//     for ( i = 0; i < 3; i++)
//     {
//         for ( j = 0; j < 3; j++)
//         {
//             c[i][j]=a[i][j] + b[i][j];
//         }
//     }
//     //Printing third array-
//     for ( i = 0; i < 3; i++)
//     {
//         for ( j = 0; j < 3; j++)
//         {
//             cout<<c[i][j]<<'\t';
//         }
//     cout<<endl;
//     }
// return 0;  
    
// }

// Subtraction of all elements in two arrays of 3*3 into Another Array -->

int main(){
    int a[3][4],b[3][3],i,j,c[3][3];
    cout<<"Enter elements of array a: "<<endl;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cin>>a[i][j];
        }
    }
    cout<<"Enter elements of array b: "<<endl;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cin>>b[i][j];
        }
    }
    cout<<"Elements in array a: "<<endl;
    for(i=0;i<3;i++){
        for (j=0; j < 3; j++)
        {
            cout<<a[i][j]<<'\t';
        }
    cout<<endl;
    }
    cout<<"Elements in array b: "<<endl;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            cout<<b[i][j]<<'\t';
        }
    cout<<endl;
    }
    cout<<"Subtraction of both array into C array of 3*3: "<<endl;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            c[i][j]=a[i][j] - b[i][j];
        }
    }
    //Printing third array-
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            cout<<c[i][j]<<'\t';
        }
    cout<<endl;
    }
return 0;     
}

