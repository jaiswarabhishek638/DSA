// rotate matrix at 90 deg
// input ////
// enter the size of square matrix: 
// 4
// 16 element enter in matrix : 
// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16

//output: 
// [ 13 9  5  1  ]
// [ 14 10 6 2  ]
// [ 15 11 7 3  ]
// [ 16 12 8 4  ]

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void rotate(vector<vector<int>>& matrix) {
        // find n ;
        int n = matrix.size();
        // col --> n me transpose;
        for(int i=0;i< n-1 ;i++){
            for(int j = i + 1;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        // each n --> reverse 
        for(int i=0;i<n;i++){
            int start = 0,end = n - 1;
            while(start < end){
                swap(matrix[i][start] ,matrix[i][end]);
                start++ ,end--;
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