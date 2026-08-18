// rotate  matrix anticlock 90deg
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void rotate(vector<vector<int>>& matrix) {
    // find n is always a size of square matrix ;
    int n = matrix.size();
    // step1 : transpose (row --> col);
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    // step2 : each col reverse using 2 pointer;
    for (int j = 0; j < n; j++)
    {
        int start = 0,end = n - 1;
        while (start < end)
        {
            swap(matrix[start][j],matrix[end][j]);
            start++ ,end-- ;
        }
        
    }
    
    
}
int main(){
    int n;
    cout<<"enter the size of square matrix: "<<endl;
    cin>>n;
    vector<vector<int> > matrix (n , vector<int>(n ,0));
    cout<<n*n<<" element enter in matrix : "<<endl;
    for (int i = 0; i < n; i++)
    {
        
        for (int j = 0; j < n; j++)
        {
            cin>>matrix[i][j];
        }
    }

    rotate(matrix);
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