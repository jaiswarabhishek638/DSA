// find the minimun element of the array;
#include<iostream>
using namespace std;
int main(){
    int arr[6]={4,6,8,2,10,12};
    int ans=INT8_MAX;
    for (int i = 0; i < 6; i++)
    {
        if (arr[i]<ans)
        {
            ans = arr[i];
        }
        
    }
    cout<<ans;
}