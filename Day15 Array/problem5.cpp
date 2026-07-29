// find the biggest in the array;
#include<iostream> 
using namespace std;
int main(){
    int arr[7]={8,6,12,18,15,1,3};
    int ans=INT8_MIN;
    for (int i = 0; i < 7; i++)
    {
        if (arr[i]>ans)
        {
            ans=arr[i];
        }
        
    }
    cout<<ans;
}