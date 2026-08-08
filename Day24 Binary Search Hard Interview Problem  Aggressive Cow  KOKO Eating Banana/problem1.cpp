// Agressive cow -- problem
// (min)max posible distance;
#include<iostream>
#include<vector>
using namespace std;
int AgressCow(int arr[],int n, int k){
    // sort an array in assending order:
    for(int i = 0;i<n-1;i++){
        int index = i;
        for(int j=i+1;j<n;j++){
            if (arr[j]< arr[index])
            {
                index = j;
            }
            swap(arr[index],arr[i]);
        }
    }
    int start = 1,end = arr[n - 1]-arr[0],mid,ans;
        while(start <= end){
            mid = start + (end - start)/2;
            int count = 1,position = arr[0];
            for(int i=1;i<n;i++){
                if(position + mid <= arr[i]){
                    count ++;
                    position = arr[i];
                }
            }
            if(count < k){
                end = mid - 1;
            }
            else{
                ans =mid;
                start = mid + 1;
            }
        }
        
        return ans;
}
int main(){
    int n,arr[1000],k;//n = size , k = cows;
    cout<<"Size : ";
    cin>>n;
    cout<<"nos of Cows : ";
    cin>>k;
    cout<<"Element in an array : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<AgressCow(arr,n,k);
    
}