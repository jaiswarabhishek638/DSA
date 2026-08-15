// 
#include<iostream>
using namespace std;
int printcol(int arr[][3], int row, int col,int x){
    for (int j = 0; j < col; j++)
    {
        for (int i = 0; i < row; i++)
        {
            if (arr[i][j] == x)
            {
                cout<<"yes ";
                return 0;
            }
            
            
        }
        
    }
    cout<<" no";

}
int main(){
    int arr[4][3] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int x=17;
    // cout<<"find no: ";
    // cin>>x;
    printcol(arr, 4, 3,x);
    return 0;
}