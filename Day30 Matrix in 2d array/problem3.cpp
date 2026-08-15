// print row index with maximum sum;
#include<iostream>
using namespace std;
int main(){
    int arr1[5][4]={3,4,7,18,2,8,3,9,5,4,2,2,7,3,0,8,2,8,9,1};
    // each row ka sum ;
    int sum = INT8_MIN,index=-1;
    for (int i = 0; i < 5; i++)
    {
        int total_row = 0;
        for (int j = 0; j < 4; j++)
        {
            total_row += arr1[i][j];
            if (sum < total_row)
            {
                sum = total_row;
                index = i;
            }
            
        }
    }
    // print the index of the row;
    cout<<index;
    

}