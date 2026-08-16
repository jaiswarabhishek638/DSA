// how to create 2d vector
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    
    //create a 2d vector
    vector<vector<int> > matrix(3,vector<int>(4,0)); // 2d vector created
    
    cout<<"enter the element: ";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
           cin>>matrix[i][j];
        }
        cout<<endl;
        
    }

    cout<<"element in matrix is :"<<endl;
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
           cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
        
    }

    cout<<endl;
    cout<<"rows: "<<matrix.size()<<endl;
    cout<<"col: "<<matrix[0].size();

}