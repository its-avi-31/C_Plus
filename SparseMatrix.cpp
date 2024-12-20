// Sparce Matrix - the majority of their elements is equals to 0 -->

#include<iostream>
using namespace std;
int main(){
    int i,j,size=0;
    int sparse_matrix[4][5]=
    {
        {0,0,6,0,9},
        {0,0,4,6,0},
        {0,0,0,0,0},
        {0,1,2,0,0}
    };
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            if(sparse_matrix[i][j]!=0){
                size++;
            }
        }
        
    }
    int matrix[size][3];
    int k=0;
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            if (sparse_matrix[i][j]!=0)
            {
                matrix[k][0]=i;
                matrix[k][1]=j;
                matrix[k][2]=sparse_matrix[i][j];
                k++;
            }
            
        }
        
    }
    for ( i = 0; i < size; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            cout<<matrix[i][j]<<'\t';
        }
    cout<<endl;
    }
    return 0;
}