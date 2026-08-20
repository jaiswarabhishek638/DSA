// brute force approach
// input 2 4 5 6 8 12 14 18 19 20 21 23 24 28 30 40 50 52 56 58 
#include<iostream>
#include<vector>
using namespace std;
int BFA(vector<vector<int> >matrix , int X){
    // x need to be find in the matrix;
    int row = matrix.size();
    int col = matrix[0].size();
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (matrix[i][j] == X)
            {
                return 1;
            }
        }
    }
    return 0;
    
}
int main(){
    int n,m,X;
    cout<<"row: ";
    cin>>n;
    cout<<"col: ";
    cin>>m;
    cout<<"Find an Element: ";
    cin>>X;

    cout<<"element in matrtix: ";
    vector<vector<int > > matrix(n,vector<int>(m,0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>matrix[i][j];
        }
    }

    cout<<BFA(matrix,X);


    
}