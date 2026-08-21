// moore voting algorithm
// input size:11 , element : 3 3 2 3 1 3 2 2 1 3 3;
#include<iostream>
#include<vector>
using namespace std;
int majorityElement(vector<int>& arr) {
        int n = arr.size();
        int candidate,count =0;
        for(int i = 0;i<n;i++){
            if(count == 0){
                count=1;
                candidate=arr[i];
            }
            else {
                if(candidate==arr[i]){
                count++ ;
                }
                else{
                count--;
                }
            }
        }
        count = 0;
        for(int i = 0;i<n;i++)
            if(arr[i] == candidate)
            count++;
        if(count>n/2)
        return candidate;
        else
        return -1;
    }
int main(){
    int n;
    cout<< "size: ";
    cin>>n;
    vector<int>arr(n,0);
    cout<<"Element in an array: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<majorityElement(arr);
    
}