// binary search using roj major
#include<iostream>
#include<vector>
using namespace std;
int searchMatrix(vector<vector<int>> matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int start = 0,end = m*n - 1;
        while(start <= end){
            int mid = start + (end - start)/2;
            int row_ind = mid / n;
            int col_ind = mid % n;
            if(matrix[row_ind][col_ind] == target){
                return 1;
            }
            else if(matrix[row_ind][col_ind] < target){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        return 0;
}
int main(){
    int n,m,X;
    vector<vector<int> >matrix (n,vector<int>(m,0));
    cout<<"row: ";
    cin>>n;
    cout<<"col: ";
    cin>>m;
    cout<<"find element: ";
    cin>>X;
    cout<<"enter element in matrix: ";
    for (int i = 0; i < n; i++)
    {
        for (int  j = 0; j < m; j++)
        {
            cin>>matrix[i][j];
        }
    }
    cout<<searchMatrix(matrix,X);
    
}