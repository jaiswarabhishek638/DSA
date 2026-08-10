// two sum using two pointers
#include<iostream>
using namespace std;
int TwoSum(int arr[],int n,int target){
    int start = 0 , end = n;
    while (start < end)
    {
        if (arr[start] + arr[end] == target)
        {
            return 1;
            break;
        }
        else if (arr[start] + arr[end] < target)
        {
            start++ ;
        }
        else{
            end-- ;
        }
        
    }
    return 0;
    
};
int main(){
    int n , target;
    int arr[1000];
    cout<<"Enter the size: ";
    cin>>n;
    cout<<"Enter the target: ";
    cin>>target;
    cout<<"Enter the element: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<TwoSum(arr,n,target);
    
}