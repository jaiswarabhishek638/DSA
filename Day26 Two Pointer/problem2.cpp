// two sum using binary search;
// just a try and run concept , it is woring or not;
#include<iostream>
#include<vector>
using namespace std;
int TwoSum(vector<int> &arr,int n, int target){
    for (int i = 0; i < n; i++)
    {
        int compliment = target - arr[i];
        int start= i+1 ; 
        int end = n - 1 ;
        while (start <= end ){
            int mid = start + (end - start)/2;
            if (compliment == arr[mid])
            {
                return mid;
                
            }
            else if ( arr[mid] < compliment)
            {
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
    }
    return 0;
    
};
int main(){
    int n,target;
    cout<<" enter the size: "<<endl;
    cin>>n;
    cout<<"Enter the target: "<<endl;
    cin>>target;
    vector<int> arr ;
    cout<<"Enter the element: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<TwoSum(arr,n,target);
    
}