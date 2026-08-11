// pair with difference :using two pointer
#include<iostream> 
#include<vector>
#include<algorithm>
using namespace std;
bool PairWithDiff(vector<int>&arr,int target){
    int  n = arr.size();
    sort(arr.begin(),arr.end());
    int start = 0,end = 1;
    if(target < 0){
        target = target * -1;
    }
    while (end<n)
    {
        if (arr[end] - arr[start] == target)
        {
            return true;
        }
        else if(arr[end] - arr[start] < target){
            end++ ;
        }
        else{
            start++ ;
        }
        
        if (start < end){
            end++;
            continue;
        }
        
    }
    return false;
    
}
int main(){
    vector<int>arr;
    int n,target;
    cout<<"Enter the size: ";
    cin>>n;
    cout<<"Enter the target: ";
    cin>>target;
    cout<<" Enter the element: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<PairWithDiff(arr,target);
    

}