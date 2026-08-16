// spiral form in 2d matrix in 2d vector
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int SpiralForm(vector<vector<int> > matrix, int row,int col){
    // int n = matrix.size();
    int top=0,left=0,right=col-1, bottom= row-1;
    while (top <= bottom && left <= right)
    {
        for (int j = left; j <= right; j++)
        {
            cout<<matrix[top][j]<<" ";
        }
        top++;
        for (int i = top; i <= bottom; i++)
        {
            cout<<matrix[i][right]<<" ";
        }
        right--;
        if (top <= bottom)
        {
            for (int j = right; j >= left; j--)
            {
                cout<<matrix[bottom][j]<<" ";
            }
            bottom--;
        }
        
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                cout<<matrix[i][left]<<" ";
            }
            left++; 
        }
        
        
           
    }
}
int main(){
    int row,col;
    cout<<"row"<<endl;
    cin>>row;
    cout<<"col"<<endl;
    cin>>col;
    vector<vector<int> > matrix(row, vector<int>(col,0));
    cout<<"enter total  element "<<row*col <<" : ";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin>>matrix[i][j];
        }
        
    }
    SpiralForm(matrix,row,col);
    
}