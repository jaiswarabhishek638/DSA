// for k time rotate the matrix
// 1 time = 90 deg
// 2 time = 180 deg
// 3 time = 270 deg
// 4 time = 360 deg == 0deg no rotate
// 5 time = 90 deg
// 6 time = 180 deg
// 7 time = 270 deg
// 8 time = 360 deg == 0deg no rotate
// pattern 1 2 3 0 , 1 2 3 0
// k = k%4;
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void rotate90(vector<vector<int>> &matrix)
{
    // find n ;
    int n = matrix.size();
    // col --> n me transpose;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    // each n --> reverse
    for (int i = 0; i < n; i++)
    {
        int start = 0, end = n - 1;
        while (start < end)
        {
            swap(matrix[i][start], matrix[i][end]);
            start++, end--;
        }
    }
}
int main(){
    int n , k;
    cout<<"enter the size of square matrix: "<<endl;
    cin>>n;
    cout<<"enter the no of ratate matrix k = " <<endl;
    cin>>k;
    vector<vector<int> > matrix (n , vector<int>(n ,0));
    cout<<n*n<<" element enter in matrix : "<<endl;
    for (int i = 0; i < n; i++)
    {
        
        for (int j = 0; j < n; j++)
        {
            cin>>matrix[i][j];
        }
    }

    k = k%4;
    while (k)
    {
        rotate90(matrix);
        k-- ;
    }
    
    cout<<" rotate matrix 90 deg: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<"[ ";
        for (int j = 0; j < n; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<" ]"<<endl;
        
    }
    

    

}