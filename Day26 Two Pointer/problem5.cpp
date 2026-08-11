//pair with multiplication: using two pointer;
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool PairWithMult(vector<int>&arr,int target){
    int n = arr.size();
    sort(arr.begin(),arr.end());
    int start=0,end = n-1;
    if (target < 0)
    {
        target = target * -1;
    }
    
    while (start < n){
        if (arr[start]  == target/arr[end])
        {
            return 1 ;
        }
        else if(arr[start]  < target/arr[end]){
            end-- ;
        }
        else{
            start++ ;
        }
        if (start == end){
            end--;
        }

    }
    return 0;
    
}
int main(){
    vector<int>arr;
    int n,target;
    cout<<"Enter the size: ";
    cin>>n;
    cout<<"Enter the target: ";
    cin>>target;
    cout<<"enter the element:";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<PairWithMult(arr,target);
    
}