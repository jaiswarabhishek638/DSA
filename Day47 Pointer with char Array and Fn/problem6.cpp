// pass by reference in vector to make each el is mult of *5;
#include<iostream>
#include<vector>
using namespace std;
void Pass(vector<int>&v1){
    for (int i = 0; i < 5; i++)
    {
        v1[i] = 20;
        
    }
    
}
int main(){
    vector<int>v(5,0);
    Pass(v);
    for (int i = 0; i < 5; i++)
    {
        cout<<v[i]<<" ";
    }
    
}