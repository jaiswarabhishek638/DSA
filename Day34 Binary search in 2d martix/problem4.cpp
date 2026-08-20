//input 4 8 15 25 60 18 22 26 42 80 36 40 45 68 104 48 50 72 83 130 70 99 114 128 170
#include<iostream>
#include<vector>
using namespace std;
int matSearch(vector<vector<int>>arr, int x) {
        // code here
    int n = arr.size();
    int m = arr[0].size();
    int i = 0,j= m - 1;
    while(i< n && j>= 0 ){
        if(arr[i][j]==x){
            return 1;
        }
        else if(arr[i][j]<x){
            i++;
            
        }
        else{
            j--;
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
    cout<<matSearch(matrix,X);

}