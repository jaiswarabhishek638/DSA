// print the element through column wise;;
#include<iostream>
using namespace std;
int printcol(int arr[][3], int row, int col){
    for (int j = 0; j < col; j++)
    {
        for (int i = 0; i < row; i++)
        {
            cout << arr[i][j]<<endl;
        }
        
    }
    return;
}
int main(){
    int arr[4][3] = {1,2,3,4,5,6,7,8,9,10,11,12};
    printcol(arr, 4, 3);
    return 0;
}