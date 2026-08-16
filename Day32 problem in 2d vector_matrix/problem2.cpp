// transpose of matrix
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
    int Transpose(vector<vector<int>> matrix,int row,int col){
        for (int i = 0; i < row-1; i++)
        {
            for (int j = i+1; j < col; j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            } 
        }
    }

int main(){
    int row,col;
    
    cout<<"enter row and col";
    cin>>row;
    cin>>col;

    vector<vector<int>> matrix(row,vector<int>(col));
    cout<<"element of a matrix: ";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin>>matrix[i][j];
        }   
    }

    Transpose(matrix,row,col);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    


    
}