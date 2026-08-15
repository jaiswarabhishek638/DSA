// adding 2 d matrix
#include<iostream> 
using namespace std;
int main(){
    int arr[4][3]={2,3,4,5,0,1,2,3,1,2,6,4};
    int arr2[4][3]={3,4,1,2,2,2,2,0,1,3,5,4};
    int ans[4][3];
    // adding the 2d matrix if row of both arrray is same and also col should be same;
    for (int i = 0; i < 4; i++)
    {
        for (int j=0;j<3;j++)
        {
            ans[i][j]=arr[i][j]+arr2[i][j];
        }
        
    }
    
    // print the ans array;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<ans[i][j]<<" ";
        }
        
    }
    
}