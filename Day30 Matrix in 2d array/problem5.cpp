// reverse each row of a matrix
#include<iostream>
using namespace std;
int Reversemat(int arr[][4],int row,int col){
    for (int i = 0; i < row; i++)
    {
        
        int start = 0;
        int end = col-1;
        while (start < end)
        {
            swap(arr[i][start],arr[i][end]);
            start++ ,end-- ;
        }
        
    }
    
}
int main(){
    int arr1[5][4]={3,4,7,18,2,8,3,9,5,4,2,2,7,3,0,8,2,8,9,1};
    Reversemat(arr1,5,4);
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<arr1[i][j]<<" ";
        }
        
    }
    
}