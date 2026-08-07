// leetcode: 1011. Capacity To Ship Packages Within D Days
// arr={3, 2, 2, 4, 1, 4} size = 6; days?
#include<iostream>
#include<math.h>
using namespace std;
 int shipWithinDays(int weights[],int n, int days) {
        // int n= weights.size();
        int  start=0,end = 0 ;
        int ans = -1,mid;
        if(days > n){
            return -1;
        }
        for(int i = 0;i<n;i++){
            start = max(start,weights[i]);
            end += weights[i];
        }
        while(start <= end){
            mid = start + (end - start)/2;
            int count = 1,time = 0;
            for(int i=0;i<n;i++){
                time += weights[i];
                if(time > mid){
                    count++ ;
                    time = weights[i];
                }
            }
            if(count <= days){
                ans = mid;
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        return ans;
     }
int main(){
    int n,arr[1000],days;
    cout<<"Enter the size: ";
    cin>>n;
    cout<<"Enter days: ";
    cin>>days;
    cout<<"Enter the element: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<shipWithinDays(arr,n,days);
}