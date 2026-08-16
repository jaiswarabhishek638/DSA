#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int Wave(vector<vector<int> > matrix,int row,int col){
    for (int j = 0; j < col; j++)
    {
        int r1 = j;
        if (r1 % 2==0)
        {
            for (int i = 0; i < row; i++)
            {
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
        else{
            for (int i = row-1; i >= 0; i--)
            {
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    
}
int main(){
    int row,col;
    cout<<"row";
    cin>>row;
    cout<<"col";
    cin>>col;
    vector<vector<int> >matrix(row,vector<int>(col,0));
    cout<<"element: ";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin>>matrix[i][j];
        }
    }
    
    Wave(matrix,row,col);
}