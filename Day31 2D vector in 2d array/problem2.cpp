// 2d vector using user input:
// row: 3
// col: 3
// enter the element: 1 2 3 2 1 4 3 4 1
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int row,col;
    cout<<"row: ";
    cin>>row;
    cout<<"col: ";
    cin>>col;
    //create a 2d vector
    vector<vector<int> > matrix(row,vector<int>(col,0)); // 2d vector created
    
    cout<<"enter the element: ";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
           cin>>matrix[i][j];
        }
        cout<<endl;
        
    }

    cout<<"element in matrix is :"<<endl;
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
           cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
        
    }

}