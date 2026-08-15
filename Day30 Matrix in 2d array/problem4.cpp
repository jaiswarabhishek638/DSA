// sum of diagnol element in 2d matrix 
// condition if and only if the matrix is square/ square array;row == col;

#include<iostream>
using namespace std;
int main(){
    int arr1[4][4]={5,8,3,9,6,2,8,4,5,3,2,2,2,8,1,9};
    int first = 0;

    // diagnal first (0,0)(1,1)(2,2)(3,3)
    for (int i = 0; i < 4; i++)
    {
        first += arr1[i][i];
    }
    // diagnal second(0,3)(1,2)(2,1)(3,0)
    int i=0,j=3,second=0;
    while (j>=0)
    {
        second += arr1[i][j];
        i++,j--;
    }
    

    cout<<"sum of first diagnal: "<<first<<endl;
    cout<<"sum of second diagnal: "<<second<<endl;
    

}