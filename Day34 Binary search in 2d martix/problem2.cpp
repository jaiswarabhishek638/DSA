// optimized approach;
// using binary search T.C = n + log n;
// SC - O(1);
// input 2 6 10 14 18 20 24 27 29 38 47 52 78 93 102 108 111 200 218 320
#include<iostream>
#include<vector>
using namespace std;
int BSearch(vector<vector<int> > matrix , int X){
    // find row and col;
    int row= matrix.size();
    int col = matrix[0].size();

    // first checking X belongs or not;
    for (int i = 0; i < row; i++)
    {
        if (matrix[i][0] <= X && X <= matrix[i][col -1])
        {
            int start = 0,end = col - 1;
            while (start <= end)
            {
                int mid = start + (end - start)/2;
                if (matrix[i][mid] == X)
                {
                    return 1;
                }
                else if (matrix[i][mid] < X)
                {
                    start = mid+1;
                }
                else{
                    end = mid-1;
                }  
            }   
            return 0;   
        }
    }
}
int main(){
    int n,m,X;
    cout<<"row: ";
    cin>>n;
    cout<<"col: ";
    cin>>m;
    cout<<"Find an Element: ";
    cin>>X;

    cout<<"element in an matrix: ";
    vector<vector<int > > matrix(n,vector<int>(m,0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>matrix[i][j];
        }
    }
    cout<<BSearch(matrix,X);


}