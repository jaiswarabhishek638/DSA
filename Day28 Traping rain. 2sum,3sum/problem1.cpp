// 42 hard: trapping rain water
#include<iostream> 
#include<vector>
#include<algorithm>
using namespace std;
int Rain(vector<int>height){
    int n = height.size();
    int maxHeight=height[0],index=0;
    int maxLeft = 0,maxRight=0,Water_stored=0;
    // finding the max height of the buliding
    for (int i = 1; i < n; i++)
    {
        if (height[i] > maxHeight)
        {
            maxHeight = height[i];
            index = i;
        } 
    }

    //solve the left side first
    for (int i = 0; i < index; i++)
    {
        if (maxLeft > height[i])
        {
            Water_stored += maxLeft - height[i];
        }
        else{
            maxLeft = height[i];
        }
    }

    // solve the right side of the buliding
    for (int i = n-1; i > index; i++)
    {
        if (maxRight > height[i])
        {
            Water_stored += maxRight - height[i];
        }
        else{
            maxRight = height[i];
        }
    }
    return Water_stored;
}
int main(){
    int n;
    cout<<"size: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"element in an array: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<Rain(arr);
    
}